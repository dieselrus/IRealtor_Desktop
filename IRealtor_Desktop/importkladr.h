#ifndef IMPORTKLADR_H
#define IMPORTKLADR_H

#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include "sqlmodel.h"

namespace Ui {
class ImportKLADR;
}

class ImportKLADR : public QDialog
{
    Q_OBJECT

public:
    explicit ImportKLADR(QWidget *parent = 0);
    ~ImportKLADR();

private:
    Ui::ImportKLADR *ui;
    QString dir;
    QString strServerDB;
    QString strPortDB;
    QString strUserDB;
    QString strPasswordDB;
    //QSqlDatabase db;

    QStandardItemModel *modelKladr;
    QStandardItemModel *modelBrowse;

    //bool createConnection();
    void getSettings();
    void dbfToMySQL(QString mysqlTableName, QString odbcTableName, QString strRegion);

private slots:
    void browseDir();
    void importData();
    void addRegionToList();
    void removeRegionOnList();

};

#endif // IMPORTKLADR_H
