#include "importkladr.h"
#include "ui_importkladr.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql>
#include <QSqlError>
#include <QSqlTableModel>

ImportKLADR::ImportKLADR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImportKLADR)
{
    ui->setupUi(this);
    getSettings();

    modelBrowse = new QStandardItemModel(this);
    modelKladr = new QStandardItemModel(this);
}

ImportKLADR::~ImportKLADR()
{
    delete ui;
}

/*
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
*/

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
        QSqlQuery odbc_query = QSqlQuery("SELECT distinct `code`, `name` , `socr` FROM KLADR WHERE `code` LIKE '%00000000000'", db2);
        //QSqlQuery odbc_query = QSqlQuery("SELECT distinct `code`, `name` , `socr` FROM KLADR WHERE `code` REGEXP  '*00000000000'", db2);
        odbc_query.executedQuery();

        modelKladr->insertColumn(0);
        modelKladr->insertColumn(1);
        modelKladr->insertColumn(2);

        modelKladr->setHeaderData(0, Qt::Horizontal, QString("Код"));
        modelKladr->setHeaderData(1, Qt::Horizontal, QString("Регион"));
        modelKladr->setHeaderData(2, Qt::Horizontal, QString("Сокрацение"));

        modelBrowse->insertColumn(0);
        modelBrowse->insertColumn(1);
        modelBrowse->insertColumn(2);

        modelBrowse->setHeaderData(0, Qt::Horizontal, QString("Код"));
        modelBrowse->setHeaderData(1, Qt::Horizontal, QString("Регион"));
        modelBrowse->setHeaderData(2, Qt::Horizontal, QString("Сокрацение"));
        ui->tableBrowse->setModel(modelBrowse);
        ui->tableBrowse->verticalHeader()->setVisible(false);

        while (odbc_query.next()) {
            //qDebug() << odbc_query.value(0).toString();

            modelKladr->insertRow(modelKladr->rowCount());
            modelKladr->setItem(modelKladr->rowCount() - 1,0, new QStandardItem(odbc_query.value(0).toString().left(2)));
            modelKladr->setItem(modelKladr->rowCount() - 1,1, new QStandardItem(odbc_query.value(1).toString()));
            modelKladr->setItem(modelKladr->rowCount() - 1,2, new QStandardItem(odbc_query.value(2).toString()));
        }

        ui->tableKladr->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableKladr->resizeColumnsToContents();
        ui->tableKladr->verticalHeader()->setVisible(false);
        //ui->tableKladr->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

        ui->tableKladr->setModel(modelKladr);
    }

    //ui->lstKladr->setModel(modelKladr);
    db2.close();
    db2.removeDatabase("dbf");
}

void ImportKLADR::addRegionToList(){
    //QString _data = ui->tableKladr->model()->data(ui->tableKladr->currentIndex()).toString();
    //qDebug() << _data;
    //QModelIndex index = ui->tableKladr->currentIndex();
    //qDebug() << index;
    //qDebug() <<  ui->tableKladr->model()->itemData(index);

    //qDebug() <<  ui->tableKladr->rowAt(1);

    //modelBrowse->insertRow(modelBrowse->rowCount());
    //modelBrowse->setItem();
    //QModelIndex index = modelBrowse->index(modelBrowse->rowCount()-1);
    //modelBrowse->setData(index, data);

    modelBrowse->insertRow(modelBrowse->rowCount());

    int row = ui->tableKladr->currentIndex().row();

    //qDebug() << "===" << ui->tableKladr->model()->data(modelKladr->index(row,0)).toString();
    //qDebug() << "===" << ui->tableKladr->model()->data(modelKladr->index(row,1)).toString();
    //qDebug() << "===" << ui->tableKladr->model()->data(modelKladr->index(row,2)).toString();

    modelBrowse->setItem(modelBrowse->rowCount() - 1,0, new QStandardItem(ui->tableKladr->model()->data(modelKladr->index(row,0)).toString()));
    modelBrowse->setItem(modelBrowse->rowCount() - 1,1, new QStandardItem(ui->tableKladr->model()->data(modelKladr->index(row,1)).toString()));
    modelBrowse->setItem(modelBrowse->rowCount() - 1,2, new QStandardItem(ui->tableKladr->model()->data(modelKladr->index(row,2)).toString()));

    modelKladr->removeRow(row);

    ui->tableBrowse->setModel(modelBrowse);

}

void ImportKLADR::removeRegionOnList(){

    modelKladr->insertRow(modelKladr->rowCount());

    int row = ui->tableBrowse->currentIndex().row();

    modelKladr->setItem(modelBrowse->rowCount() - 1,0, new QStandardItem(ui->tableBrowse->model()->data(modelKladr->index(row,0)).toString()));
    modelKladr->setItem(modelBrowse->rowCount() - 1,1, new QStandardItem(ui->tableBrowse->model()->data(modelKladr->index(row,1)).toString()));
    modelKladr->setItem(modelBrowse->rowCount() - 1,2, new QStandardItem(ui->tableBrowse->model()->data(modelKladr->index(row,2)).toString()));

    modelBrowse->removeRow(row);

    ui->tableKladr->setModel(modelKladr);

}

void ImportKLADR::importData(){

    QString slist;
    for (int i = 0; i < modelBrowse->rowCount(); i++){
        QModelIndex index = modelBrowse->index(i, 0);
        QString text = index.data(Qt::DisplayRole).toString();
        //text.prepend("'").append("'");
        text.prepend("`code` LIKE '").append("%'");

        if(!slist.isEmpty())
            slist.append(" OR ");

        slist.append(text);
    }

    //qDebug() << slist;

    dbfToMySQL("kladr_kladr", "KLADR", slist);
    dbfToMySQL("kladr_street", "STREET", slist);
    dbfToMySQL("kladr_doma", "DOMA", slist);

    accept();
}

void ImportKLADR::dbfToMySQL(QString mysqlTableName, QString odbcTableName, QString strRegion){

    QSqlDatabase db1 = QSqlDatabase::addDatabase("QMYSQL", "odbc_mysql1");
    db1.setHostName(strServerDB);
    //db.port(strPortDB);
    db1.setDatabaseName("IRealtor");
    db1.setUserName(strUserDB);
    db1.setPassword(strPasswordDB);

    if (!db1.open()) {
        qDebug() << "Error open mysql db kladr!";
        return;
    }

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
    }
    else if (!db1.isOpen())
    {
        qDebug()<<"Error mysql_odbc open db =" << db1.lastError().text();
    }
    else if (db2.isOpen() && db1.isOpen())
    {
        //db.transaction();

        // delete kladr
        QString mysql_str_dell = "DELETE FROM `" + mysqlTableName + "`";
        QSqlQuery mysql_query_dell = QSqlQuery(mysql_str_dell, db1);
        mysql_query_dell.exec();
        mysql_query_dell.clear();

        // select kladr
        QString str_odbc_query;
        str_odbc_query = "SELECT distinct name, socr, code, index, ocatd FROM " + odbcTableName + " WHERE " + strRegion + ";";

        //qDebug() << str_odbc_query;

        //return;

        QSqlQuery odbc_query(str_odbc_query, db2);

        odbc_query.executedQuery();

        int i =1;
        ui->progressBar->setMaximum(odbc_query.size());
        //qDebug() << odbc_query.size();
        ui->progressBar->setValue(i);

        while (odbc_query.next()) {
            i++;
            //qDebug() << odbc_query.value(0).toString() << odbc_query.value(1).toString() << odbc_query.value(2).toString() << odbc_query.value(3).toString() << odbc_query.value(4).toString();
            // add kladr
            QString mysql_str = "INSERT INTO `" + mysqlTableName + "` (`name`, `socr`, `code`, `index`, `ocatd`) VALUE ('" +
                    odbc_query.value(0).toString() + "', '" +
                    odbc_query.value(1).toString() + "', '" +
                    odbc_query.value(2).toString() + "', '" +
                    odbc_query.value(3).toString() + "', '" +
                    odbc_query.value(4).toString() +
                    "');";
            //qDebug() << mysql_str;

            if (db1.isOpen()) {
                QSqlQuery mysql_query = QSqlQuery(mysql_str, db1);
                //mysql_query.exec(mysql_str);

                if( !mysql_query.isActive()){
                    qDebug() << "Failed to add kladr. " << mysql_query.lastError().text();
                    QMessageBox::critical(0, QObject::tr("Database Error"), db1.lastError().text());
                    //db.rollback();
                    return;
                }

                //qDebug() << mysql_str;
                mysql_query.clear();

            } else {
                qDebug() << "Failed to open db kladr. " << db1.lastError().text();
            }

            ui->progressBar->setValue(i);
        }

        //db.commit();
    }

    db2.close();
    db1.close();
    db1.removeDatabase("odbc_mysql1");
    db2.removeDatabase("dbf");

}
