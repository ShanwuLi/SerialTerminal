#include "serialsetting.h"
#include "ui_serialsetting.h"
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


SerialSetting::SerialSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialSetting)
{
    ui->setupUi(this);
   // MySerialPort = SerialPort;
}


SerialSetting::SerialSetting(QWidget *parent,QSerialPort *SerialPort) :
    QDialog(parent),
    ui(new Ui::SerialSetting)
{
    ui->setupUi(this);
    MySerialPort = SerialPort;
    ui->horizontalSlider_CmdTime->setValue(1500);
}


SerialSetting::~SerialSetting()
{
    delete ui;
}

void SerialSetting::PortUpdateInformation()
{
    QString PortInfo;
    QString PortName;
    ui->comboBox_PortName->clear();
    if(MySerialPort->isOpen())
    {
       ui->comboBox_PortName->addItem("");
       ui->comboBox_PortName->setItemText(0,SerialSelectInfo.SerialPortName);

       ui->comboBox_BautRate->setCurrentIndex(SerialSelectInfo.SerialBaudRateIndex);
       ui->comboBox_DataBits->setCurrentIndex(SerialSelectInfo.SerialDataBitsIndex);
       ui->comboBox_StopBits->setCurrentIndex(SerialSelectInfo.SerialStopBitsIndex);
       ui->comboBox_CrcBits->setCurrentIndex(SerialSelectInfo.SerialCrcBitsIndex);

       ui->pushButton_OpenSerial->setText("关闭串口");

    }
    else
    {
     foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
      {
        QSerialPort myserial;
        myserial.setPort(info);
           if(myserial.open(QIODevice::ReadWrite))
           {
               //将扫描到的串口添加到combox控件中
               PortInfo=myserial.portName();
               //关闭串口
               PortInfo+=":";
               PortInfo+=info.description();
               myserial.close();
               ui->comboBox_PortName->addItem(PortInfo);
            }

      }
     ui->pushButton_OpenSerial->setText("打开串口");
    }
    SerialPortNum = ui->comboBox_PortName->count();
}


bool SerialSetting::nativeEvent(const QByteArray &eventType, void *message, long*)
{
 Q_UNUSED(eventType)
 MSG* msg = reinterpret_cast<MSG*>(message);
 unsigned int  msgType = msg->message;

   if(msgType == WM_DEVICECHANGE)
   {
        qDebug() << "Recv Event " ;
        PortUpdateInformation();
        if(MySerialPort->isOpen())
        {
           if(ui->comboBox_PortName->count() == 0)
           {
             QMessageBox msgBox(this);
             msgBox.setText("串口已移除");
             msgBox.exec();
             ui->pushButton_OpenSerial->setText("打开串口");
             MySerialPort->close();
           }
       }

   }
  return false;
}

void SerialSetting::on_pushButton_OpenSerial_clicked()
{
   if(!MySerialPort->isOpen())
    {
        if((ui->comboBox_PortName->currentText()!=""))
        {
            //尝试打开串口
            QString PortName=ui->comboBox_PortName->currentText();  //获取端口号
            SerialSelectInfo.SerialPortName = PortName;
            QStringList CurrName=PortName.split(":");
            PortName=CurrName[0];
            qDebug()<<PortName;

            //设置串口号
            MySerialPort->setPortName(PortName);
            //
            if(MySerialPort->open(QIODevice::ReadWrite))
             {
                //设置波特率
                int BaudRate = ui->comboBox_BautRate->currentIndex();
                SerialSelectInfo.SerialBaudRateIndex = BaudRate;
                switch(BaudRate)
                {
                  case 0: MySerialPort->setBaudRate(QSerialPort::Baud2400);break;
                  case 1: MySerialPort->setBaudRate(QSerialPort::Baud4800);break;
                  case 2: MySerialPort->setBaudRate(QSerialPort::Baud9600);break;
                  case 3: MySerialPort->setBaudRate(QSerialPort::Baud19200);break;
                  case 4: MySerialPort->setBaudRate(QSerialPort::Baud38400);break;
                  case 5: MySerialPort->setBaudRate(QSerialPort::Baud57600);break;
                  case 6: MySerialPort->setBaudRate(QSerialPort::Baud115200);break;
                  default: MySerialPort->setBaudRate(QSerialPort::Baud9600);break;
                }
               //设置数据位
               int DataBits = ui->comboBox_DataBits->currentIndex();
               SerialSelectInfo.SerialDataBitsIndex = DataBits;
               switch(DataBits)
               {
                  case 0: MySerialPort->setDataBits(QSerialPort::Data8);break;
                  case 1: MySerialPort->setDataBits(QSerialPort::Data7);break;
                  case 2: MySerialPort->setDataBits(QSerialPort::Data6);break;
                  case 3: MySerialPort->setDataBits(QSerialPort::Data5);break;
                  default:MySerialPort->setDataBits(QSerialPort::Data8);break;
               }
               //设置停止位
               int StopBits = ui->comboBox_StopBits->currentIndex();
               SerialSelectInfo.SerialStopBitsIndex = StopBits;
               switch(StopBits)
               {
                  case 0:MySerialPort->setStopBits(QSerialPort::OneStop);break;
                  case 1:MySerialPort->setStopBits(QSerialPort::OneAndHalfStop);break;
                  case 2:MySerialPort->setStopBits(QSerialPort::TwoStop);break;
                  default:MySerialPort->setStopBits(QSerialPort::OneStop);break;
               }
               //设置校验位
               int CRC = ui->comboBox_CrcBits->currentIndex();
               SerialSelectInfo.SerialCrcBitsIndex = CRC;
               switch(CRC)
               {
                 case 0:MySerialPort->setParity(QSerialPort::NoParity);break;
                 case 1:MySerialPort->setParity(QSerialPort::EvenParity);break;
                 case 2:MySerialPort->setParity(QSerialPort::OddParity);break;
                 case 3:MySerialPort->setParity(QSerialPort::SpaceParity);break;
                 case 4:MySerialPort->setParity(QSerialPort::MarkParity);break;
                 default:MySerialPort->setParity(QSerialPort::NoParity);break;
               }
               //设置为无流控制
               MySerialPort->setFlowControl(QSerialPort::NoFlowControl);
               //连接信号槽函数
               connect(MySerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortReceiveData()));
               qDebug()<<"打开串口成功";
               ui->pushButton_OpenSerial->setText("关闭串口");
             }
            else
             {
                QMessageBox msgBox(this);
                msgBox.setText("串口打开失败");
                msgBox.exec();
             }
         }
        else
        {
           QMessageBox msgBox(this);
           msgBox.setText("未检测到串口");
           msgBox.exec();
        }
     }
    else
    {
         MySerialPort->close();
         QMessageBox msgBox(this);
         msgBox.setText("串口已关闭！");
         msgBox.exec();
         ui->pushButton_OpenSerial->setText("打开串口");
    }

    this->close();
}

void SerialSetting::on_horizontalSlider_CmdTime_valueChanged(int value)
{
    int GetCmdTime = ui->horizontalSlider_CmdTime->value();
    QString DisCmdTime = QString::number(GetCmdTime,10);
    DisCmdTime += "ms";
    ui->label_CmdTime->setText(DisCmdTime);
    CmdTime = GetCmdTime;
}
