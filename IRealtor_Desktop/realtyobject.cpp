#include "realtyobject.h"
#include "ui_realtyobject.h"
#include <QSettings>

RealtyObject::RealtyObject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RealtyObject)
{
    ui->setupUi(this);

    getSettings();

    getData();

    db.close();
}

RealtyObject::~RealtyObject()
{
    delete ui;
}

bool RealtyObject::createConnection(){
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

void RealtyObject::getObjectData(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected!";
    }
    else{
        //qDebug() << "Connected realty objects!";
        QSqlQuery query;
        query.exec("SELECT * FROM realtyobjects");

        QStringList lstRegion;
        while (query.next()) {
            QString name = query.value(0).toString();
            //qDebug() << "name:" << name;
            lstRegion.append(name);
        }

        //ui->cbxRegion->insertItems(0, lstRegion);
        //db.close();
    }
}

void RealtyObject::getData(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected status!";
    }
    else{
        qDebug() << "Connected get data!";

        QSqlQuery query;

        /*
        // Address
        QSqlQuery query;
        query.exec("SELECT name FROM address");

        while (query.next()) {
            QString name = query.value(0).toString();

            ui->leAddress->setText(name);
        }
        */

        // Region
        query.clear();
        query.exec("SELECT id, name FROM region");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbRegion->insertItem(index, name);
        }

        // Type
        query.clear();
        query.exec("SELECT id, name FROM type");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbType->insertItem(index, name);
        }

        // Status
        query.clear();
        query.exec("SELECT id, name FROM status");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbStatus->insertItem(index, name);
        }


    }
}

void RealtyObject::saveData(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected!";
    }
    else{
        //qDebug() << "Connected realty objects!";
        QSqlQuery query;
        query.prepare("INSERT INTO realtyobjects (address, region_id, type_id, status_id, trade_id, date_create, rooms, total_area, floor_area, kitchen_area, floors, floor, material_id, balkony, loggia, type_apartment_id, owner_id, document_property_id, contact_phone, internet, phone, cabletv, central_heating, central_water, central_sewage, price, percentage_commission, amount_commission, coordinates, description) VALUES (:address, :region_id, :type_id, :status_id, :trade_id, :date_create, :rooms, :total_area, :floor_area, :kitchen_area, :floors, :floor, :material_id, :balkony, :loggia, :type_apartment_id, :owner_id, :document_property_id, :contact_phone, :internet, :phone, :cabletv, :central_heating, :central_water, :central_sewage, :price, :percentage_commission, :amount_commission, :coordinates, :description);");
        query.bindValue(":address",             ui->leAddress->text());
        query.bindValue(":region_id",           ui->cmbRegion->currentIndex());
        query.bindValue(":type_id",             ui->cmbType->currentIndex());
        query.bindValue(":status_id",           ui->cmbStatus->currentIndex());
        query.bindValue(":trade_id",            ui->cmbTradeType->currentIndex());
        query.bindValue(":date_create",         ui->dtCreate->date());
        query.bindValue(":rooms",               ui->spnRooms->value());
        query.bindValue(":total_area",          ui->spnTotalArea->value());
        query.bindValue(":floor_area",          ui->spnFloorArea->value());
        query.bindValue(":kitchen_area",        ui->spnKitchenArea->value());
        query.bindValue(":floors",              ui->spnFloors->value());
        query.bindValue(":floor",               ui->spnFloor->value());
        query.bindValue(":material_id",         ui->cmbMaterial->currentIndex());
        query.bindValue(":balkony",             ui->chbBalkony->checkState());
        query.bindValue(":loggia",              ui->chbLoggia->checkState());
        query.bindValue(":type_apartment_id",   ui->cmbTypeApartament->currentIndex());
        query.bindValue(":owner_id",            ui->leOwner->text());
        query.bindValue(":document_property_id", ui->cmbDocProperty->currentIndex());
        query.bindValue(":contact_phone",       ui->lePhone->text());
        query.bindValue(":internet",            ui->chbInternet->checkState());
        query.bindValue(":phone",               ui->chbPhone->checkState());
        query.bindValue(":cabletv",             ui->chbCableTV->checkState());
        query.bindValue(":central_heating",     ui->chbCentralHeating->checkState());
        query.bindValue(":central_water",       ui->chbCentralWater->checkState());
        query.bindValue(":central_sewage",      ui->chbCentralSewage->checkState());
        query.bindValue(":price",               ui->spnPrice->value());
        query.bindValue(":percentage_commission", ui->spnPercentageCommission->value());
        query.bindValue(":amount_commission",   ui->spnAmountCommission->value());
        query.bindValue(":coordinates",         "ui->leCo->text()""");
        query.bindValue(":description",         "");

        if( !query.exec() ){
            qDebug() << "Failed to add tag";
        } else {
            close();
        }

    }
}

void RealtyObject::getSettings(){
    QSettings options;
    strServerDB = options.value("server").toString();
    strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}
