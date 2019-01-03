#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x=100,y=100;
    circle(x,y,30);
    int tx=10,ty=10;
    int xx=x+tx;
    int yy=y+ty;
    circle(xx,yy,30);
    getch();
    closegraph();
}