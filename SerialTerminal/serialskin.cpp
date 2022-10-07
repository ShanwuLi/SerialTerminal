#include "serialskin.h"
#include "ui_serialskin.h"
#include <QColorDialog>
#include <QColor>
SerialSkin::SerialSkin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialSkin)
{
    ui->setupUi(this);
    ui->textEdit->setText("#include <stdio.h> \nint  main(void)\n{\n   printf(""hello world"");\n   return 0;\n}");
}

SerialSkin::~SerialSkin()
{
    delete ui;
}

void SerialSkin::on_pushButton_TextColor_clicked()
{
    QColorDialog TextColorSelect;

    TextColorInSetting =  TextColorSelect.getColor();
    ui->textEdit->setStyleSheet("color:"+TextColorInSetting.name()+";"+"background-color:"+BackGroundColorInSetting.name()+";");
}

void SerialSkin::on_pushButton_BackGroundColor_clicked()
{
    QColorDialog TextColorSelect;
    BackGroundColorInSetting =  TextColorSelect.getColor();
    ui->textEdit->setStyleSheet("color:"+TextColorInSetting.name()+";"+"background-color:"+BackGroundColorInSetting.name()+";");
}

void SerialSkin::on_pushButton_OK_clicked()
{
    close();
    TextColor = TextColorInSetting;
    BackGroundColor = BackGroundColorInSetting;
}
