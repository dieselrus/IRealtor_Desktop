#include "realtyobject.h"
#include "ui_realtyobject.h"

RealtyObject::RealtyObject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RealtyObject)
{
    ui->setupUi(this);
}

RealtyObject::~RealtyObject()
{
    delete ui;
}
