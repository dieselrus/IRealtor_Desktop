#ifndef SELECTADDRESS_H
#define SELECTADDRESS_H

#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSettings>
#include <QDebug>
#include <QMessageBox>
#include "realtyobject.h"

namespace Ui {
class SelectAddress;
}

class SelectAddress : public QDialog
{
    Q_OBJECT

public:
    explicit SelectAddress(QWidget *parent = 0);
    ~SelectAddress();

private:
    Ui::SelectAddress *ui;
    QSqlDatabase db;
    bool createConnection();
    QString strServerDB;
    QString strPortDB;
    QString strUserDB;
    QString strPasswordDB;
    void getSettings();

private slots:
    void getSity();
    void getStreet();
    void getHaus();
    void setAddress();

public slots:
    void getRegion();
};

#endif // SELECTADDRESS_H
