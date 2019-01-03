#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    arc(100,100,0,130,89);//To Draw an arc void arc(int x, int y, int stangle, int endangle, int radius);
    //x and y are the center of the arc
    bar(200,100,300,400);//void bar(int left, int top, int right, int bottom);
    bar3d(350, 350, 450, 450, 20, 1);//void bar3d(int left, int top, int right, int bottom, int depth, int topflag);
    circle(400,300,60);// void circle(int x, int y, int radius);
    line(150,150,400,400);//void line(int x1, int y1, int x2, int y2);
    rectangle(10,200,10,200);
    setcolor(RED);
    circle(400,300,90);

    getch();
    closegraph();
    return 0;
}