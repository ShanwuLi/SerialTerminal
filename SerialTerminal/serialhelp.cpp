#include "serialhelp.h"
#include "ui_serialhelp.h"

SerialHelp::SerialHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialHelp)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}

SerialHelp::~SerialHelp()
{
    delete ui;
}
