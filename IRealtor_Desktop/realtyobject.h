#ifndef REALTYOBJECT_H
#define REALTYOBJECT_H

#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>

#include <QDebug>
#include "dialogadd.h"
#include "selectaddress.h"

namespace Ui {
class RealtyObject;
}

class RealtyObject : public QDialog
{
    Q_OBJECT

public:
    explicit RealtyObject(QWidget *parent = 0);
    ~RealtyObject();
    QSqlDatabase db;
    bool createConnection();
    void getObjectData();
    //void setAdderss(QString str);

private:
    Ui::RealtyObject *ui;
    QString strServerDB;
    QString strPortDB;
    QString strUserDB;
    QString strPasswordDB;
    SelectAddress *formAddress;

    void showMap(QString _address);

private slots:
    void saveData();
    void getData();
    void getSettings();
    void addRegion();
    void addType();
    void addStatus();
    void addTradeType();
    void addMaterial();
    void addTypeApartament();
    void addDocumentProperty();
    void selectAdr();

public slots:
    void setAdderss();
    void updateData();
};

#endif // REALTYOBJECT_H
