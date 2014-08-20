#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include "realtyobject.h"

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

private:
    Ui::MainWindow *ui;
    RealtyObject *formR;

private slots:
    void openFormRealtyObjects();
};

#endif // MAINWINDOW_H
