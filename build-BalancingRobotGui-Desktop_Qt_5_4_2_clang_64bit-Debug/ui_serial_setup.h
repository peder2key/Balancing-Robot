/********************************************************************************
** Form generated from reading UI file 'serial_setup.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_SETUP_H
#define UI_SERIAL_SETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_serial_setup
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *portBox;
    QComboBox *baudBox;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *serial_setup)
    {
        if (serial_setup->objectName().isEmpty())
            serial_setup->setObjectName(QStringLiteral("serial_setup"));
        serial_setup->resize(438, 235);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/Pictures/Icons/c_icon_yell.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        serial_setup->setWindowIcon(icon);
        gridLayout = new QGridLayout(serial_setup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(serial_setup);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"background-color: rgb(225, 225, 225);\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"}"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(serial_setup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"background-color: rgb(225, 225, 225);\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"}"));

        verticalLayout->addWidget(label_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        portBox = new QComboBox(serial_setup);
        portBox->setObjectName(QStringLiteral("portBox"));
        portBox->setMinimumSize(QSize(131, 50));
        portBox->setStyleSheet(QLatin1String("\n"
"QComboBox::down-arrow {  \n"
"     min-width: 40px;\n"
"     max-width: 40px;\n"
"}"));

        gridLayout->addWidget(portBox, 0, 1, 1, 1);

        baudBox = new QComboBox(serial_setup);
        baudBox->setObjectName(QStringLiteral("baudBox"));
        baudBox->setMinimumSize(QSize(0, 50));
        baudBox->setStyleSheet(QLatin1String("QComboBox::down-arrow {  \n"
"     min-width: 40px;\n"
"     max-width: 40px;\n"
"}"));

        gridLayout->addWidget(baudBox, 1, 1, 1, 1);

        pushButtonOK = new QPushButton(serial_setup);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setMinimumSize(QSize(94, 51));

        gridLayout->addWidget(pushButtonOK, 2, 0, 1, 1);

        pushButtonCancel = new QPushButton(serial_setup);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(94, 51));

        gridLayout->addWidget(pushButtonCancel, 2, 1, 1, 1);


        retranslateUi(serial_setup);

        QMetaObject::connectSlotsByName(serial_setup);
    } // setupUi

    void retranslateUi(QDialog *serial_setup)
    {
        serial_setup->setWindowTitle(QApplication::translate("serial_setup", "Serial Setup", 0));
        label->setText(QApplication::translate("serial_setup", "Serial Port", 0));
        label_2->setText(QApplication::translate("serial_setup", "Baud Rate", 0));
        pushButtonOK->setText(QApplication::translate("serial_setup", "Connect", 0));
        pushButtonCancel->setText(QApplication::translate("serial_setup", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class serial_setup: public Ui_serial_setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_SETUP_H
