#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    in[0]=ui->lineEdit_4->text();
    in[1]=ui->lineEdit_5->text();
    out[0]=ui->lineEdit->text();
    out[1]=ui->lineEdit_2->text();
    out[2]=ui->lineEdit_3->text();
    dialog0.exec();
}

