#ifndef SQLMODEL_H
#define SQLMODEL_H
#include <QStandardItemModel>

//! [0]
class CustomSqlModel : public QStandardItemModel
{
    Q_OBJECT

public:
    CustomSqlModel(QObject *parent = 0);

    QVariant data(const QModelIndex &item, int role) const;
};
//! [0]

#endif // SQLMODEL_H
