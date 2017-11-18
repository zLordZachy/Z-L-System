/********************************************************************************
** Form generated from reading UI file 'ZLSystem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZLSYSTEM_H
#define UI_ZLSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZLSystemClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZLSystemClass)
    {
        if (ZLSystemClass->objectName().isEmpty())
            ZLSystemClass->setObjectName(QStringLiteral("ZLSystemClass"));
        ZLSystemClass->resize(600, 400);
        menuBar = new QMenuBar(ZLSystemClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ZLSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZLSystemClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ZLSystemClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ZLSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ZLSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ZLSystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZLSystemClass->setStatusBar(statusBar);

        retranslateUi(ZLSystemClass);

        QMetaObject::connectSlotsByName(ZLSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZLSystemClass)
    {
        ZLSystemClass->setWindowTitle(QApplication::translate("ZLSystemClass", "ZLSystem", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZLSystemClass: public Ui_ZLSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLSYSTEM_H
