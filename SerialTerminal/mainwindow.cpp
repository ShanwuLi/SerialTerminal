#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialsetting.h"
#include <QKeyEvent>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QTextCodec>
#include <serialhelp.h>


#include <QSerialPortInfo>
#include <QDebug>
#include <windows.h>
#include <dbt.h>
#include <devguid.h>
#include <setupapi.h>
#include <initguid.h>
#include <QMessageBox>
#include <QToolBar>
#include <QIODevice>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->grabKeyboard();
    this->setWindowIcon(QIcon(":/ico/serial.ico"));
    MySerialPort = new QSerialPort(this);
    MySerialSetting = new  SerialSetting(this,MySerialPort);
    connect(MySerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortReceiveData()));
    SendData = new QString;
    ReceivedData = new QByteArray;

    MyTimer=new QTimer(this);
    MyTimer->stop();
    MyTimer->setInterval (1500) ;//设置定时周期，单位：毫秒
    connect(MyTimer,SIGNAL(timeout()),this,SLOT(MyTimerOutFeedBack()));

    MySerialSkin = new SerialSkin(this);
    QString MyStyle("QTextEdit{background-color:"+MySerialSkin->BackGroundColor.name()+";"+\
                    "color:"+MySerialSkin->TextColor.name()+";}");
    ui->textEdit->setStyleSheet(MyStyle);


    QString Temp = ">>";
    ui->textEdit->insertPlainText(Temp);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::SerialPortReceiveData()
{
   if(MySerialPort->isOpen())
   {
     ReceivedData->append(MySerialPort->readAll());
     MyTimer->start();
   }
}



void MainWindow::MyTimerOutFeedBack()
{
    //先将光标移到末尾
  if(DataIsInputing==false)
  {
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);
    QString Temp = "\n";
    ui->textEdit->insertPlainText(Temp);
    cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);

        if(IsTextDis == true)
         {
            ui->textEdit->insertPlainText(QString::fromUtf8(*ReceivedData));
            QTextCursor cursor = ui->textEdit->textCursor();
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
         }
        else
         { //十六进制显示
            QByteArray *DataHex = new QByteArray;
             (*DataHex)= (QString::fromUtf8(*ReceivedData)).toLatin1().toHex().toUpper();
            QString *HexDis = new QString;

            for(int i = 0; i < DataHex->length()/2;i++)
            {
                *HexDis += DataHex->mid(i*2,2) + " ";
            }

            ui->textEdit->insertPlainText(*HexDis);
            QTextCursor cursor = ui->textEdit->textCursor();
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
            delete DataHex;
            delete HexDis;
         }
        ReceivedData->clear();



    Temp = "\n>>";
    ui->textEdit->insertPlainText(Temp);
    cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);
  }

  MyTimer->stop();
}




void MainWindow::keyPressEvent(QKeyEvent *e)
{
   QString DisPlainText;

   DataIsInputing = true;

   //光标移到末尾
   QTextCursor cursor = ui->textEdit->textCursor();
   cursor.movePosition(QTextCursor::End);
   ui->textEdit->setTextCursor(cursor);


   if((e->key()==Qt::Key_Return)||(e->key()==Qt::Key_Enter))
   {

        if(SysCMDEnable==true)
        {
           if(*SendData == "clc")
           {
             ui->textEdit->clear();
           }
           else if(*SendData == "hex")
           {
               IsTextDis = false;
           }
           else if(*SendData == "text")
           {
               IsTextDis = true;
           }
           else if(*SendData == "cmd")
           {
               SysCMDEnable = true;
           }
           else if(*SendData == "ncmd")
           {
               SysCMDEnable = false;
           }
           else if(*SendData == "open")
           {
               if(!MySerialPort->isOpen())
                 MySerialPort->open(QIODevice::ReadWrite);
           }
           else if(*SendData =="close")
           {
               if(MySerialPort->isOpen())
                 MySerialPort->close();
           }
           else
           {
             if(MySerialPort->isOpen())
             {
                   QString Temp = "\n";
                   ui->textEdit->insertPlainText(Temp);
                   QTextCursor cursor = ui->textEdit->textCursor();
                   cursor.movePosition(QTextCursor::End);
                   ui->textEdit->setTextCursor(cursor);

                   qDebug()<<*SendData;
                   MySerialPort->write(SendData->toLatin1());
             }
             else
              {
                 QMessageBox msgBox(this);
                 msgBox.setText("串口未打开");
                 msgBox.exec();
              }
           }
        }
        else
        {
          if(*SendData == "cmd")
          {
            SysCMDEnable = true;
          }
          else
          {
              if(MySerialPort->isOpen())
              {
                QString Temp = "\n";
                ui->textEdit->insertPlainText(Temp);
                QTextCursor cursor = ui->textEdit->textCursor();
                cursor.movePosition(QTextCursor::End);
                ui->textEdit->setTextCursor(cursor);

                qDebug()<<*SendData;
                MySerialPort->write(SendData->toLatin1());
              }
              else
               {
                  QMessageBox msgBox(this);
                  msgBox.setText("串口未打开");
                  msgBox.exec();
               }
          }
        }

       *SendData = "";
       QString Temp = "\n>>";
       ui->textEdit->insertPlainText(Temp);
       cursor = ui->textEdit->textCursor();
       cursor.movePosition(QTextCursor::End);
       ui->textEdit->setTextCursor(cursor);

       DataIsInputing = false;
   }
   else if(e->key()==Qt::Key_Backspace)
   {
     if(SendData->count()>0)
     {
         SendData->chop(1);
         QTextCursor cursor = ui->textEdit->textCursor();
         QString  *PlainText = new QString;
         *PlainText = ui->textEdit->toPlainText();
         PlainText->chop(1);
         ui->textEdit->clear();
         ui->textEdit->insertPlainText(*PlainText);
         cursor.movePosition(QTextCursor::End);
         ui->textEdit->setTextCursor(cursor);

         delete PlainText;
     }
   }
   else if(e->key()==Qt::Key_Control)
   {
      //什么都不做
   }
   else if((e->modifiers() == Qt::ControlModifier) && (e->key() == Qt::Key_C))
   {
       ui->textEdit->copy();
   }
   else
   {
       *SendData += e->text();
       DisPlainText += e->text();

       qDebug()<< DisPlainText;
       ui->textEdit->insertPlainText(DisPlainText);
       QTextEdit a;

       QTextCursor cursor = ui->textEdit->textCursor();
       cursor.movePosition(QTextCursor::End);
       ui->textEdit->setTextCursor(cursor);
   }
   QWidget::keyPressEvent(e);

}


void MainWindow::on_actionSetting_triggered()
{
    MySerialSetting->setWindowIcon(QIcon(":/ico/setting.ico"));
    MySerialSetting->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);
    MySerialSetting->PortUpdateInformation();
    MySerialSetting->exec();
    MyTimer->setInterval (MySerialSetting->CmdTime);//设置定时周期，单位：毫秒
}


void MainWindow::on_actionSkin_triggered()
{
    MySerialSkin->setWindowIcon(QIcon(":/ico/skin.ico"));
    MySerialSkin->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);
    MySerialSkin->exec();
    QString MyStyle("QTextEdit{background-color:"+MySerialSkin->BackGroundColor.name()+";"+\
                    "color:"+MySerialSkin->TextColor.name()+";}");
    ui->textEdit->setStyleSheet(MyStyle);

}


void MainWindow::on_actionHelp_triggered()
{
    SerialHelp help(this);
    help.setWindowIcon(QIcon(":/ico/help.ico"));
    help.setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);
    help.exec();
}


bool MainWindow::nativeEvent(const QByteArray &eventType, void *message, long*)
{
 Q_UNUSED(eventType)
 MSG* msg = reinterpret_cast<MSG*>(message);
 unsigned int  msgType = msg->message;
 MySerialSetting->PortUpdateInformation();
   if(msgType == WM_DEVICECHANGE)
   {
        qDebug() << "Recv Event " ;
        if(MySerialPort->isOpen())
        {
           //if(MySerialSetting->SerialPortNum == 0)
           {
             QMessageBox msgBox(this);
             msgBox.setText("串口已移除");
             msgBox.exec();
             MySerialPort->close();
           }
       }

   }
  return false;
}






