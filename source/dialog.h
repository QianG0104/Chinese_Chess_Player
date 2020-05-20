#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QString>
#include<dialog0.h>
#include<QPushButton>
#include<QLineEdit>
#include<ui_dialog.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    QString a=ui->row->text();
    int r = a.toInt();
    QString in[2];
    QString out[3];
    ~Dialog();

private slots:
    void on_buttonBox_accepted();

  //  void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Dialog *ui;
    Dialog0 dialog0;

};

#endif // DIALOG_H
