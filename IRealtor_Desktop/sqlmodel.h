#ifndef SQLMODEL_H
#define SQLMODEL_H
#include <QSqlQueryModel>

//! [0]
class CustomSqlModel : public QSqlQueryModel
{
    Q_OBJECT

public:
    CustomSqlModel(QObject *parent = 0);

    QVariant data(const QModelIndex &item, int role) const;
};
//! [0]

#endif // SQLMODEL_H
