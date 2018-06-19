#ifndef MYCOM_H
#define MYCOM_H

#include <QMainWindow>
#include "posix_qextserialport.h"
#include <QTimer>

namespace Ui {
class Mycom;
}

class Mycom : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mycom(QWidget *parent = 0);
    ~Mycom();

private:
    Ui::Mycom *ui;
    Posix_QextSerialPort *Com;
    QTimer *readTimer;
private slots:
    void on_pushButton_clicked();
    void readCom();
};

#endif // MYCOM_H
