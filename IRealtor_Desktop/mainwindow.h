#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include "realtyobject.h"
#include "settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase db;
    bool createConnection();
    void getRegion();
    void getType();
    void getStatus();
    void getSettings();

private:
    Ui::MainWindow *ui;
    RealtyObject *formRO;
    settings *formSettings;

    QString strServerDB;
    QString strPortDB;
    QString strUserDB;
    QString strPasswordDB;

private slots:
    void openFormRealtyObjects();
    void opensettings();

public slots:
    void readRealtyObjects();

};

#endif // MAINWINDOW_H
