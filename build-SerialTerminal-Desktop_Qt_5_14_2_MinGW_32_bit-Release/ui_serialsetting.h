/********************************************************************************
** Form generated from reading UI file 'serialsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETTING_H
#define UI_SERIALSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SerialSetting
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox_PortName;
    QLabel *label_2;
    QComboBox *comboBox_BautRate;
    QLabel *label_5;
    QComboBox *comboBox_DataBits;
    QLabel *label_3;
    QComboBox *comboBox_StopBits;
    QLabel *label_4;
    QComboBox *comboBox_CrcBits;
    QLabel *label_6;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider_CmdTime;
    QLabel *label_CmdTime;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_OpenSerial;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SerialSetting)
    {
        if (SerialSetting->objectName().isEmpty())
            SerialSetting->setObjectName(QString::fromUtf8("SerialSetting"));
        SerialSetting->resize(579, 350);
        gridLayout = new QGridLayout(SerialSetting);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 9);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        frame = new QFrame(SerialSetting);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox_PortName = new QComboBox(frame);
        comboBox_PortName->setObjectName(QString::fromUtf8("comboBox_PortName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_PortName);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox_BautRate = new QComboBox(frame);
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->addItem(QString());
        comboBox_BautRate->setObjectName(QString::fromUtf8("comboBox_BautRate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_BautRate);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        comboBox_DataBits = new QComboBox(frame);
        comboBox_DataBits->addItem(QString());
        comboBox_DataBits->addItem(QString());
        comboBox_DataBits->addItem(QString());
        comboBox_DataBits->addItem(QString());
        comboBox_DataBits->setObjectName(QString::fromUtf8("comboBox_DataBits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_DataBits);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox_StopBits = new QComboBox(frame);
        comboBox_StopBits->addItem(QString());
        comboBox_StopBits->addItem(QString());
        comboBox_StopBits->addItem(QString());
        comboBox_StopBits->setObjectName(QString::fromUtf8("comboBox_StopBits"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_StopBits);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_CrcBits = new QComboBox(frame);
        comboBox_CrcBits->addItem(QString());
        comboBox_CrcBits->addItem(QString());
        comboBox_CrcBits->addItem(QString());
        comboBox_CrcBits->addItem(QString());
        comboBox_CrcBits->addItem(QString());
        comboBox_CrcBits->setObjectName(QString::fromUtf8("comboBox_CrcBits"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_CrcBits);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_CmdTime = new QSlider(frame_2);
        horizontalSlider_CmdTime->setObjectName(QString::fromUtf8("horizontalSlider_CmdTime"));
        horizontalSlider_CmdTime->setMinimum(100);
        horizontalSlider_CmdTime->setMaximum(2000);
        horizontalSlider_CmdTime->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_CmdTime);

        label_CmdTime = new QLabel(frame_2);
        label_CmdTime->setObjectName(QString::fromUtf8("label_CmdTime"));

        horizontalLayout->addWidget(label_CmdTime);


        formLayout->setWidget(5, QFormLayout::FieldRole, frame_2);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        pushButton_OpenSerial = new QPushButton(SerialSetting);
        pushButton_OpenSerial->setObjectName(QString::fromUtf8("pushButton_OpenSerial"));

        gridLayout->addWidget(pushButton_OpenSerial, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 6);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(1, 2);
        gridLayout->setColumnMinimumWidth(2, 1);

        retranslateUi(SerialSetting);

        comboBox_BautRate->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SerialSetting);
    } // setupUi

    void retranslateUi(QDialog *SerialSetting)
    {
        SerialSetting->setWindowTitle(QCoreApplication::translate("SerialSetting", "\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("SerialSetting", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("SerialSetting", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_BautRate->setItemText(0, QCoreApplication::translate("SerialSetting", "2400", nullptr));
        comboBox_BautRate->setItemText(1, QCoreApplication::translate("SerialSetting", "4800", nullptr));
        comboBox_BautRate->setItemText(2, QCoreApplication::translate("SerialSetting", "9600", nullptr));
        comboBox_BautRate->setItemText(3, QCoreApplication::translate("SerialSetting", "19200", nullptr));
        comboBox_BautRate->setItemText(4, QCoreApplication::translate("SerialSetting", "38400", nullptr));
        comboBox_BautRate->setItemText(5, QCoreApplication::translate("SerialSetting", "57600", nullptr));
        comboBox_BautRate->setItemText(6, QCoreApplication::translate("SerialSetting", "115200", nullptr));

        label_5->setText(QCoreApplication::translate("SerialSetting", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_DataBits->setItemText(0, QCoreApplication::translate("SerialSetting", "8", nullptr));
        comboBox_DataBits->setItemText(1, QCoreApplication::translate("SerialSetting", "7", nullptr));
        comboBox_DataBits->setItemText(2, QCoreApplication::translate("SerialSetting", "6", nullptr));
        comboBox_DataBits->setItemText(3, QCoreApplication::translate("SerialSetting", "5", nullptr));

        label_3->setText(QCoreApplication::translate("SerialSetting", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_StopBits->setItemText(0, QCoreApplication::translate("SerialSetting", "1", nullptr));
        comboBox_StopBits->setItemText(1, QCoreApplication::translate("SerialSetting", "1.5", nullptr));
        comboBox_StopBits->setItemText(2, QCoreApplication::translate("SerialSetting", "2", nullptr));

        label_4->setText(QCoreApplication::translate("SerialSetting", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_CrcBits->setItemText(0, QCoreApplication::translate("SerialSetting", "\346\227\240", nullptr));
        comboBox_CrcBits->setItemText(1, QCoreApplication::translate("SerialSetting", "\345\201\266\346\240\241\351\252\214", nullptr));
        comboBox_CrcBits->setItemText(2, QCoreApplication::translate("SerialSetting", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBox_CrcBits->setItemText(3, QCoreApplication::translate("SerialSetting", "0\346\240\241\351\252\214", nullptr));
        comboBox_CrcBits->setItemText(4, QCoreApplication::translate("SerialSetting", "1\346\240\241\351\252\214", nullptr));

        label_6->setText(QCoreApplication::translate("SerialSetting", "\345\273\266\350\277\237\351\207\217", nullptr));
        label_CmdTime->setText(QCoreApplication::translate("SerialSetting", "1500ms", nullptr));
        pushButton_OpenSerial->setText(QCoreApplication::translate("SerialSetting", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialSetting: public Ui_SerialSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETTING_H
