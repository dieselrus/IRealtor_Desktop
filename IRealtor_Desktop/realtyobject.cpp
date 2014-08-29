#include "realtyobject.h"
#include "ui_realtyobject.h"
#include <QSettings>
#include <QSqlError>
#include <QMessageBox>

RealtyObject::RealtyObject(QWidget *parent) :
    QDialog(parent),
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
    db.close();
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

    ui->cmbDocProperty->clear();
    ui->cmbMaterial->clear();
    ui->cmbRegion->clear();
    ui->cmbStatus->clear();
    ui->cmbTradeType->clear();
    ui->cmbType->clear();
    ui->cmbTypeApartament->clear();

    if (!db.open() && !createConnection()){
        qDebug() << "Not connected status!";
        QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
    }
    else{
        //qDebug() << "Connected get data!";

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
            ui->cmbRegion->insertItem(index, name, QVariant(index));
        }

        // Type
        query.clear();
        query.exec("SELECT id, name FROM type");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbType->insertItem(index, name, QVariant(index));
        }

        // Status
        query.clear();
        query.exec("SELECT id, name FROM status");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbStatus->insertItem(index, name, QVariant(index));
        }

        // Material
        query.clear();
        query.exec("SELECT id, name FROM material");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbMaterial->insertItem(index, name, QVariant(index));
        }

        // Document property
        query.clear();
        query.exec("SELECT id, name FROM document_property");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbDocProperty->insertItem(index, name, QVariant(index));
        }

        // trade
        query.clear();
        query.exec("SELECT id, name FROM trade");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbTradeType->insertItem(index, name, QVariant(index));
        }

        // type_apartment
        query.clear();
        query.exec("SELECT id, name FROM type_apartment");

        while (query.next()) {
            int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->cmbTypeApartament->insertItem(index, name, QVariant(index));
        }

        // address
        query.clear();
        query.exec("SELECT id, view FROM address");

        while (query.next()) {
            //int index =  query.value(0).toInt();
            QString name = query.value(1).toString();

            ui->leAddress->setText(name);
        }

    }

    db.close();
}
//////////////////////////////////////////////////////////  ADDRESS /////////////////////////////////////////////////////////////////
void RealtyObject::selectAdr(){
    formAddress = new SelectAddress(this); // создаём диалог
    //dial.parentWindow = this;
    formAddress->getRegion();
    formAddress->exec();
}

void RealtyObject::setAdderss(){
    ui->leAddress->setText(formAddress->strAddress);
}

//////////////////////////////////////////////////////////  SAVE DATA /////////////////////////////////////////////////////////////////
void RealtyObject::saveData(){
    if (!db.open() && !createConnection()){
        qDebug() << "Not connected!";
    }
    else{
        //qDebug() << "Connected realty objects!";

        db.transaction();

        QSqlQuery query_address;
        // add address
        QString sql_address = "INSERT INTO address (`region`, `street`, `hause`, `kvartira`, `view`)  VALUE ('" +
                ui->leAddress->text().split(",")[1] + "','" +
                ui->leAddress->text().split(",")[2] + "','" +
                ui->leAddress->text().split(",")[3] + "','" +
                ui->leAddress->text().split(",")[4] + "','" +
                ui->leAddress->text() + "');";

        if( !query_address.exec(sql_address) ){
            qDebug() << "Failed to add region. " << query_address.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
            db.rollback();
            return;
        } else {
            //close();
            qDebug()<<"last inserted address id:" << query_address.lastInsertId().toString();
        }

        // add realty objects
        QSqlQuery query;
        query.prepare("INSERT INTO realtyobjects (address, region_id, type_id, status_id, trade_id, date_create, rooms, total_area, floor_area, kitchen_area, floors, floor, material_id, balkony, loggia, type_apartment_id, owner_id, document_property_id, contact_phone, internet, phone, cabletv, central_heating, central_water, central_sewage, price, percentage_commission, amount_commission, coordinates, description) VALUES (:address, :region_id, :type_id, :status_id, :trade_id, :date_create, :rooms, :total_area, :floor_area, :kitchen_area, :floors, :floor, :material_id, :balkony, :loggia, :type_apartment_id, :owner_id, :document_property_id, :contact_phone, :internet, :phone, :cabletv, :central_heating, :central_water, :central_sewage, :price, :percentage_commission, :amount_commission, :coordinates, :description);");
        query.bindValue(":address",             query_address.lastInsertId().toString());
        // http://www.qtcentre.org/threads/3887-QComboBox-insertItem()-not-honoring-id
        query.bindValue(":region_id",           ui->cmbRegion->currentData());
        query.bindValue(":type_id",             ui->cmbType->currentData());
        query.bindValue(":status_id",           ui->cmbStatus->currentData());
        query.bindValue(":trade_id",            ui->cmbTradeType->currentData());
        query.bindValue(":date_create",         ui->dtCreate->date());
        query.bindValue(":rooms",               ui->spnRooms->value());
        query.bindValue(":total_area",          ui->spnTotalArea->value());
        query.bindValue(":floor_area",          ui->spnFloorArea->value());
        query.bindValue(":kitchen_area",        ui->spnKitchenArea->value());
        query.bindValue(":floors",              ui->spnFloors->value());
        query.bindValue(":floor",               ui->spnFloor->value());
        query.bindValue(":material_id",         ui->cmbMaterial->currentData());
        query.bindValue(":balkony",             ui->chbBalkony->checkState());
        query.bindValue(":loggia",              ui->chbLoggia->checkState());
        query.bindValue(":type_apartment_id",   ui->cmbTypeApartament->currentData());
        query.bindValue(":owner_id",            ui->leOwner->text());
        query.bindValue(":document_property_id", ui->cmbDocProperty->currentData());
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
            qDebug() << "Failed to add tag " << query.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database Error"),db.lastError().text());
        } else {
            close();
        }

    }

    db.commit();
    db.close();

}

void RealtyObject::getSettings(){
    QSettings options("DSoft", "IRealtor");

    strServerDB = options.value("server").toString();
    strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}

void RealtyObject::addRegion(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "region";
    dial.strWindowName = "Район";
    dial.getData();
    dial.exec();

}

void RealtyObject::addType(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "type";
    dial.strWindowName = "Тип объекта";
    dial.getData();
    dial.exec();

}

void RealtyObject::addStatus(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "status";
    dial.strWindowName = "Статус объекта";
    dial.getData();
    dial.exec();

}

void RealtyObject::addTradeType(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "trade";
    dial.strWindowName = "Тип сделки";
    dial.getData();
    dial.exec();

}

void RealtyObject::addMaterial(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "material";
    dial.strWindowName = "Материал изготовления";
    dial.getData();
    dial.exec();

}

void RealtyObject::addTypeApartament(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "type_apartment";
    dial.strWindowName = "Тип";
    dial.getData();
    dial.exec();

}

void RealtyObject::addDocumentProperty(){

    DialogAdd dial(this); // создаём диалог

    dial.strTableName = "document_property";
    dial.strWindowName = "Документ собственности";
    dial.getData();
    dial.exec();

}


void RealtyObject::updateData(){
    getData();
}

