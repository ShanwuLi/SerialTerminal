#ifndef SERIALSKIN_H
#define SERIALSKIN_H

#include <QDialog>
#include <QColor>
#include <QColorDialog>


namespace Ui {
class SerialSkin;
}

class SerialSkin : public QDialog
{
    Q_OBJECT

public:
    explicit SerialSkin(QWidget *parent = nullptr);
    ~SerialSkin();

private:
    Ui::SerialSkin *ui;
public:
    QColor BackGroundColorInSetting=0x4b4545;
    QColor TextColorInSetting=Qt::green;

public:
    QColor BackGroundColor=0x4b4545;
    QColor TextColor=Qt::green;

private slots:
    void on_pushButton_TextColor_clicked();
    void on_pushButton_BackGroundColor_clicked();
    void on_pushButton_OK_clicked();
};

#endif // SERIALSKIN_H
