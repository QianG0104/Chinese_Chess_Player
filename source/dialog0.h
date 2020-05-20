#ifndef DIALOG0_H
#define DIALOG0_H

#include <QDialog>
#include<QPainter>
#include<QDebug>
#include<QVector>


namespace Ui {
class Dialog0;
}

class Dialog0 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog0(QWidget *parent = nullptr);
    bool a[120];
    int row;
   // int inflow[2];
    //int outflow[3];
    ~Dialog0();

private:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    Ui::Dialog0 *ui;
};
#endif // DIALOG0_H
