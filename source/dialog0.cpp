#include "dialog0.h"
#include "ui_dialog0.h"
#include <QMouseEvent>
#include <QRect>

Dialog0::Dialog0(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog0)
{
    ui->setupUi(this);
}

Dialog0::~Dialog0()
{
    delete ui;
}





void Dialog0::paintEvent(QPaintEvent *event)
 {
     Q_UNUSED(event)
     QPainter painter(this);
     //列
     int r=5;
     for(int i=0;i<8;i++)
     {
         for(int j=0;j<(8-1);j++)
         {
             if(a[j+i*(8-1)]==0)
             {
                 /*QRect new_tube(i*50,j*50,10,60);
                 all_tube.append(new_tube);
                  painter.drawRect(new_tube);*/
                  painter.drawRect(i*50,j*50,10,60);
             }
         }
     }
     //行
     for(int i=0;i<(8-1);i++)
     {
         for(int j=0;j<8;j++)
         {
            if(a[8*(8-1)+j+i*(8-1)]==0)
            {
                painter.drawRect(i*50,j*50,60,10);
            }
         }
     }
}

void Dialog0::mousePressEvent(QMouseEvent *event)
{
    int r=5;
    if(event->button()==Qt::LeftButton)
    {
       QPoint pos=event->pos();
        Q_UNUSED(event);
       for(int i=0;i<400;i+=50){
           for(int j=10;j<400;j+=50){
               if((pos.x()>i)&&(pos.x()<i+10)&&(pos.y()>j)&&(pos.y()<j+40))
               {if(a[i*(8-1)/50+(j-10)/50]==1){a[i*(8-1)/50+(j-10)/50]=0;break;}
                   else {a[i*(8-1)/50+(j-10)/50]=1;break;}
   }
           }
       }
       for(int i=10;i<361;i+=50){
           for(int j=0;j<361;j+=50){
               if((pos.x()>i)&&(pos.x()<i+40)&&(pos.y()>j)&&(pos.y()<j+10))
               {if(a[8*(8-1)+(j+(8-1)*(i-10))/50]==1){a[8*(8-1)+(((8-1)*(i-10)+j)/50)]=0;break;}
                   else {a[8*(8-1)+(((8-1)*(i-10)+j)/50)]=1;;break;}
   }
           }
       }

       this->update();

    }


}


