/********************************************************************************
** Form generated from reading UI file 'plotter.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTTER_H
#define UI_PLOTTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_plotter
{
public:
    QCustomPlot *widget;

    void setupUi(QWidget *plotter)
    {
        if (plotter->objectName().isEmpty())
            plotter->setObjectName(QStringLiteral("plotter"));
        plotter->resize(400, 300);
        widget = new QCustomPlot(plotter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 30, 211, 221));

        retranslateUi(plotter);

        QMetaObject::connectSlotsByName(plotter);
    } // setupUi

    void retranslateUi(QWidget *plotter)
    {
        plotter->setWindowTitle(QApplication::translate("plotter", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class plotter: public Ui_plotter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTTER_H
