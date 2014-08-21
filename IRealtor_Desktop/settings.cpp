#include "settings.h"
#include "ui_settings.h"
#include <QSettings>

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    getSettings();
}

settings::~settings()
{
    delete ui;
}

void settings::saveSettings(){
    QSettings options("DSoft", "IRealtor");

    options.setValue("server", ui->leServer->text());
    options.setValue("port", ui->lePort->text());
    options.setValue("user", ui->leUser->text());
    options.setValue("password", ui->lePassword->text());
}

void settings::getSettings(){
    QSettings options("DSoft", "IRealtor");

    ui->leServer->setText(options.value("server").toString());
    ui->lePort->setText(options.value("port").toString());
    ui->leUser->setText(options.value("user").toString());
    ui->lePassword->setText(options.value("password").toString());

    options.sync();
}
