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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZLSystemClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZLSystemClass)
    {
        if (ZLSystemClass->objectName().isEmpty())
            ZLSystemClass->setObjectName(QStringLiteral("ZLSystemClass"));
        ZLSystemClass->resize(1118, 663);
        centralWidget = new QWidget(ZLSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 50, 131, 51));
        ZLSystemClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ZLSystemClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1118, 21));
        ZLSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZLSystemClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ZLSystemClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ZLSystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZLSystemClass->setStatusBar(statusBar);

        retranslateUi(ZLSystemClass);

        QMetaObject::connectSlotsByName(ZLSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZLSystemClass)
    {
        ZLSystemClass->setWindowTitle(QApplication::translate("ZLSystemClass", "ZLSystem", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZLSystemClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZLSystemClass: public Ui_ZLSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLSYSTEM_H
