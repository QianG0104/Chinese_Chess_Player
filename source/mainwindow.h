#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<dialog.h>
#include<dialog0.h>
#include<QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();
    void on_actionset_up_2_triggered();

private:
    Ui::MainWindow *ui;
    Dialog dialog;
    Dialog0 dialog0;
};

#endif // MAINWINDOW_H
