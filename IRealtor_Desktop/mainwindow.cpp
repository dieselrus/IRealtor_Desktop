#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QSqlError>
#include <QSqlTableModel>
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
    // signal open forn settings
    connect(ui->action_settings, SIGNAL(triggered()), this, SLOT(opensettings()));
    // signal change value
    QObject::connect(ui->spnArea1, SIGNAL(valueChanged(int)), ui->sldArea1, SLOT(setValue(int)));
    QObject::connect(ui->sldArea1, SIGNAL(valueChanged(int)), ui->spnArea1, SLOT(setValue(int)));
    QObject::connect(ui->spnArea2, SIGNAL(valueChanged(int)), ui->sldArea2, SLOT(setValue(int)));
    QObject::connect(ui->sldArea2, SIGNAL(valueChanged(int)), ui->spnArea2, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(strServerDB);
    //db.port(strPortDB);
    db.setDatabaseName("IRealtor2");
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
    formRO = new RealtyObject();
    formRO->show();
}

// Open form settings
void MainWindow::opensettings(){
    formSettings = new settings();
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

// Real realty objects
void MainWindow::readRealtyObjects(){
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("realtyobjects");          // Имя таблицы базы данных.
    //model->setFilter("salary >= 1000");   // Условие WHERE.
    model->setSort(0, Qt::DescendingOrder); // Сортировка по убыванию id.
    model->select();                      // Получить данные.

    ui->tvRealtyObjects->setModel(model);
    ui->tvRealtyObjects->setAlternatingRowColors(true);
    ui->tvRealtyObjects->resizeRowsToContents();
    ui->tvRealtyObjects->resizeColumnsToContents();

}

