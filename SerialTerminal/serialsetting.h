#ifndef SERIALSETTING_H
#define SERIALSETTING_H

#include <QDialog>
#include <QSerialPort>

struct __SerialSelectInfo
{
   QString SerialPortName;
   int     SerialBaudRateIndex=2;
   int     SerialDataBitsIndex=0;
   int     SerialStopBitsIndex=0;
   int     SerialCrcBitsIndex=0;
};


namespace Ui {
class SerialSetting;
}

class SerialSetting : public QDialog
{
    Q_OBJECT

public:
    explicit SerialSetting(QWidget *parent = nullptr);
    SerialSetting(QWidget *parent,QSerialPort *SerialPort);
    ~SerialSetting();
    void ConfigSrialPort();
    void PortUpdateInformation();

private slots:
    void on_pushButton_OpenSerial_clicked();
    bool  nativeEvent(const QByteArray &eventType, void *message, long*);
    void on_horizontalSlider_CmdTime_valueChanged(int value);

private:
    Ui::SerialSetting *ui;
    QSerialPort *MySerialPort;

public:
    int  SerialPortNum = 0;
    int  CmdTime = 200;

private:
    __SerialSelectInfo SerialSelectInfo;
};

#endif // SERIALSETTING_H
