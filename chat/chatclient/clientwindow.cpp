#include "clientwindow.h"
#include "ui_clientwindow.h"

clientWindow::clientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientWindow)
{
    ui->setupUi(this);
    ui->sendButton->setShortcut(Qt::Key_Enter);
}

clientWindow::~clientWindow()
{
    delete ui;
}

void clientWindow::connectHost()
{
    this->readWriteSocket = new QTcpSocket;
    this->readWriteSocket->connectToHost(QHostAddress("127.0.0.1"), 8888);
    QObject::connect(this->readWriteSocket,SIGNAL(readyRead()),this,SLOT(recvMessage()));
}

void clientWindow::recvMessage()
{
    QString info;
    info += this->readWriteSocket->readAll();
    ui->infoEdit->append(info);
}


void clientWindow::on_sendButton_clicked()
{
    QByteArray *array =new QByteArray;
    array->clear();
    array->append(ui->inputEdit->toPlainText());
    this->readWriteSocket->write(array->data());
    ui->infoEdit->append(ui->inputEdit->toPlainText());
    ui->inputEdit->clear();

}
