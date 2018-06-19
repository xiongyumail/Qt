/********************************************************************************
** Form generated from reading UI file 'mycom.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOM_H
#define UI_MYCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mycom
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuESP32_Uart;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Mycom)
    {
        if (Mycom->objectName().isEmpty())
            Mycom->setObjectName(QStringLiteral("Mycom"));
        Mycom->resize(531, 406);
        centralWidget = new QWidget(Mycom);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 511, 261));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 300, 371, 25));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 300, 89, 25));
        Mycom->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Mycom);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 531, 28));
        menuESP32_Uart = new QMenu(menuBar);
        menuESP32_Uart->setObjectName(QStringLiteral("menuESP32_Uart"));
        Mycom->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Mycom);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Mycom->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Mycom);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Mycom->setStatusBar(statusBar);

        menuBar->addAction(menuESP32_Uart->menuAction());

        retranslateUi(Mycom);

        QMetaObject::connectSlotsByName(Mycom);
    } // setupUi

    void retranslateUi(QMainWindow *Mycom)
    {
        Mycom->setWindowTitle(QApplication::translate("Mycom", "Mycom", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Mycom", "Send", Q_NULLPTR));
        menuESP32_Uart->setTitle(QApplication::translate("Mycom", "ESP32 Uart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mycom: public Ui_Mycom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOM_H
