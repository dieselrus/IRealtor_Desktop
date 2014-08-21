#ifndef EXPORTXLS_H
#define EXPORTXLS_H

#include <QDialog>

namespace Ui {
class ExportXLS;
}

class ExportXLS : public QDialog
{
    Q_OBJECT

public:
    explicit ExportXLS(QWidget *parent = 0);
    ~ExportXLS();

private:
    Ui::ExportXLS *ui;
private slots:
    void readXLS();
    void Export();
};

#endif // EXPORTXLS_H
