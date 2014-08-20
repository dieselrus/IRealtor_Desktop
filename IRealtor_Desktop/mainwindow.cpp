#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    getSettings();

    getRegion();
    getType();
    getStatus();

    db.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(strServerDB);
    //db.port(strPortDB);
    db.setDatabaseName("IRealtor");
    db.setUserName(strUserDB);
    db.setPassword(strPasswordDB);
    if (!db.open()) {
        qDebug() << "Database error occurred";
        return false;
    }
    return true;
}

void MainWindow::getRegion(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected!";
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
        qDebug() << "Not connected!";
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

void MainWindow::openFormRealtyObjects(){
    formRO = new RealtyObject();
    formRO->show();
}

void MainWindow::getSettings(){
    QSettings options;
    strServerDB = options.value("server").toString();
    //strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}
