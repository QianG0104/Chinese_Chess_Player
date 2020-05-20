#ifndef CHESS_H
#define CHESS_H
#include<QPixmap>
#include<QVector>
#include<QString>


class chess:public QPixmap//加图片、记录当前位置的坐标、记录红黑方
{
public:
    int team,x,y;//横纵坐标
    QString path;//图片路径
    chess(int team0,int x0,int y0,QString path0);//(红黑方，横坐标，添加图片的路径)，函数内要实现放棋子（图片）的功能
    int judge_posx(int x);//传横坐标判断在第几列
    int judge_posy(int y);//传纵坐标判断在第几行
    virtual bool judge(int x1,int y1)=0;//判断点击的位置能不能走（要走的位置的横总坐标）
    virtual void move_to(int x2,int y2)=0;//记录要走到的位置的坐标，刷新画面，刷新数据
};


class ma:public chess
{
public:
  ma(int team0,int x0,int y0, QString path0)
  {
      team=team0;
      x=x0;
      y=y0;
      path=path0;
  };
  bool judge(int x1,int x2);
  void move_to(int x2,int y2);
};

class pao:public chess
{
    public:
    pao(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

class jiang:public chess
{
    public:
    jiang(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

class zu:public chess
{
    public:
    zu(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

class xiang:public chess
{
    public:
    xiang(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

class che:public chess
{
    public:
    che(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

class shi:public chess
{
    public:
    shi(int team0,int x0,int y0,QString path0);
    bool judge(int x1,int x2);
    void move_to(int x2,int y2);
};

/*
class board:
{
public:
    QVector<chess*> record;
    board();//绘制棋盘,给每个棋子创建对象且放置于棋盘上
    //void move(int a,int b,int c,int d);//把对方的数据传回来时用的，可能不叫这个
    void go(int a,int b,int c,int d);//通过鼠标点击来判断要走的棋子，当下一次点击开始时，通过调用函数判断点击的位置能不能走，并传递数据
};

*/

#endif // CHESS_H

