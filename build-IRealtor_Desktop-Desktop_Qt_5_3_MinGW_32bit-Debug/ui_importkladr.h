/********************************************************************************
** Form generated from reading UI file 'importkladr.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKLADR_H
#define UI_IMPORTKLADR_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportKLADR
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lePath;
    QPushButton *cmbBrowse;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QListView *lstKladr;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QListView *lstBrowse;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportKLADR)
    {
        if (ImportKLADR->objectName().isEmpty())
            ImportKLADR->setObjectName(QStringLiteral("ImportKLADR"));
        ImportKLADR->resize(596, 294);
        QFont font;
        font.setPointSize(14);
        ImportKLADR->setFont(font);
        verticalLayout = new QVBoxLayout(ImportKLADR);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ImportKLADR);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lePath = new QLineEdit(ImportKLADR);
        lePath->setObjectName(QStringLiteral("lePath"));

        horizontalLayout->addWidget(lePath);

        cmbBrowse = new QPushButton(ImportKLADR);
        cmbBrowse->setObjectName(QStringLiteral("cmbBrowse"));

        horizontalLayout->addWidget(cmbBrowse);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(ImportKLADR);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_2 = new QLabel(ImportKLADR);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lstKladr = new QListView(ImportKLADR);
        lstKladr->setObjectName(QStringLiteral("lstKladr"));

        horizontalLayout_2->addWidget(lstKladr);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(ImportKLADR);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(ImportKLADR);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        lstBrowse = new QListView(ImportKLADR);
        lstBrowse->setObjectName(QStringLiteral("lstBrowse"));

        horizontalLayout_2->addWidget(lstBrowse);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(ImportKLADR);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(ImportKLADR);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ImportKLADR);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportKLADR, SLOT(importData()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportKLADR, SLOT(reject()));
        QObject::connect(cmbBrowse, SIGNAL(clicked()), ImportKLADR, SLOT(browseDir()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ImportKLADR, SLOT(addRegionToList()));
        QObject::connect(pushButton, SIGNAL(clicked()), ImportKLADR, SLOT(removeRegionOnList()));

        QMetaObject::connectSlotsByName(ImportKLADR);
    } // setupUi

    void retranslateUi(QDialog *ImportKLADR)
    {
        ImportKLADR->setWindowTitle(QApplication::translate("ImportKLADR", "Dialog", 0));
        label->setText(QApplication::translate("ImportKLADR", "\320\237\321\203\321\202\321\214:", 0));
        cmbBrowse->setText(QApplication::translate("ImportKLADR", "...", 0));
        label_3->setText(QApplication::translate("ImportKLADR", "\320\230\320\274\320\265\321\216\321\211\320\274\320\265\321\201\321\217 \321\200\320\265\320\263\320\270\320\276\320\275\321\213", 0));
        label_2->setText(QApplication::translate("ImportKLADR", "\320\227\320\260\320\263\321\200\321\203\320\266\320\260\320\265\320\274\321\213\320\265 \321\200\320\265\320\263\320\270\320\276\320\275\321\213", 0));
        pushButton_2->setText(QApplication::translate("ImportKLADR", ">", 0));
        pushButton->setText(QApplication::translate("ImportKLADR", "<", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportKLADR: public Ui_ImportKLADR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKLADR_H
