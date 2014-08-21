/********************************************************************************
** Form generated from reading UI file 'realtyobject.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALTYOBJECT_H
#define UI_REALTYOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealtyObject
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLineEdit *leAddress;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cmbStatus;
    QComboBox *cmbTradeType;
    QComboBox *cmbRegion;
    QPushButton *pushButton_4;
    QComboBox *cmbType;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpinBox *spnRooms;
    QLabel *label_7;
    QDateEdit *dtCreate;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QSpinBox *spnTotalArea;
    QLabel *label_11;
    QLabel *label_9;
    QSpinBox *spnFloorArea;
    QLabel *label_12;
    QLabel *label_10;
    QSpinBox *spnKitchenArea;
    QLabel *label_13;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QSpinBox *spnFloor;
    QLabel *label_15;
    QSpinBox *spnFloors;
    QLabel *label_16;
    QComboBox *cmbMaterial;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chbBalkony;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chbLoggia;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QComboBox *cmbTypeApartament;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_20;
    QLineEdit *leOwner;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QComboBox *cmbDocProperty;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QLineEdit *lePhone;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chbInternet;
    QCheckBox *chbPhone;
    QCheckBox *chbCableTV;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *chbCentralHeating;
    QCheckBox *chbCentralWater;
    QCheckBox *chbCentralSewage;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_2;
    QLabel *label_23;
    QSpinBox *spnPrice;
    QLabel *label_24;
    QLabel *label_25;
    QSpinBox *spnAmountCommission;
    QDoubleSpinBox *spnPercentageCommission;
    QWidget *tab_5;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_6;
    QListView *listView;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_2;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *teDescription;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *RealtyObject)
    {
        if (RealtyObject->objectName().isEmpty())
            RealtyObject->setObjectName(QStringLiteral("RealtyObject"));
        RealtyObject->resize(1000, 524);
        QFont font;
        font.setPointSize(14);
        RealtyObject->setFont(font);
        RealtyObject->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(RealtyObject);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(RealtyObject);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 8, 1, 1);

        pushButton_2 = new QPushButton(RealtyObject);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        leAddress = new QLineEdit(RealtyObject);
        leAddress->setObjectName(QStringLiteral("leAddress"));

        gridLayout->addWidget(leAddress, 0, 3, 1, 13);

        pushButton = new QPushButton(RealtyObject);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 16, 1, 1);

        label_5 = new QLabel(RealtyObject);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 3);

        label_4 = new QLabel(RealtyObject);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 14, 1, 1);

        label = new QLabel(RealtyObject);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(RealtyObject);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 4, 1, 2);

        label_3 = new QLabel(RealtyObject);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 9, 1, 2);

        cmbStatus = new QComboBox(RealtyObject);
        cmbStatus->setObjectName(QStringLiteral("cmbStatus"));

        gridLayout->addWidget(cmbStatus, 1, 11, 1, 2);

        cmbTradeType = new QComboBox(RealtyObject);
        cmbTradeType->setObjectName(QStringLiteral("cmbTradeType"));

        gridLayout->addWidget(cmbTradeType, 1, 6, 1, 2);

        cmbRegion = new QComboBox(RealtyObject);
        cmbRegion->setObjectName(QStringLiteral("cmbRegion"));

        gridLayout->addWidget(cmbRegion, 1, 1, 1, 2);

        pushButton_4 = new QPushButton(RealtyObject);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 13, 1, 1);

        cmbType = new QComboBox(RealtyObject);
        cmbType->setObjectName(QStringLiteral("cmbType"));

        gridLayout->addWidget(cmbType, 1, 15, 1, 1);

        pushButton_5 = new QPushButton(RealtyObject);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 16, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tabWidget = new QTabWidget(RealtyObject);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        spnRooms = new QSpinBox(tab);
        spnRooms->setObjectName(QStringLiteral("spnRooms"));
        spnRooms->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(spnRooms, 1, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        dtCreate = new QDateEdit(tab);
        dtCreate->setObjectName(QStringLiteral("dtCreate"));

        gridLayout_2->addWidget(dtCreate, 0, 1, 1, 1);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        spnTotalArea = new QSpinBox(groupBox);
        spnTotalArea->setObjectName(QStringLiteral("spnTotalArea"));
        spnTotalArea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnTotalArea->setMaximum(9999);

        horizontalLayout->addWidget(spnTotalArea);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        spnFloorArea = new QSpinBox(groupBox);
        spnFloorArea->setObjectName(QStringLiteral("spnFloorArea"));
        spnFloorArea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnFloorArea->setMaximum(9999);

        horizontalLayout->addWidget(spnFloorArea);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout->addWidget(label_12);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        spnKitchenArea = new QSpinBox(groupBox);
        spnKitchenArea->setObjectName(QStringLiteral("spnKitchenArea"));
        spnKitchenArea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnKitchenArea->setMaximum(9999);

        horizontalLayout->addWidget(spnKitchenArea);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout->addWidget(label_13);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 3);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_2->addWidget(label_14);

        spnFloor = new QSpinBox(groupBox_2);
        spnFloor->setObjectName(QStringLiteral("spnFloor"));

        horizontalLayout_2->addWidget(spnFloor);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_2->addWidget(label_15);

        spnFloors = new QSpinBox(groupBox_2);
        spnFloors->setObjectName(QStringLiteral("spnFloors"));

        horizontalLayout_2->addWidget(spnFloors);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        cmbMaterial = new QComboBox(groupBox_2);
        cmbMaterial->setObjectName(QStringLiteral("cmbMaterial"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbMaterial->sizePolicy().hasHeightForWidth());
        cmbMaterial->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbMaterial);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        chbBalkony = new QCheckBox(tab);
        chbBalkony->setObjectName(QStringLiteral("chbBalkony"));

        horizontalLayout_4->addWidget(chbBalkony);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        chbLoggia = new QCheckBox(tab);
        chbLoggia->setObjectName(QStringLiteral("chbLoggia"));

        horizontalLayout_3->addWidget(chbLoggia);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_5->addWidget(label_19);

        cmbTypeApartament = new QComboBox(tab);
        cmbTypeApartament->setObjectName(QStringLiteral("cmbTypeApartament"));

        horizontalLayout_5->addWidget(cmbTypeApartament);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout_5, 6, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_8->addWidget(label_20);

        leOwner = new QLineEdit(tab_2);
        leOwner->setObjectName(QStringLiteral("leOwner"));

        horizontalLayout_8->addWidget(leOwner);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_9->addWidget(label_21);

        cmbDocProperty = new QComboBox(tab_2);
        cmbDocProperty->setObjectName(QStringLiteral("cmbDocProperty"));
        sizePolicy.setHeightForWidth(cmbDocProperty->sizePolicy().hasHeightForWidth());
        cmbDocProperty->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(cmbDocProperty);

        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(pushButton_8);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_10->addWidget(label_22);

        lePhone = new QLineEdit(tab_2);
        lePhone->setObjectName(QStringLiteral("lePhone"));

        horizontalLayout_10->addWidget(lePhone);


        verticalLayout_8->addLayout(horizontalLayout_10);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        chbInternet = new QCheckBox(groupBox_3);
        chbInternet->setObjectName(QStringLiteral("chbInternet"));

        horizontalLayout_6->addWidget(chbInternet);

        chbPhone = new QCheckBox(groupBox_3);
        chbPhone->setObjectName(QStringLiteral("chbPhone"));

        horizontalLayout_6->addWidget(chbPhone);

        chbCableTV = new QCheckBox(groupBox_3);
        chbCableTV->setObjectName(QStringLiteral("chbCableTV"));

        horizontalLayout_6->addWidget(chbCableTV);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        chbCentralHeating = new QCheckBox(groupBox_4);
        chbCentralHeating->setObjectName(QStringLiteral("chbCentralHeating"));

        verticalLayout_5->addWidget(chbCentralHeating);

        chbCentralWater = new QCheckBox(groupBox_4);
        chbCentralWater->setObjectName(QStringLiteral("chbCentralWater"));

        verticalLayout_5->addWidget(chbCentralWater);

        chbCentralSewage = new QCheckBox(groupBox_4);
        chbCentralSewage->setObjectName(QStringLiteral("chbCentralSewage"));

        verticalLayout_5->addWidget(chbCentralSewage);


        verticalLayout_4->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout_2 = new QFormLayout(groupBox_5);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_23);

        spnPrice = new QSpinBox(groupBox_5);
        spnPrice->setObjectName(QStringLiteral("spnPrice"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spnPrice->sizePolicy().hasHeightForWidth());
        spnPrice->setSizePolicy(sizePolicy2);
        spnPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnPrice->setMaximum(999999999);
        spnPrice->setDisplayIntegerBase(10);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spnPrice);

        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_24);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_25);

        spnAmountCommission = new QSpinBox(groupBox_5);
        spnAmountCommission->setObjectName(QStringLiteral("spnAmountCommission"));
        sizePolicy2.setHeightForWidth(spnAmountCommission->sizePolicy().hasHeightForWidth());
        spnAmountCommission->setSizePolicy(sizePolicy2);
        spnAmountCommission->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnAmountCommission->setMaximum(999999999);
        spnAmountCommission->setDisplayIntegerBase(10);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spnAmountCommission);

        spnPercentageCommission = new QDoubleSpinBox(groupBox_5);
        spnPercentageCommission->setObjectName(QStringLiteral("spnPercentageCommission"));
        spnPercentageCommission->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spnPercentageCommission);


        verticalLayout_6->addWidget(groupBox_5);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        verticalLayout_7 = new QVBoxLayout(tab_8);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButton_2 = new QToolButton(tab_8);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_7->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tab_8);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout_7->addWidget(toolButton_3);

        toolButton = new QToolButton(tab_8);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_7->addWidget(toolButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_7);

        listView = new QListView(tab_8);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_7->addWidget(listView);

        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_2 = new QVBoxLayout(tab_7);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_3 = new QVBoxLayout(tab_6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        teDescription = new QTextEdit(tab_6);
        teDescription->setObjectName(QStringLiteral("teDescription"));

        verticalLayout_3->addWidget(teDescription);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(RealtyObject);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RealtyObject);
        QObject::connect(buttonBox, SIGNAL(accepted()), RealtyObject, SLOT(saveData()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RealtyObject, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RealtyObject);
    } // setupUi

    void retranslateUi(QWidget *RealtyObject)
    {
        RealtyObject->setWindowTitle(QApplication::translate("RealtyObject", "Form", 0));
        pushButton_3->setText(QApplication::translate("RealtyObject", "+", 0));
        pushButton_2->setText(QApplication::translate("RealtyObject", "+", 0));
        pushButton->setText(QApplication::translate("RealtyObject", "+", 0));
        label_5->setText(QApplication::translate("RealtyObject", "\320\244\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\264\321\200\320\265\321\201:", 0));
        label_4->setText(QApplication::translate("RealtyObject", "\320\242\320\270\320\277:", 0));
        label->setText(QApplication::translate("RealtyObject", "\320\240\320\260\320\271\320\276\320\275:", 0));
        label_2->setText(QApplication::translate("RealtyObject", "\320\242\320\270\320\277 \321\201\320\264\320\265\320\273\320\272\320\270:", 0));
        label_3->setText(QApplication::translate("RealtyObject", "\320\242\320\265\320\272. \321\201\321\202\320\260\321\202\321\203\321\201:", 0));
        pushButton_4->setText(QApplication::translate("RealtyObject", "+", 0));
        pushButton_5->setText(QApplication::translate("RealtyObject", "+", 0));
        label_6->setText(QApplication::translate("RealtyObject", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217\321\217:", 0));
        label_7->setText(QApplication::translate("RealtyObject", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", 0));
        groupBox->setTitle(QApplication::translate("RealtyObject", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", 0));
        label_8->setText(QApplication::translate("RealtyObject", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\276\320\261\321\211\320\260\321\217:", 0));
        label_11->setText(QApplication::translate("RealtyObject", "\320\2742.", 0));
        label_9->setText(QApplication::translate("RealtyObject", "\320\226\320\270\320\273\320\260\321\217 \320\277\320\273\320\276\321\211\320\260\320\264\321\214:", 0));
        label_12->setText(QApplication::translate("RealtyObject", "\320\2742.", 0));
        label_10->setText(QApplication::translate("RealtyObject", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\272\321\203\321\205\320\275\320\270:", 0));
        label_13->setText(QApplication::translate("RealtyObject", "\320\2742.", 0));
        groupBox_2->setTitle(QApplication::translate("RealtyObject", "\320\255\321\202\320\260\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        label_14->setText(QApplication::translate("RealtyObject", "\320\255\321\202\320\260\320\266:", 0));
        label_15->setText(QApplication::translate("RealtyObject", "\320\255\321\202\320\260\320\266\320\275\320\276\321\201\321\202\321\214:", 0));
        label_16->setText(QApplication::translate("RealtyObject", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273:", 0));
        pushButton_6->setText(QApplication::translate("RealtyObject", "+", 0));
        chbBalkony->setText(QApplication::translate("RealtyObject", "\320\221\320\260\320\273\320\272\320\276\320\275", 0));
        chbLoggia->setText(QApplication::translate("RealtyObject", "\320\233\320\276\320\264\320\266\320\270\321\217", 0));
        label_19->setText(QApplication::translate("RealtyObject", "\320\242\320\270\320\277 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\321\213:", 0));
        pushButton_7->setText(QApplication::translate("RealtyObject", "+", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("RealtyObject", "\320\242\320\265\321\205\320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0));
        label_20->setText(QApplication::translate("RealtyObject", "\320\241\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\270\320\272:", 0));
        label_21->setText(QApplication::translate("RealtyObject", "\320\224\320\276\320\272 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\321\201\321\202\320\270:", 0));
        pushButton_8->setText(QApplication::translate("RealtyObject", "+", 0));
        label_22->setText(QApplication::translate("RealtyObject", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("RealtyObject", "\320\237\321\200\320\260\320\262\320\276\320\262\320\276\320\271 \321\201\321\202\320\260\321\202\321\203\321\201", 0));
        groupBox_3->setTitle(QApplication::translate("RealtyObject", "\320\242\320\265\320\273\320\265\320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\270", 0));
        chbInternet->setText(QApplication::translate("RealtyObject", "\320\230\320\275\321\202\320\265\321\200\320\275\320\265\321\202", 0));
        chbPhone->setText(QApplication::translate("RealtyObject", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        chbCableTV->setText(QApplication::translate("RealtyObject", "\320\232\320\260\320\261\320\265\320\273\321\214\320\275\320\276\320\265 \321\202\320\265\320\273\320\265\320\262\320\270\320\264\320\265\320\275\320\270\320\265", 0));
        groupBox_4->setTitle(QApplication::translate("RealtyObject", "\320\221\321\213\321\202\320\276\320\262\321\213\320\265 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\270", 0));
        chbCentralHeating->setText(QApplication::translate("RealtyObject", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\276\320\277\320\273\320\265\320\275\320\270\320\265", 0));
        chbCentralWater->setText(QApplication::translate("RealtyObject", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\320\276\320\264\320\276\321\201\320\275\320\260\320\261\320\266\320\265\320\275\320\270\320\265", 0));
        chbCentralSewage->setText(QApplication::translate("RealtyObject", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217 \320\272\320\260\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("RealtyObject", "\320\232\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\270", 0));
        groupBox_5->setTitle(QApplication::translate("RealtyObject", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\270 \320\272\320\276\320\274\320\270\321\201\321\201\320\270\321\217", 0));
        label_23->setText(QApplication::translate("RealtyObject", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\276\320\261\321\212\320\265\320\272\321\202\320\260:", 0));
        label_24->setText(QApplication::translate("RealtyObject", "\320\232\320\276\320\274\320\270\321\201\321\201\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202:", 0));
        label_25->setText(QApplication::translate("RealtyObject", "\320\232\320\276\320\274\320\270\321\201\321\201\320\270\321\217 \321\201\321\203\320\274\320\274\320\260:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("RealtyObject", "\320\244\320\270\320\275\320\260\320\275\321\201\321\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("RealtyObject", "\320\220\321\200\320\265\320\275\320\264\320\260", 0));
        toolButton_2->setText(QApplication::translate("RealtyObject", "...", 0));
        toolButton_3->setText(QApplication::translate("RealtyObject", "...", 0));
        toolButton->setText(QApplication::translate("RealtyObject", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("RealtyObject", "\320\244\320\276\321\202\320\276", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("RealtyObject", "\320\232\320\260\321\200\321\202\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("RealtyObject", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class RealtyObject: public Ui_RealtyObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALTYOBJECT_H
