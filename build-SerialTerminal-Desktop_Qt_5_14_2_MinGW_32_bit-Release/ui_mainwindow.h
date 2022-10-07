/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetting;
    QAction *actionSkin;
    QAction *actionHelp;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(569, 528);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon);
        actionSkin = new QAction(MainWindow);
        actionSkin->setObjectName(QString::fromUtf8("actionSkin"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSkin->setIcon(icon1);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 569, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSetting);
        toolBar->addAction(actionSkin);
        toolBar->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\347\273\210\347\253\257", nullptr));
        actionSetting->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
#if QT_CONFIG(tooltip)
        actionSetting->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSkin->setText(QCoreApplication::translate("MainWindow", "Skin", nullptr));
#if QT_CONFIG(tooltip)
        actionSkin->setToolTip(QCoreApplication::translate("MainWindow", "\346\215\242\350\202\244", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
#if QT_CONFIG(tooltip)
        actionHelp->setToolTip(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
