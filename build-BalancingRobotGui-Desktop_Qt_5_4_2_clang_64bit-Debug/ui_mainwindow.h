/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCommunication;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollAreaPIDConf;
    QWidget *scrollAreaWidgetContents;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuConfigure;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        actionCommunication = new QAction(MainWindow);
        actionCommunication->setObjectName(QStringLiteral("actionCommunication"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollAreaPIDConf = new QScrollArea(page);
        scrollAreaPIDConf->setObjectName(QStringLiteral("scrollAreaPIDConf"));
        scrollAreaPIDConf->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaPIDConf->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaPIDConf->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 750, 408));
        scrollAreaPIDConf->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollAreaPIDConf, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuConfigure = new QMenu(menuBar);
        menuConfigure->setObjectName(QStringLiteral("menuConfigure"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConfigure->menuAction());
        menuConfigure->addAction(actionCommunication);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCommunication->setText(QApplication::translate("MainWindow", "Communication", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuConfigure->setTitle(QApplication::translate("MainWindow", "Configure", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
