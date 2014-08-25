/********************************************************************************
** Form generated from reading UI file 'dialogadd.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADD_H
#define UI_DIALOGADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAdd
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAdd)
    {
        if (DialogAdd->objectName().isEmpty())
            DialogAdd->setObjectName(QStringLiteral("DialogAdd"));
        DialogAdd->resize(319, 260);
        verticalLayout = new QVBoxLayout(DialogAdd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(DialogAdd);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButton = new QToolButton(DialogAdd);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        verticalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(DialogAdd);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        verticalLayout_2->addWidget(toolButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(DialogAdd);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogAdd);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), DialogAdd, SLOT(reject()));
        QObject::connect(toolButton, SIGNAL(clicked()), DialogAdd, SLOT(addData()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), DialogAdd, SLOT(removeData()));

        QMetaObject::connectSlotsByName(DialogAdd);
    } // setupUi

    void retranslateUi(QDialog *DialogAdd)
    {
        DialogAdd->setWindowTitle(QApplication::translate("DialogAdd", "Dialog", 0));
        toolButton->setText(QApplication::translate("DialogAdd", "+", 0));
        toolButton_2->setText(QApplication::translate("DialogAdd", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAdd: public Ui_DialogAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADD_H
