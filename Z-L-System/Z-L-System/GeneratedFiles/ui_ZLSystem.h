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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZLSystemClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *ZLSystemClass)
    {
        if (ZLSystemClass->objectName().isEmpty())
            ZLSystemClass->setObjectName(QStringLiteral("ZLSystemClass"));
        ZLSystemClass->resize(720, 720);
        centralWidget = new QWidget(ZLSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 650, 131, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 670, 81, 31));
        ZLSystemClass->setCentralWidget(centralWidget);

        retranslateUi(ZLSystemClass);

        QMetaObject::connectSlotsByName(ZLSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZLSystemClass)
    {
        ZLSystemClass->setWindowTitle(QApplication::translate("ZLSystemClass", "ZLSystem", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZLSystemClass", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("ZLSystemClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZLSystemClass: public Ui_ZLSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLSYSTEM_H
