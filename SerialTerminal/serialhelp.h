#ifndef SERIALHELP_H
#define SERIALHELP_H

#include <QDialog>

namespace Ui {
class SerialHelp;
}

class SerialHelp : public QDialog
{
    Q_OBJECT

public:
    explicit SerialHelp(QWidget *parent = nullptr);
    ~SerialHelp();

private:
    Ui::SerialHelp *ui;
};

#endif // SERIALHELP_H
