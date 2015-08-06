/********************************************************************************
** Form generated from reading UI file 'bluetooth_setup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUETOOTH_SETUP_H
#define UI_BLUETOOTH_SETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bluetooth_setup
{
public:
    QGridLayout *gridLayout;
    QListWidget *listViewBluetoothDevices;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonScan;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *bluetooth_setup)
    {
        if (bluetooth_setup->objectName().isEmpty())
            bluetooth_setup->setObjectName(QStringLiteral("bluetooth_setup"));
        bluetooth_setup->setEnabled(true);
        bluetooth_setup->resize(461, 463);
        bluetooth_setup->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"border: 2px solid black;\n"
"border-radius: 6px;\n"
"}\n"
""));
        gridLayout = new QGridLayout(bluetooth_setup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listViewBluetoothDevices = new QListWidget(bluetooth_setup);
        listViewBluetoothDevices->setObjectName(QStringLiteral("listViewBluetoothDevices"));
        listViewBluetoothDevices->setMinimumSize(QSize(421, 280));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        listViewBluetoothDevices->setFont(font);
        listViewBluetoothDevices->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"border-radius: 6px;\n"
"}"));
        listViewBluetoothDevices->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listViewBluetoothDevices->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(listViewBluetoothDevices, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonScan = new QPushButton(bluetooth_setup);
        pushButtonScan->setObjectName(QStringLiteral("pushButtonScan"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonScan->sizePolicy().hasHeightForWidth());
        pushButtonScan->setSizePolicy(sizePolicy);
        pushButtonScan->setMinimumSize(QSize(121, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonScan->setFont(font1);
        pushButtonScan->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButtonScan);

        pushButtonOk = new QPushButton(bluetooth_setup);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        sizePolicy.setHeightForWidth(pushButtonOk->sizePolicy().hasHeightForWidth());
        pushButtonOk->setSizePolicy(sizePolicy);
        pushButtonOk->setMinimumSize(QSize(121, 51));
        pushButtonOk->setFont(font1);
        pushButtonOk->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(bluetooth_setup);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        sizePolicy.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy);
        pushButtonCancel->setMinimumSize(QSize(121, 51));
        pushButtonCancel->setFont(font1);
        pushButtonCancel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(bluetooth_setup);

        QMetaObject::connectSlotsByName(bluetooth_setup);
    } // setupUi

    void retranslateUi(QDialog *bluetooth_setup)
    {
        bluetooth_setup->setWindowTitle(QApplication::translate("bluetooth_setup", "Dialog", 0));
        pushButtonScan->setText(QApplication::translate("bluetooth_setup", "Scan\n"
"For\n"
"Bluetooth", 0));
        pushButtonOk->setText(QApplication::translate("bluetooth_setup", "Connect", 0));
        pushButtonCancel->setText(QApplication::translate("bluetooth_setup", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class bluetooth_setup: public Ui_bluetooth_setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUETOOTH_SETUP_H
