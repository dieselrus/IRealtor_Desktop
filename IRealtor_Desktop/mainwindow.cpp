#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    getRegion();
    getType();
    getStatus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.1.21");
    db.setDatabaseName("IRealtor");
    db.setUserName("test");
    db.setPassword("123456");
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
        qDebug() << "Connected!";
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
        qDebug() << "Connected!";
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
        qDebug() << "Not connected!";
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
