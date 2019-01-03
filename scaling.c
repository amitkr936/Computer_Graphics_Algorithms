#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    int x=50,y=50,x1=100,y1=100;
    rectangle(x,y,x1,y1);
    delay(4000);
    setcolor(4);
    int sx=2,sy=3;
    int xx1=x1*sx;
    int yy1=y1*sy;
    rectangle(x,y,xx1,yy1);
    getch();
    closegraph();
    
    return 0;
}
