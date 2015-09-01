/********************************************************************************
** Form generated from reading UI file 'pidconfigform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIDCONFIGFORM_H
#define UI_PIDCONFIGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PidConfigForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_P_balancingPID;
    QLabel *label_4;
    QLineEdit *lineEdit_Imax_balancingPID;
    QLabel *label_2;
    QLineEdit *lineEdit_I_balancingPID;
    QLabel *label_3;
    QLineEdit *lineEdit_D_balancingPID;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButtonRead;
    QPushButton *pushButtonWrite;

    void setupUi(QWidget *PidConfigForm)
    {
        if (PidConfigForm->objectName().isEmpty())
            PidConfigForm->setObjectName(QStringLiteral("PidConfigForm"));
        PidConfigForm->resize(608, 371);
        gridLayout = new QGridLayout(PidConfigForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(PidConfigForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_P_balancingPID = new QLineEdit(groupBox);
        lineEdit_P_balancingPID->setObjectName(QStringLiteral("lineEdit_P_balancingPID"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_P_balancingPID->sizePolicy().hasHeightForWidth());
        lineEdit_P_balancingPID->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_P_balancingPID, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        lineEdit_Imax_balancingPID = new QLineEdit(groupBox);
        lineEdit_Imax_balancingPID->setObjectName(QStringLiteral("lineEdit_Imax_balancingPID"));
        sizePolicy.setHeightForWidth(lineEdit_Imax_balancingPID->sizePolicy().hasHeightForWidth());
        lineEdit_Imax_balancingPID->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_Imax_balancingPID, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_I_balancingPID = new QLineEdit(groupBox);
        lineEdit_I_balancingPID->setObjectName(QStringLiteral("lineEdit_I_balancingPID"));
        sizePolicy.setHeightForWidth(lineEdit_I_balancingPID->sizePolicy().hasHeightForWidth());
        lineEdit_I_balancingPID->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_I_balancingPID, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_D_balancingPID = new QLineEdit(groupBox);
        lineEdit_D_balancingPID->setObjectName(QStringLiteral("lineEdit_D_balancingPID"));
        sizePolicy.setHeightForWidth(lineEdit_D_balancingPID->sizePolicy().hasHeightForWidth());
        lineEdit_D_balancingPID->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_D_balancingPID, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(PidConfigForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_4, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        pushButtonRead = new QPushButton(PidConfigForm);
        pushButtonRead->setObjectName(QStringLiteral("pushButtonRead"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonRead->sizePolicy().hasHeightForWidth());
        pushButtonRead->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonRead, 2, 0, 1, 1);

        pushButtonWrite = new QPushButton(PidConfigForm);
        pushButtonWrite->setObjectName(QStringLiteral("pushButtonWrite"));
        sizePolicy1.setHeightForWidth(pushButtonWrite->sizePolicy().hasHeightForWidth());
        pushButtonWrite->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonWrite, 2, 1, 1, 1);


        retranslateUi(PidConfigForm);

        QMetaObject::connectSlotsByName(PidConfigForm);
    } // setupUi

    void retranslateUi(QWidget *PidConfigForm)
    {
        PidConfigForm->setWindowTitle(QApplication::translate("PidConfigForm", "Form", 0));
        groupBox->setTitle(QApplication::translate("PidConfigForm", "Balancing PID", 0));
        label->setText(QApplication::translate("PidConfigForm", "P:", 0));
        label_4->setText(QApplication::translate("PidConfigForm", "I(max):", 0));
        label_2->setText(QApplication::translate("PidConfigForm", "I:", 0));
        label_3->setText(QApplication::translate("PidConfigForm", "D:", 0));
        groupBox_2->setTitle(QApplication::translate("PidConfigForm", "Level PID", 0));
        label_5->setText(QApplication::translate("PidConfigForm", "P:", 0));
        label_8->setText(QApplication::translate("PidConfigForm", "I(max):", 0));
        label_6->setText(QApplication::translate("PidConfigForm", "I:", 0));
        label_7->setText(QApplication::translate("PidConfigForm", "D:", 0));
        pushButtonRead->setText(QApplication::translate("PidConfigForm", "Read", 0));
        pushButtonWrite->setText(QApplication::translate("PidConfigForm", "Write", 0));
    } // retranslateUi

};

namespace Ui {
    class PidConfigForm: public Ui_PidConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIDCONFIGFORM_H
