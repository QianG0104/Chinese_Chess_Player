#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <QtNetwork>

namespace Ui {
class clientWindow;
}

class clientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientWindow(QWidget *parent = 0);
    ~clientWindow();

    void connectHost();

public slots:
    void recvMessage();


private slots:
    void on_sendButton_clicked();

private:
    Ui::clientWindow *ui;
    QTcpSocket *readWriteSocket;
};

#endif // CLIENTWINDOW_H
