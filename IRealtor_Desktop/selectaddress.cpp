#include "selectaddress.h"
#include "ui_selectaddress.h"

SelectAddress::SelectAddress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectAddress)
{
    ui->setupUi(this);
    getSettings();
}

SelectAddress::~SelectAddress()
{
    delete ui;
}

bool SelectAddress::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL", "adr");
    db.setHostName(strServerDB);
    //db.port(strPortDB);
    db.setDatabaseName("IRealtor");
    db.setUserName(strUserDB);
    db.setPassword(strPasswordDB);
    if (!db.open()) {
        qDebug() << "Database error select address";
        return false;
    }
    return true;
}

void SelectAddress::getSettings(){
    QSettings options("DSoft", "IRealtor");

    strServerDB = options.value("server").toString();
    strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}

void SelectAddress::getRegion(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        // Region
        QSqlQuery query = QSqlQuery(db);
        query.clear();
        query.exec("SELECT name, socr, code FROM `kladr_kladr` WHERE `code` LIKE '%00000000000'");

        while (query.next()) {
            QString name = query.value(0).toString() + " "  + query.value(1).toString();
            QString code = query.value(2).toString().left(2);

            int index =  code.toInt();
            ui->cmbRegion->insertItem(index, name, QVariant(code));
        }
    }

    ui->cmbRegion->currentText() = "";
}

void SelectAddress::getSity(){
    if (!db.isOpen()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        // Region
        QSqlQuery query = QSqlQuery(db);
        query.clear();
        query.exec("SELECT distinct name, socr, code FROM `kladr_kladr` WHERE `code` LIKE '" + + "%';");

        while (query.next()) {
            QString name = query.value(0).toString() + " "  + query.value(1).toString();
            QString code = query.value(2).toString().left(2);

            int index =  code.toInt();
            ui->cmbRegion->insertItem(index, name, QVariant(code));
        }
    }

    ui->cmbRegion->currentText() = "";
}

void SelectAddress::getStreet(){

}
