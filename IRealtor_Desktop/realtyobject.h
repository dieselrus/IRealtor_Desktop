#ifndef REALTYOBJECT_H
#define REALTYOBJECT_H

#include <QWidget>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>

namespace Ui {
class RealtyObject;
}

class RealtyObject : public QWidget
{
    Q_OBJECT

public:
    explicit RealtyObject(QWidget *parent = 0);
    ~RealtyObject();
    QSqlDatabase db;
    bool createConnection();
    void getObjectData();

private:
    Ui::RealtyObject *ui;

private slots:
    void saveData();
    void getData();
};

#endif // REALTYOBJECT_H
