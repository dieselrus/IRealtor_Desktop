#include "exportxls.h"
#include "ui_exportxls.h"

ExportXLS::ExportXLS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExportXLS)
{
    ui->setupUi(this);
}

ExportXLS::~ExportXLS()
{
    delete ui;
}

void ExportXLS::readXLS(){
    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("DRIVER={Microsoft Excel Driver (*.xls)};DBQ=" + QString("c:\\file.xlsx"));

    if(db.open())
    {
        QSqlQuery query("select * from [" + QString("Sheet1") + "$]"); // Select range, place A1:B5 after $

        while (query.next())
        {
            QString column1= query.value(0).toString();
            qDebug() << column1;
        }
    }

    model = new QSqlTableModel(this);
    model->setTable("tags");
    model->select();
    tableView->setModel(model);
    */
}

void ExportXLS::Export(){

}
