/********************************************************************************
** Form generated from reading UI file 'selectaddress.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTADDRESS_H
#define UI_SELECTADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectAddress
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *cmbRegion;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cmbSity;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cmbStreet;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cmbHaus;
    QLabel *label_4;
    QLineEdit *leCorp;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectAddress)
    {
        if (SelectAddress->objectName().isEmpty())
            SelectAddress->setObjectName(QStringLiteral("SelectAddress"));
        SelectAddress->resize(400, 300);
        QFont font;
        font.setPointSize(14);
        SelectAddress->setFont(font);
        verticalLayout = new QVBoxLayout(SelectAddress);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(SelectAddress);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        cmbRegion = new QComboBox(SelectAddress);
        cmbRegion->setObjectName(QStringLiteral("cmbRegion"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbRegion->sizePolicy().hasHeightForWidth());
        cmbRegion->setSizePolicy(sizePolicy);
        cmbRegion->setEditable(true);

        horizontalLayout_3->addWidget(cmbRegion);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SelectAddress);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cmbSity = new QComboBox(SelectAddress);
        cmbSity->setObjectName(QStringLiteral("cmbSity"));
        sizePolicy.setHeightForWidth(cmbSity->sizePolicy().hasHeightForWidth());
        cmbSity->setSizePolicy(sizePolicy);
        cmbSity->setEditable(true);

        horizontalLayout->addWidget(cmbSity);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(SelectAddress);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cmbStreet = new QComboBox(SelectAddress);
        cmbStreet->setObjectName(QStringLiteral("cmbStreet"));
        sizePolicy.setHeightForWidth(cmbStreet->sizePolicy().hasHeightForWidth());
        cmbStreet->setSizePolicy(sizePolicy);
        cmbStreet->setEditable(true);

        horizontalLayout_2->addWidget(cmbStreet);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(SelectAddress);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        cmbHaus = new QComboBox(SelectAddress);
        cmbHaus->setObjectName(QStringLiteral("cmbHaus"));
        cmbHaus->setEditable(true);

        horizontalLayout_4->addWidget(cmbHaus);

        label_4 = new QLabel(SelectAddress);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        leCorp = new QLineEdit(SelectAddress);
        leCorp->setObjectName(QStringLiteral("leCorp"));
        sizePolicy.setHeightForWidth(leCorp->sizePolicy().hasHeightForWidth());
        leCorp->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(leCorp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(SelectAddress);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectAddress);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectAddress, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectAddress, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectAddress);
    } // setupUi

    void retranslateUi(QDialog *SelectAddress)
    {
        SelectAddress->setWindowTitle(QApplication::translate("SelectAddress", "Dialog", 0));
        label_5->setText(QApplication::translate("SelectAddress", "\320\240\320\265\320\263\320\270\320\276\320\275:", 0));
        label->setText(QApplication::translate("SelectAddress", "\320\223\320\276\321\200\320\276\320\264:", 0));
        label_2->setText(QApplication::translate("SelectAddress", "\320\243\320\273\320\270\321\206\320\260:", 0));
        label_3->setText(QApplication::translate("SelectAddress", "\320\224\320\276\320\274:", 0));
        label_4->setText(QApplication::translate("SelectAddress", "\320\232\320\276\321\200\320\277.", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectAddress: public Ui_SelectAddress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTADDRESS_H
