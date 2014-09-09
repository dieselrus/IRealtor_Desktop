#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    getSettings();

    getRegion();
    getType();
    getStatus();
    readRealtyObjects();

    db.close();

    // signal exit
    connect(ui->action_close, SIGNAL(triggered()), this, SLOT(close()));
    // signal open form settings
    connect(ui->action_settings, SIGNAL(triggered()), this, SLOT(opensettings()));
    // signal open form kladrimport
    connect(ui->action_kladr, SIGNAL(triggered()), this, SLOT(KLADRimport()));
    // signal change value
    QObject::connect(ui->spnArea1, SIGNAL(valueChanged(int)), ui->sldArea1, SLOT(setValue(int)));
    QObject::connect(ui->sldArea1, SIGNAL(valueChanged(int)), ui->spnArea1, SLOT(setValue(int)));
    QObject::connect(ui->spnArea2, SIGNAL(valueChanged(int)), ui->sldArea2, SLOT(setValue(int)));
    QObject::connect(ui->sldArea2, SIGNAL(valueChanged(int)), ui->spnArea2, SLOT(setValue(int)));

}

// SELECT `realtyobjects`.`region_id`, `realtyobjects`.`type_id`, `realtyobjects`.`status_id`, `realtyobjects`.`trade_id`, `region`.`name` AS `Region`, `type`.`name` AS `Type` FROM `realtyobjects` JOIN `region` ON `realtyobjects`.`region_id` = `region`.`id` JOIN `type` ON `realtyobjects`.`type_id` = `type`.`id`

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}

bool MainWindow::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(strServerDB);
    //db.port(strPortDB);
    db.setDatabaseName("IRealtor");
    db.setUserName(strUserDB);
    db.setPassword(strPasswordDB);
    if (!db.open()) {
        qDebug() << "Database error occurred! " << db.lastError().text();
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
        return false;
    }
    return true;
}

void MainWindow::getRegion(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected! " << db.lastError().text();
    }
    else{
        qDebug() << "Connected region!";
        QSqlQuery query;
        query.exec("SELECT name FROM region");

        QStringList lstRegion;
        while (query.next()) {
            QString name = query.value(0).toString();
            //qDebug() << "name:" << name;
            lstRegion.append(name);
        }

        ui->cbxRegion->insertItems(0, lstRegion);
        //db.close();
    }
}

void MainWindow::getType(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected! " << db.lastError().text();
    }
    else{
        qDebug() << "Connected type!";
        QSqlQuery query;
        query.exec("SELECT name FROM type");

        QStringList lstType;
        while (query.next()) {
            QString name = query.value(0).toString();
            //qDebug() << "name:" << name;
            lstType.append(name);
        }

        ui->cbxType->insertItems(0, lstType);
    }
}

void MainWindow::getStatus(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected status!";
    }
    else{
        qDebug() << "Connected!";
        QSqlQuery query;
        query.exec("SELECT name FROM status");

        QStringList lstStatus;
        while (query.next()) {
            QString name = query.value(0).toString();
            //qDebug() << "name:" << name;
            lstStatus.append(name);
        }

        ui->cbxStatus->insertItems(0, lstStatus);
    }
}

// Open form realty objects
void MainWindow::openFormRealtyObjects(){
    formRO = new RealtyObject(this);
    formRO->setAttribute(Qt::WA_DeleteOnClose);
    //ui->MainWindow->addSubWindow(formRO);
    formRO->show();
    formRO->activateWindow();
}

// Open form settings
void MainWindow::opensettings(){
    formSettings = new settings(this);
    formSettings->setAttribute(Qt::WA_DeleteOnClose);
    //ui->MainWindow->addSubWindow(formSettings);
    formSettings->show();
}

// Read settings
void MainWindow::getSettings(){
    QSettings options("DSoft", "IRealtor");

    strServerDB = options.value("server").toString();
    //strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}

// Open KLADR import form
void MainWindow::KLADRimport(){

    formKLADRimport = new ImportKLADR(this);
    formKLADRimport->setAttribute(Qt::WA_DeleteOnClose);
    //ui->MainWindow->addSubWindow(formKLADRimport);
    formKLADRimport->show();

}

// Real realty objects
void MainWindow::readRealtyObjects(){
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("realtyobjects");          // Имя таблицы базы данных.
    //model->setFilter("salary >= 1000");   // Условие WHERE.
    model->setSort(0, Qt::AscendingOrder); // Сортировка по возрастанию id.
    model->select();                      // Получить данные.

    QSqlQueryModel *_model = new QSqlQueryModel();
    _model->setQuery("SELECT `realtyobjects`.`id`, `address`.`view`, `region`.`name`, `realtyobjects`.`rooms`, `realtyobjects`.`price`, `status`.`name` , `type`.`name`, `trade`.`name`\
                     FROM `realtyobjects` \
                     JOIN `region`  ON `realtyobjects`.`region_id`  = `region`.`id`     \
                     JOIN `status`  ON `realtyobjects`.`status_id`  = `status`.`id`     \
                     JOIN `address` ON `realtyobjects`.`address`    = `address`.`id`    \
                     JOIN `type`    ON `realtyobjects`.`type_id`    = `type`.`id`       \
                     JOIN `trade`   ON `realtyobjects`.`trade_id`   = `trade`.`id` ");

    _model->setHeaderData(1, Qt::Horizontal, tr("Полный адрес"));
    _model->setHeaderData(2, Qt::Horizontal, tr("Район"));
    _model->setHeaderData(3, Qt::Horizontal, tr("Комнат"));
    _model->setHeaderData(4, Qt::Horizontal, tr("Цена"));
    _model->setHeaderData(5, Qt::Horizontal, tr("Статус"));
    _model->setHeaderData(6, Qt::Horizontal, tr("Тип"));
    _model->setHeaderData(7, Qt::Horizontal, tr("Сделка"));
    //_model->setHeaderData(8, Qt::Horizontal, tr("Name"));

    ui->tvRealtyObjects->setModel(_model);
    ui->tvRealtyObjects->setAlternatingRowColors(true);
    ui->tvRealtyObjects->resizeRowsToContents();
    ui->tvRealtyObjects->resizeColumnsToContents();
    ui->tvRealtyObjects->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tvRealtyObjects->setColumnHidden(0, true);

}

// openn form add task
void MainWindow::openTaskForm()
{
    formTask = new addTask(this);
    //formTask->
    formTask->setAttribute(Qt::WA_DeleteOnClose);
    //ui->MainWindow->addSubWindow(formKLADRimport);
    formTask->exec();
}

// update tab realtyobjects
void MainWindow::changeTab()
{
    readRealtyObjects();
}
