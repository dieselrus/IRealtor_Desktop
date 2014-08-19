#ifndef REALTYOBJECT_H
#define REALTYOBJECT_H

#include <QWidget>

namespace Ui {
class RealtyObject;
}

class RealtyObject : public QWidget
{
    Q_OBJECT

public:
    explicit RealtyObject(QWidget *parent = 0);
    ~RealtyObject();

private:
    Ui::RealtyObject *ui;
};

#endif // REALTYOBJECT_H
