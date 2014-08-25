#ifndef DIALOGADD_H
#define DIALOGADD_H

#include <QDialog>
#include <QSettings>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QSqlError>

namespace Ui {
class DialogAdd;
}

class DialogAdd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdd(QWidget *parent = 0);
    ~DialogAdd();
    QString strTableName;
    QString strWindowName;
    void getData();

private:
    Ui::DialogAdd *ui;
    QSqlDatabase db;
    bool createConnection();
    QString strServerDB;
    QString strPortDB;
    QString strUserDB;
    QString strPasswordDB;
    //void getData();

private slots:
    void addData();
    void removeData();
    void getSettings();
};

#endif // DIALOGADD_H
