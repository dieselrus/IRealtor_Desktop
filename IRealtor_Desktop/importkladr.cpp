#include "importkladr.h"
#include "ui_importkladr.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql>
#include <QSqlError>

ImportKLADR::ImportKLADR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImportKLADR)
{
    ui->setupUi(this);
    getSettings();

    modelBrowse = new QStringListModel(this);
     modelKladr = new QStringListModel(this);
}

ImportKLADR::~ImportKLADR()
{
    delete ui;
}

bool ImportKLADR::createConnection(){
    db = QSqlDatabase::addDatabase("QMYSQL", "odbc_mysql");
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

void ImportKLADR::getSettings(){
    QSettings options("DSoft", "IRealtor");

    strServerDB = options.value("server").toString();
    strPortDB = options.value("port").toString();
    strUserDB = options.value("user").toString();
    strPasswordDB = options.value("password").toString();
}

void ImportKLADR::browseDir(){
    dir = QFileDialog::getExistingDirectory(this, tr("Выберите папку с файлами КЛАДР"), "C:\\",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    ui->lePath->setText(dir);

    QFile fileKLADR(dir + "/KLADR.DBF");

    if(!fileKLADR.exists())
    {
        QMessageBox::critical(0, QObject::tr("Ошибка"), "Файл KLADR.DBF не обнаружен!");
        return;
    }

    QFile fileSTREET(dir + "/STREET.DBF");

    if(!fileSTREET.exists())
    {
        QMessageBox::critical(0, QObject::tr("Ошибка"), "Файл STREET.DBF не обнаружен!");
        dir = "";
        ui->lePath->setText(dir);
        return;
    }

    QFile fileDOMA(dir + "/DOMA.DBF");

    if(!fileDOMA.exists())
    {
        QMessageBox::critical(0, QObject::tr("Ошибка"), "Файл DOMA.DBF не обнаружен!");
        return;
    }

    QSqlDatabase db2=QSqlDatabase::addDatabase("QODBC", "dbf");
    db2.setDatabaseName("DRIVER={Microsoft dBase Driver (*.dbf)};FIL={dBase IV;};DefaultDir=" + dir);

    if(!db2.open())
    {
        qDebug()<<"Error odbc =" << db2.lastError().text();
    } else {
        QSqlQuery odbc_query = QSqlQuery("SELECT distinct `name` , `socr` FROM KLADR WHERE `code` LIKE '%00000000000'", db2);
        odbc_query.executedQuery();

        QStringList lstList;
        while (odbc_query.next()) {
            //lstKladr.append(odbc_query.value(0).toString());
            //qDebug() << odbc_query.value(0).toString();
            lstList << odbc_query.value(0).toString();
        }

        modelKladr->setStringList(lstList);

    }

    ui->lstKladr->setModel(modelKladr);
    db2.close();
    db2.removeDatabase("dbf");
}

void ImportKLADR::addRegionToList(){
    QString data = ui->lstKladr->model()->data(ui->lstKladr->currentIndex()).toString();
    //qDebug() << data;

    modelBrowse->insertRow(modelBrowse->rowCount());
    QModelIndex index = modelBrowse->index(modelBrowse->rowCount()-1);
    modelBrowse->setData(index, data);

    ui->lstBrowse->setModel(modelBrowse);

}

void ImportKLADR::removeRegionOnList(){

}

void ImportKLADR::importData(){

    // foreach(const QModelIndex &index, ui->listView->selectionModel()->selectedIndexes())
    //    list.append(model->itemFromIndex(index)->text());

    QString a, b;
    foreach(const QModelIndex &index, ui->lstBrowse->selectionModel()->selectedIndexes()){
        a = ui->lstBrowse->model()->data(index).toString();
        //b = modelBrowse->data(index).toString();
    }


    if(modelBrowse->rowCount() < 1){
        //QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
        return;
    }

    //dbfToMySQL("kladr_kladr", "KLADR");
    //dbfToMySQL("kladr_street", "STREET");
    //dbfToMySQL("kladr_doma", "DOMA");
}

void ImportKLADR::dbfToMySQL(QString mysqlTableName, QString odbcTableName){
    QSqlDatabase db2=QSqlDatabase::addDatabase("QODBC", "dbf");

    //db2.setDatabaseName(QString("Driver={Microsoft dBase Driver (*.dbf)};datasource=%1").arg(dir + "/KLADR.DBF"));
    QString dbfDriver;
    //dbfDriver = "DRIVER={Microsoft dBase Driver (*.dbf)};FIL={dBase IV;};DefaultDir=D:\\BASE_fias\\";
    dbfDriver = "DRIVER={Microsoft dBase Driver (*.dbf)};FIL={dBase IV;};DefaultDir=" + dir;
    //db2.setDatabaseName("Driver={Microsoft dBase Driver (*.dbf)};datasource=D:/BASE_fias/KLADR.DBF");
    db2.setDatabaseName(dbfDriver);

    if(!db2.open())
    {
        qDebug()<<"Error odbc =" << db2.lastError().text();
    } else if (!db.open() && !createConnection()) {
        qDebug()<<"Error mysql_odbc =" << db.lastError().text();
    }
    else
    {
        db.transaction();

        // delete kladr
        QString mysql_str_dell = "DELETE FROM `" + mysqlTableName + "`";
        QSqlQuery mysql_query_dell = QSqlQuery(mysql_str_dell, db);
        mysql_query_dell.exec();

        // select kladr
        QSqlQuery odbc_query = QSqlQuery("SELECT name, socr, code, index, ocatd FROM " + odbcTableName, db2);
        odbc_query.executedQuery();

        int i =1;
        ui->progressBar->setMaximum(odbc_query.size());
        ui->progressBar->setValue(i);

        while (odbc_query.next()) {
            i++;
            // add kladr
            QString mysql_str = "INSERT INTO `" + mysqlTableName + "` (`name`, `socr`, `code`, `index`, `ocatd`) VALUE ('" +
                    odbc_query.value(0).toString() + "', '" +
                    odbc_query.value(1).toString() + "', '" +
                    odbc_query.value(2).toString() + "', '" +
                    odbc_query.value(3).toString() + "', '" +
                    odbc_query.value(4).toString() +
                    "');";

            QSqlQuery mysql_query = QSqlQuery(mysql_str, db);
            if( !mysql_query.exec(mysql_str) ){
                qDebug() << "Failed to add kladr. " << mysql_query.lastError().text();
                QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
                db.rollback();
                return;
            }

            ui->progressBar->setValue(i);
        }

        db.commit();
    }

    db2.close();
    db.close();
    db.removeDatabase("odbc_mysql");
    db2.removeDatabase("dbf");
    accept();

}
