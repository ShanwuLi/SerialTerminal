/********************************************************************************
** Form generated from reading UI file 'serialskin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSKIN_H
#define UI_SERIALSKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialSkin
{
public:
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_TextColor;
    QPushButton *pushButton_BackGroundColor;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_OK;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *SerialSkin)
    {
        if (SerialSkin->objectName().isEmpty())
            SerialSkin->setObjectName(QString::fromUtf8("SerialSkin"));
        SerialSkin->resize(514, 382);
        verticalLayout_2 = new QVBoxLayout(SerialSkin);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit = new QTextEdit(SerialSkin);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-color: rgb(75, 69, 69);"));

        verticalLayout_2->addWidget(textEdit);

        frame_2 = new QFrame(SerialSkin);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_TextColor = new QPushButton(frame);
        pushButton_TextColor->setObjectName(QString::fromUtf8("pushButton_TextColor"));

        verticalLayout->addWidget(pushButton_TextColor);

        pushButton_BackGroundColor = new QPushButton(frame);
        pushButton_BackGroundColor->setObjectName(QString::fromUtf8("pushButton_BackGroundColor"));

        verticalLayout->addWidget(pushButton_BackGroundColor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_OK = new QPushButton(frame);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        verticalLayout->addWidget(pushButton_OK);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(frame_2);


        retranslateUi(SerialSkin);

        QMetaObject::connectSlotsByName(SerialSkin);
    } // setupUi

    void retranslateUi(QDialog *SerialSkin)
    {
        SerialSkin->setWindowTitle(QCoreApplication::translate("SerialSkin", "\344\270\273\351\242\230\346\240\267\345\274\217", nullptr));
        pushButton_TextColor->setText(QCoreApplication::translate("SerialSkin", "\350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262", nullptr));
        pushButton_BackGroundColor->setText(QCoreApplication::translate("SerialSkin", "\350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("SerialSkin", "\344\277\235\345\255\230\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialSkin: public Ui_SerialSkin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSKIN_H
