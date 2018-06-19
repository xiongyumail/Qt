#include "mycom.h"
#include "ui_mycom.h"

Mycom::Mycom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mycom)
{
    ui->setupUi(this);
    struct PortSettings ComSetting = {BAUD115200,DATA_8,PAR_NONE,STOP_1,FLOW_OFF,200};
    Com = new Posix_QextSerialPort("/dev/ttyUSB0",ComSetting,QextSerialBase::Polling);
    Com->open(QIODevice::ReadWrite);
    //connect(Com,SIGNAL(readRead()),this,SLOT(readCom()));
    readTimer = new QTimer(this);
    readTimer -> start(100);
    connect(readTimer,SIGNAL(timeout()),this,SLOT(readCom()));
}

Mycom::~Mycom()
{
    delete ui;
}

void Mycom::readCom()
{
    QByteArray temp = Com->readAll();
    ui->textBrowser->insertPlainText(temp);
}

void Mycom::on_pushButton_clicked() //发送数据
{
    Com->write(ui->lineEdit->text().toLatin1());
    //以ASCII码形式将数据写入串口
}
