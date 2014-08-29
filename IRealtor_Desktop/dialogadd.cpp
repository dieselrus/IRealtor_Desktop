#include "dialogadd.h"
#include "ui_dialogadd.h"
#include <QPushButton>
#include <QInputDialog>
#include <QDebug>
#include <QMessageBox>
#include <QSqlTableModel>

DialogAdd::DialogAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdd)
{
    ui->setupUi(this);

    //QPushButton *pOkButton = ui->buttonBox->button(QDialogButtonBox::Ok);
    //pOkButton->setText("Добавить");

    QPushButton *pCloseButton = ui->buttonBox->button(QDialogButtonBox::Close);
    pCloseButton->setText("Закрыть");

    //QObject::connect(ui->toolButton_2, SIGNAL(clicked()), this, SLOT(removeData()));

    connect(ui->buttonBox, SIGNAL(rejected()), parent, SLOT(updateData()));

    getSettings();
}

DialogAdd::~DialogAdd()
{
    delete ui;
    db.close();
}

bool DialogAdd::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL", "DialogAdd");
    db.setHostName(strServerDB);
    //db.port(strPortDB);
    db.setDatabaseName("IRealtor");
    db.setUserName(strUserDB);
    db.setPassword(strPasswordDB);
    if (!db.open()) {
        qDebug() << "Database error occurred dialog add. " << db.lastError().text();
        return false;
    }
    return true;
}

void DialogAdd::addData()
{
    QSqlQuery query;
    bool ok;
    QString text = QInputDialog::getText(this, tr("Введите имя/название"),tr("Имя/название:"), QLineEdit::Normal,"", &ok);
    if (ok && !text.isEmpty()){
        QString sql;

        if (!db.open() && !createConnection()){
            qDebug() << "Not connected DialogAdd! " << db.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
        } else {
            sql = "INSERT INTO " + strTableName + " (name)  VALUE ('" + text + "');";
        }

        if( !query.exec(sql) ){
            qDebug() << "Failed to add region. " << query.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
        } else {
            //close();
            qDebug()<<"last inserted id:"<<query.lastInsertId().toString();
        }

        db.close();
        // Update model
        getData();
    }
}

void DialogAdd::removeData()
{
    QSqlQuery query;
    bool ok;
    QString text = QInputDialog::getText(this, tr("Введите имя/название"),tr("Имя/название:"), QLineEdit::Normal,"", &ok);
    /*
    if (ok && !text.isEmpty()){
        QString sql;

        if (!db.open() && !createConnection()){
            qDebug() << "Not connected DialogAdd! " << db.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
        } else {
            sql = "INSERT INTO " + strTableName + " (name)  VALUE ('" + text + "');";
        }

        if( !query.exec(sql) ){
            qDebug() << "Failed to add region. " << query.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
        } else {
            close();
        }

        db.close();
    }
    */
}

//
void DialogAdd::getSettings(){
    QSettings options("DSoft", "IRealtor");

    strServerDB = options.value("server").toString();
    strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}

// Real data to tabViewe
void DialogAdd::getData(){

    setWindowTitle(strWindowName);

    //qDebug() << parent();
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable(strTableName);          // Имя таблицы базы данных.
    //model->setFilter("salary >= 1000");   // Условие WHERE.
    model->setSort(0, Qt::AscendingOrder); // Сортировка по возрастанию id.
    model->select();                      // Получить данные.

    ui->tableView->setModel(model);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
}
