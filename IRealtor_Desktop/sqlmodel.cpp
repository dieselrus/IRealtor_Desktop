#include <QtGui>
#include "sqlmodel.h"

CustomSqlModel::CustomSqlModel(QObject *parent)
    : QStandardItemModel(parent)
{
}

//! [0]
QVariant CustomSqlModel::data(const QModelIndex &index, int role) const
{
    QVariant value = QStandardItemModel::data(index, role);
    switch (role)
    {
        case Qt::TextColorRole: // Цвет текста
                if(index.column() == 1)
                    return QVariant(QColor(Qt::blue));
                break;
        case Qt::TextAlignmentRole: // Выравнивание
                if(index.column() == 0)
                    return int(Qt::AlignLeft | Qt::AlignVCenter);
                else
                    return int(Qt::AlignRight | Qt::AlignVCenter);
                break;
        case Qt::FontRole: // Шрифт
                if(index.column() == 1)
                {
                    QFont font = QFont("Helvetica", 10, QFont::Bold);
                    return QVariant(font);
                }
                break;
        case Qt::BackgroundColorRole:  // Цвет фона
                int a = (index.row() % 2) ? 14 : 0;
                if(index.column() == 0)
                    return QVariant(QColor(220,240-a,230-a));
                else if(index.column() == 4)
                    return QVariant(QColor(200,220-a,255-a));
                break;
    }
    return value;
}
//! [0]
