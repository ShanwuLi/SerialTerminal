#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include "serialsetting.h"
#include <QTimer>
#include <QTextCursor>
#include <serialskin.h>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSetting_triggered();
    void SerialPortReceiveData();
    void MyTimerOutFeedBack();
    void on_actionSkin_triggered();
    void on_actionHelp_triggered();
    bool  nativeEvent(const QByteArray &eventType, void *message, long*);

protected:
    void keyPressEvent(QKeyEvent *e);


private:
    Ui::MainWindow *ui;
    QSerialPort *MySerialPort;
    SerialSetting *MySerialSetting;
    SerialSkin *MySerialSkin;
    bool IsTextDis = true;
    QTimer *MyTimer;

    QString *SendData;
    QByteArray *ReceivedData;
    bool SysCMDEnable = true;
    bool DataIsInputing=false;
};


#endif // MAINWINDOW_H
