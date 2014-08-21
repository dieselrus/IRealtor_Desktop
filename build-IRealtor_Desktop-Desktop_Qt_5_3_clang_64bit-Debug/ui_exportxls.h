/********************************************************************************
** Form generated from reading UI file 'exportxls.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTXLS_H
#define UI_EXPORTXLS_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportXLS
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leFilePath;
    QPushButton *cmbOpenFile;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportXLS)
    {
        if (ExportXLS->objectName().isEmpty())
            ExportXLS->setObjectName(QStringLiteral("ExportXLS"));
        ExportXLS->resize(400, 300);
        QFont font;
        font.setPointSize(14);
        ExportXLS->setFont(font);
        verticalLayout = new QVBoxLayout(ExportXLS);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ExportXLS);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leFilePath = new QLineEdit(ExportXLS);
        leFilePath->setObjectName(QStringLiteral("leFilePath"));
        leFilePath->setEnabled(true);

        horizontalLayout->addWidget(leFilePath);

        cmbOpenFile = new QPushButton(ExportXLS);
        cmbOpenFile->setObjectName(QStringLiteral("cmbOpenFile"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbOpenFile->sizePolicy().hasHeightForWidth());
        cmbOpenFile->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmbOpenFile);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(ExportXLS);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        buttonBox = new QDialogButtonBox(ExportXLS);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportXLS);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportXLS, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportXLS, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportXLS, SLOT(export()));
        QObject::connect(cmbOpenFile, SIGNAL(clicked()), ExportXLS, SLOT(reatXLS()));

        QMetaObject::connectSlotsByName(ExportXLS);
    } // setupUi

    void retranslateUi(QDialog *ExportXLS)
    {
        ExportXLS->setWindowTitle(QApplication::translate("ExportXLS", "Dialog", 0));
        label->setText(QApplication::translate("ExportXLS", "\320\244\320\260\320\271\320\273:", 0));
        cmbOpenFile->setText(QApplication::translate("ExportXLS", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportXLS: public Ui_ExportXLS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTXLS_H
