/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_17;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_15;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox_4;
    QLabel *label_18;
    QSpinBox *spinBox_5;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_20;
    QComboBox *comboBox_2;
    QComboBox *comboBox_5;
    QLabel *label_22;
    QLabel *label_21;
    QComboBox *comboBox_6;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setIconSize(QSize(96, 96));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font;
        font.setPointSize(14);
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setFont(font);

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 2);

        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font);

        gridLayout_2->addWidget(comboBox_3, 2, 1, 1, 2);

        comboBox_4 = new QComboBox(tab);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setFont(font);

        gridLayout_2->addWidget(comboBox_4, 3, 1, 1, 2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setPointSize(20);
        groupBox->setFont(font1);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setFont(font);

        gridLayout_3->addWidget(spinBox_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);

        gridLayout_3->addWidget(label_17, 1, 3, 1, 1);

        spinBox_3 = new QSpinBox(groupBox);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setFont(font);

        gridLayout_3->addWidget(spinBox_3, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        gridLayout_3->addWidget(label_15, 1, 0, 1, 1);

        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_2, 2, 3, 1, 3);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 2, 0, 1, 3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        gridLayout_4->addWidget(spinBox_4, 0, 1, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(groupBox_2);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        gridLayout_4->addWidget(spinBox_5, 0, 3, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 3, 0, 1, 6);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_5->addWidget(comboBox_2, 0, 1, 1, 1);

        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_5->addWidget(comboBox_5, 0, 3, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_5->addWidget(label_22, 0, 4, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 0, 2, 1, 1);

        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout_5->addWidget(comboBox_6, 0, 5, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 0, 0, 1, 6);


        gridLayout_2->addWidget(groupBox, 4, 0, 1, 3);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font);

        gridLayout_2->addWidget(spinBox, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/\320\227\320\264\320\260\320\275\320\270\320\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/\320\241\320\264\320\265\320\273\320\272\320\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\275\320\265\320\264\320\262\320\270\320\266\320\270\320\274\320\276\321\201\321\202\320\270:", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275:", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", 0));
        groupBox->setTitle(QString());
        label_17->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\264\320\276:", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\276\321\202:", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\276\321\202:", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\264\320\276:", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\221\320\273\320\260\320\263\320\276\321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\234\320\265\320\261\320\265\320\273\321\214 \320\270 \321\202\320\265\321\205\320\275\320\270\320\272\320\260", 0));
        label_22->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273 \320\267\320\264\320\260\320\275\320\270\321\217", 0));
        label_21->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
