/********************************************************************************
** Form generated from reading UI file 'kladr_import.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KLADR_IMPORT_H
#define UI_KLADR_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_KLADRimport()
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lePath;
    QPushButton *cmbBrowse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *lblKladr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *lblStreet;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *lblDoma;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KLADRimport__)
    {
        if (KLADRimport__->objectName().isEmpty())
            KLADRimport__->setObjectName(QStringLiteral("KLADRimport__"));
        KLADRimport__->resize(349, 208);
        verticalLayout = new QVBoxLayout(KLADRimport__);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(KLADRimport__);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lePath = new QLineEdit(KLADRimport__);
        lePath->setObjectName(QStringLiteral("lePath"));

        horizontalLayout->addWidget(lePath);

        cmbBrowse = new QPushButton(KLADRimport__);
        cmbBrowse->setObjectName(QStringLiteral("cmbBrowse"));

        horizontalLayout->addWidget(cmbBrowse);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(KLADRimport__);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lblKladr = new QLabel(KLADRimport__);
        lblKladr->setObjectName(QStringLiteral("lblKladr"));

        horizontalLayout_2->addWidget(lblKladr);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(KLADRimport__);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lblStreet = new QLabel(KLADRimport__);
        lblStreet->setObjectName(QStringLiteral("lblStreet"));

        horizontalLayout_3->addWidget(lblStreet);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(KLADRimport__);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lblDoma = new QLabel(KLADRimport__);
        lblDoma->setObjectName(QStringLiteral("lblDoma"));

        horizontalLayout_4->addWidget(lblDoma);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(KLADRimport__);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(KLADRimport__);
        QObject::connect(buttonBox, SIGNAL(accepted()), KLADRimport__, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KLADRimport__, SLOT(reject()));
        QObject::connect(cmbBrowse, SIGNAL(clicked()), KLADRimport__, SLOT(browseDir()));

        QMetaObject::connectSlotsByName(KLADRimport__);
    } // setupUi

    void retranslateUi(QDialog *KLADRimport__)
    {
        KLADRimport__->setWindowTitle(QApplication::translate("KLADRimport()", "Dialog", 0));
        label->setText(QApplication::translate("KLADRimport()", "\320\232\320\233\320\220\320\224\320\240:", 0));
        cmbBrowse->setText(QApplication::translate("KLADRimport()", "...", 0));
        label_2->setText(QApplication::translate("KLADRimport()", "\320\244\320\260\320\271\320\273 \321\200\320\265\320\263\320\270\320\276\320\275\320\276\320\262:", 0));
        lblKladr->setText(QString());
        label_5->setText(QApplication::translate("KLADRimport()", "\320\244\320\260\320\271\320\273 \321\203\320\273\320\270\321\206:", 0));
        lblStreet->setText(QString());
        label_7->setText(QApplication::translate("KLADRimport()", "\320\244\320\260\320\271\320\273 \320\264\320\276\320\274\320\276\320\262:", 0));
        lblDoma->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KLADRimport(): public Ui_KLADRimport() {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KLADR_IMPORT_H
