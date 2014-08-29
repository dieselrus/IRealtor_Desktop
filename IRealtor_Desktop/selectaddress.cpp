#include "selectaddress.h"
#include "ui_selectaddress.h"

SelectAddress::SelectAddress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectAddress)
{
    ui->setupUi(this);

    //this->parentWindow = parent;
    getSettings();

    connect(ui->buttonBox, SIGNAL(accepted()), parent, SLOT(setAdderss()));
}

SelectAddress::~SelectAddress()
{
    delete ui;
    db.removeDatabase("adr");
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
    ui->cmbRegion->model()->sort(0, Qt::AscendingOrder);
}

void SelectAddress::getSity(){
    ui->cmbSity->clear();
    if (!db.isOpen()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        // Region
        QSqlQuery query = QSqlQuery(db);
        query.clear();
        query.exec("SELECT distinct name, socr, code FROM `kladr_kladr` WHERE `code` LIKE '" + ui->cmbRegion->currentData().toString() + "0%' ORDER BY `name`;");

        while (query.next()) {
            QString name = query.value(0).toString() + " "  + query.value(1).toString();
            QString code = query.value(2).toString().left(12);

            int index =  code.toInt();
            ui->cmbSity->insertItem(index, name, QVariant(code));
        }
    }

    ui->cmbSity->currentText() = "";
    ui->cmbSity->model()->sort(0, Qt::AscendingOrder);
}

void SelectAddress::getStreet(){
    if (!db.isOpen()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        // Region
        ui->cmbStreet->clear();
        QSqlQuery query = QSqlQuery(db);
        query.clear();
        QString sql = "SELECT distinct name, socr, code FROM `kladr_street` WHERE `code` LIKE '" + ui->cmbSity->currentData().toString() + "%' ORDER BY `name`;";
        //qDebug() << "Street"  << sql;
        query.exec(sql);

        while (query.next()) {
            QString name = query.value(0).toString() + " "  + query.value(1).toString();
            QString code = query.value(2).toString().left(15);

            int index =  code.toInt();
            ui->cmbStreet->insertItem(index, name, QVariant(code));
        }
    }

    ui->cmbStreet->currentText() = "";
    ui->cmbStreet->model()->sort(0, Qt::AscendingOrder);
}

void SelectAddress::getHaus(){
    if (!db.isOpen()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        // Haus
        ui->cmbHaus->clear();
        QSqlQuery query = QSqlQuery(db);
        query.clear();
        QString sql = "SELECT distinct name, socr, code FROM `kladr_doma` WHERE `code` LIKE '" + ui->cmbStreet->currentData().toString() + "%';";
        //qDebug() << "Street"  << sql;
        query.exec(sql);

        while (query.next()) {
            QString name = query.value(0).toString();
            //QString code = query.value(2).toString().left(18);

            QStringList strList = name.split(",");

            ui->cmbHaus->addItems(strList);
        }
    }

    ui->cmbHaus->currentText() = "";
    ui->cmbHaus->model()->sort(0, Qt::AscendingOrder);
}

void SelectAddress::setAddress(){
    strAddress = ui->cmbRegion->currentText() + ", " + ui->cmbSity->currentText() + ", " + ui->cmbStreet->currentText() + ", " + ui->cmbHaus->currentText() + " д., " + ui->leKvartira->text() + " кв.";

    accept();
}
