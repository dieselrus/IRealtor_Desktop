/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exel;
    QAction *action_kladr;
    QAction *action_settings;
    QAction *action_close;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QCustomPlot *widget1;
    QLabel *label_10;
    QLabel *label_9;
    QTableView *tableView_2;
    QLabel *label_7;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableView_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableView_3;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_7;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QToolButton *cmbAddTask;
    QToolButton *cmbDelTask;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QComboBox *cbxRegion;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_2;
    QLabel *label_20;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_17;
    QLabel *label_15;
    QSpinBox *spnArea1;
    QSlider *sldArea1;
    QSpacerItem *horizontalSpacer_2;
    QSlider *sldArea2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spnArea2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_19;
    QSpinBox *spinBox;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cbxType;
    QComboBox *cbxStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFind;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QTableView *tvRealtyObjects;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(847, 665);
        action_Exel = new QAction(MainWindow);
        action_Exel->setObjectName(QStringLiteral("action_Exel"));
        action_kladr = new QAction(MainWindow);
        action_kladr->setObjectName(QStringLiteral("action_kladr"));
        action_settings = new QAction(MainWindow);
        action_settings->setObjectName(QStringLiteral("action_settings"));
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QStringLiteral("action_close"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setPointSize(14);
        tabWidget->setFont(font);
        tabWidget->setIconSize(QSize(48, 48));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget1 = new QCustomPlot(widget);
        widget1->setObjectName(QStringLiteral("widget1"));

        gridLayout->addWidget(widget1, 5, 6, 2, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 4, 6, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 4, 3, 1, 2);

        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout->addWidget(tableView_2, 2, 6, 2, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 3, 1, 2);

        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QFont font1;
        font1.setPointSize(12);
        groupBox_6->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableView_4 = new QTableView(groupBox_6);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));

        verticalLayout_6->addWidget(tableView_4);


        gridLayout->addWidget(groupBox_6, 3, 3, 1, 1);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font1);
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tableView_5 = new QTableView(groupBox_5);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));

        verticalLayout_5->addWidget(tableView_5);


        gridLayout->addWidget(groupBox_5, 6, 3, 1, 2);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableView_3 = new QTableView(groupBox_4);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        verticalLayout_4->addWidget(tableView_3);


        gridLayout->addWidget(groupBox_4, 5, 3, 1, 2);

        groupBox_7 = new QGroupBox(widget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(groupBox_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tableView = new QTableView(groupBox_7);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_7->addWidget(tableView);


        gridLayout->addWidget(groupBox_7, 2, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        cmbAddTask = new QToolButton(widget);
        cmbAddTask->setObjectName(QStringLiteral("cmbAddTask"));

        horizontalLayout_3->addWidget(cmbAddTask);

        cmbDelTask = new QToolButton(widget);
        cmbDelTask->setObjectName(QStringLiteral("cmbDelTask"));

        horizontalLayout_3->addWidget(cmbDelTask);


        gridLayout->addLayout(horizontalLayout_3, 1, 6, 1, 1);

        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/trade.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(widget, icon, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbxRegion = new QComboBox(tab);
        cbxRegion->setObjectName(QStringLiteral("cbxRegion"));
        cbxRegion->setFont(font);

        gridLayout_2->addWidget(cbxRegion, 0, 1, 1, 4);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 0, 2, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_5->addWidget(label_22, 0, 4, 1, 1);

        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_5->addWidget(comboBox_5, 0, 3, 1, 1);

        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout_5->addWidget(comboBox_6, 0, 5, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_5->addWidget(comboBox_2, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 6, 0, 1, 5);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font2;
        font2.setPointSize(20);
        groupBox->setFont(font2);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);

        gridLayout_3->addWidget(label_17, 2, 6, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        spnArea1 = new QSpinBox(groupBox);
        spnArea1->setObjectName(QStringLiteral("spnArea1"));
        spnArea1->setFont(font);
        spnArea1->setMaximum(9999);

        gridLayout_3->addWidget(spnArea1, 2, 2, 1, 1);

        sldArea1 = new QSlider(groupBox);
        sldArea1->setObjectName(QStringLiteral("sldArea1"));
        sldArea1->setMaximum(9999);
        sldArea1->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sldArea1, 3, 0, 1, 6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        sldArea2 = new QSlider(groupBox);
        sldArea2->setObjectName(QStringLiteral("sldArea2"));
        sldArea2->setMaximum(9999);
        sldArea2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sldArea2, 3, 6, 1, 4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 9, 1, 1);

        spnArea2 = new QSpinBox(groupBox);
        spnArea2->setObjectName(QStringLiteral("spnArea2"));
        spnArea2->setFont(font);
        spnArea2->setMaximum(9999);

        gridLayout_3->addWidget(spnArea2, 2, 7, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_3->addWidget(label, 2, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 2, 8, 1, 1);


        gridLayout_2->addWidget(groupBox, 4, 0, 1, 5);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(999999999);

        gridLayout_4->addWidget(spinBox_4, 0, 1, 1, 1);

        spinBox_5 = new QSpinBox(groupBox_2);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(999999999);

        gridLayout_4->addWidget(spinBox_5, 0, 3, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 5, 0, 1, 5);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font);

        gridLayout_2->addWidget(spinBox, 1, 1, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        cbxType = new QComboBox(tab);
        cbxType->setObjectName(QStringLiteral("cbxType"));
        cbxType->setFont(font);

        gridLayout_2->addWidget(cbxType, 2, 1, 1, 4);

        cbxStatus = new QComboBox(tab);
        cbxStatus->setObjectName(QStringLiteral("cbxStatus"));
        cbxStatus->setFont(font);

        gridLayout_2->addWidget(cbxStatus, 3, 1, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 2);


        verticalLayout_2->addLayout(gridLayout_2);

        btnFind = new QPushButton(tab);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        btnFind->setFont(font);

        verticalLayout_2->addWidget(btnFind);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/Haus.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tvRealtyObjects = new QTableView(tab_4);
        tvRealtyObjects->setObjectName(QStringLiteral("tvRealtyObjects"));

        verticalLayout_3->addWidget(tvRealtyObjects);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAdd = new QPushButton(tab_4);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setFont(font);

        horizontalLayout->addWidget(btnAdd);

        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_4, icon1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 847, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addSeparator();
        menu->addAction(action_close);
        menu_2->addAction(action_Exel);
        menu_2->addAction(action_kladr);
        menu_2->addSeparator();
        menu_2->addAction(action_settings);

        retranslateUi(MainWindow);
        QObject::connect(btnAdd, SIGNAL(clicked()), MainWindow, SLOT(openFormRealtyObjects()));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), MainWindow, SLOT(changeTab()));
        QObject::connect(cmbAddTask, SIGNAL(clicked()), MainWindow, SLOT(openTaskForm()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Exel->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\270\320\267 Exel", 0));
        action_kladr->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\232\320\233\320\220\320\224\320\240", 0));
        action_settings->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        action_close->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\275\320\260\320\274\320\270\320\272\320\260", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\220\320\263\320\265\320\275\321\202\321\213 \320\270 \320\270\321\205 \320\276\320\261\321\212\320\265\320\272\321\202\321\213 \320\275\320\265\320\264\320\262\320\270\320\266\320\270\320\274\320\276\321\201\321\202\320\270", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\320\222 \320\260\321\200\320\265\320\275\320\264\320\265 0", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\220\321\200\320\265\320\275\320\264\320\260", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\266\320\260", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\320\222 \320\277\321\200\320\276\320\264\320\260\320\266\320\265 0", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        cmbAddTask->setText(QApplication::translate("MainWindow", "+", 0));
        cmbDelTask->setText(QApplication::translate("MainWindow", "-", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\221\320\273\320\260\320\263\320\276\321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", 0));
        label_21->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", 0));
        label_22->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273 \320\267\320\264\320\260\320\275\320\270\321\217", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\234\320\265\320\261\320\265\320\273\321\214 \320\270 \321\202\320\265\321\205\320\275\320\270\320\272\320\260", 0));
        groupBox->setTitle(QString());
        label_17->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\264\320\276:", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\276\321\202:", 0));
        label->setText(QApplication::translate("MainWindow", "\320\2742", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\2742", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\276\321\202:", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\264\320\276:", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275:", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\275\320\265\320\264\320\262\320\270\320\266\320\270\320\274\320\276\321\201\321\202\320\270:", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", 0));
        btnFind->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202\321\213 \320\275\320\265\320\264\320\262\320\270\320\266\320\270\320\274\320\276\321\201\321\202\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\243\321\202\320\270\320\273\320\270\321\202\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
