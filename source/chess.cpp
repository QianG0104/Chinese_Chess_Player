#include "chess.h"
#include<QPainter>
#include<QString>

chess::chess(int team0,int x0,int y0,QString path0)
{
    team=team0;
    x=x0;
    y=y0;
    path=path0;
    //QPainter paint(this);
    //QPixmap pic(path0);
    //paint.drawPixmap(x0,y0,25,25,pic);
}

int chess::judge_posx(int x)
{
  for(int i=10;i<491;i+=60)
  {
      if((x>i-20)&&(x<i+20))
      return (i-10)/60;
  }
      return -1;
}



int chess::judge_posy(int y)
{
  for(int j=0;j<551;j+=60)
  {
      if((y>j-20)&&(y<j+20))
      return (j-10)/60;
  }
      return -1;
}





//chess chess

bool ma::judge(int x1,int x2)
{
    if((judge_posx(x1)==x-1)||(judge_posx(x1)==x+1))
    {
        if((judge_posy(x2)==y-2)||(judge_posy(x2)==y+2))
        {
            return true;
        }
    }
     if((judge_posx(x1)==x-2)||(judge_posx(x1)==x+2))
     {
         if((judge_posy(x2)==y-1)||(judge_posy(x2)==y+1))
         {
             return true;
         }
     }
     return false;
}


void ma::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}


bool pao::judge(int x1,int x2)
{
if((x1==x)||(x2==y))
{
    return true;
}
    return false;
}


void pao::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}



bool jiang::judge(int x1,int x2)
{
    if((judge_posx(x1)==x-1)||(judge_posx(x1)==x+1))
    {
        if(judge_posy(x2)==y)
        {
            return true;
        }
    }
     if(judge_posx(x1)==x-1)
     {
         if((judge_posy(x2)==y-1)||(judge_posy(x2)==y+1))
         {
             return true;
         }
      }
        return false;
}

void jiang::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}


bool zu::judge(int x1,int x2)
{
    if(team==0)//底下的红方
    {
        if(judge_posy(x2)>=5)//没过河
        {
            if((x1==x)&&(x2==y-1))
            {

            }
        }
        if(judge_posy(x2)<=4)//过河了
        {
            if((x1==x)&&(x2==y-1))
            {
                return true;
            }
            if((x1==x+1)||(x1==x-1))
            {
                if(x2==y)
                {
                    return true;
                }
            }
        }

      }
    if(team==1)//黑方
    {
return true;
    }
return false;
}

void zu::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}


bool xiang::judge(int x1,int x2)
{
    if((judge_posx(x1)==x-2)||(judge_posx(x1)==x+2))
    {
        if((judge_posy(x2)==y-2)||(judge_posy(x2)==y+2))
        {
            return true;
        }

    }
    return false;
}
void xiang::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}


bool che::judge(int x1,int x2)
{
    if((x1==x)||(x2==y))
    {
        return true;
    }
        return false;
}

void che::move_to(int x2,int y2)
{
    x=x2;
    y=y2;
}


bool shi::judge(int x1,int x2)
{
    if((judge_posx(x1)==x-1)||(judge_posx(x1)==x+1))
    {
        if((judge_posy(x2)==y-1)||(judge_posy(x2)==y+1))
        {
            return true;
        }
    }
            return false;
}

void shi::move_to(int x2,int y2)
{
x=x2;
y=y2;
}
/*
bool ma::judge(int x1,int x2)
{
    if((judge_posx(x1)==x-1)||(judge_posx(x1)==x+1))
    {
        if((judge_posy(x2)==y-2)||(judge_posy(x2)==y+2))
        {
            return true;
        }
    }
     if((judge_posx(x1)==x-2)||(judge_posx(x1)==x+2))
     {
         if((judge_posy(x2)==y-1)||(judge_posy(x2)==y+1))
         {
             return true;
         }
        return false;
     }*/
