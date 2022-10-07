/********************************************************************************
** Form generated from reading UI file 'serialhelp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALHELP_H
#define UI_SERIALHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialHelp
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *SerialHelp)
    {
        if (SerialHelp->objectName().isEmpty())
            SerialHelp->setObjectName(QString::fromUtf8("SerialHelp"));
        SerialHelp->resize(589, 417);
        verticalLayout = new QVBoxLayout(SerialHelp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(SerialHelp);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);

        verticalLayout->addWidget(textEdit);


        retranslateUi(SerialHelp);

        QMetaObject::connectSlotsByName(SerialHelp);
    } // setupUi

    void retranslateUi(QDialog *SerialHelp)
    {
        SerialHelp->setWindowTitle(QCoreApplication::translate("SerialHelp", "\345\205\263\344\272\216\346\234\254\350\275\257\344\273\266", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SerialHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\344\275\277\347\224\250\350\257\264\346\230\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    \350\257\245\350\275\257\344\273\266\346\230\257\345\237\272\344\272\216\345\221\275\344\273\244\350\241\214\350\256\276\350\256\241\346\200\235\346\203\263\357\274\214\344\275\277\347\224\250\345\221\275\344\273\244\346\235\245\350\277\233\350\241\214\344\270\262\345\217\243\351\200\232\344\277\241\357\274\214\351\200\232\344\277"
                        "\241\345\273\266\350\277\237\346\227\266\351\227\264\344\270\2721.5\347\247\222\357\274\214\344\271\237\345\260\261\346\230\257\350\257\264\345\246\202\346\236\234\345\275\223\344\273\216\346\234\272\345\234\250\345\221\275\344\273\244\345\217\221\345\207\2721.5\347\247\222\345\220\216\350\277\230\346\262\241\346\234\211\345\233\236\345\244\215\357\274\214\345\210\231\347\273\210\347\253\257\350\207\252\345\212\250\350\277\233\345\205\245\344\270\213\344\270\200\346\254\241\345\221\275\344\273\244\344\274\240\350\276\223\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    \347\263\273\347\273\237\345\221\275\344\273\244\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  "
                        "  <span style=\" font-weight:600;\">clc</span>  \357\274\232\346\270\205\345\261\217</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">hex</span>  \357\274\232\345\260\206\345\220\216\347\273\255\346\225\260\346\215\256\344\273\24516\350\277\233\345\210\266\346\216\245\346\224\266</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">text</span> \357\274\232\345\260\206\345\220\216\347\273\255\346\225\260\346\215\256\344\273\245\346\226\207\346\234\254\346\216\245\346\224\266</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">cmd</span>  \357\274\232\346\211\223\345\274\200\347\263\273\347\273\237\345\221\275\344\273\244\357\274\210\350\257\245\345\221\275\344\273\244\346"
                        "\227\240\346\263\225\345\205\263\351\227\255\357\274\211</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">ncmd</span> \357\274\232\345\205\263\351\227\255\347\263\273\347\273\237\345\221\275\344\273\244</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">open</span> \357\274\232\346\211\223\345\274\200\344\270\262\345\217\243\357\274\210\344\270\262\345\217\243\345\267\262\347\273\217\351\205\215\347\275\256\345\245\275)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    <span style=\" font-weight:600;\">close</span>\357\274\232\345\205\263\351\227\255\344\270\262\345\217\243</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\263\250\346\204\217\357\274\232\350\257\245\350\275\257\344\273\266\347\232\204\346\216\245\346\224\266\346\225\260\346\215\256\347\274\226\347\240\201\344\270\272UTF-8\347\274\226\347\240\201\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                       by ElecM   2020.11.11</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialHelp: public Ui_SerialHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALHELP_H
