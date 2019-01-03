#include<graphics.h>
#include<stdio.h>
void FloodFill8(int x,int y,int fill,int old)
{
    int current;
    current=getpixel(x,y);
    if(current==old)
    {
        putpixel(x,y,fill);
        FloodFill8(x+1,y,fill,old);
        FloodFill8(x-1,y,fill,old);
        FloodFill8(x,y-1,fill,old);
        FloodFill8(x,y+1,fill,old);
        FloodFill8(x+1,y+1,fill,old);
        FloodFill8(x-1,y+1,fill,old);
        FloodFill8(x-1,y-1,fill,old);
        FloodFill8(x+1,y-1,fill,old);
    }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    setcolor(BLUE);
    rectangle(50,50,100,100);
    FloodFill8(56,56,5,getpixel(56,56));
    getch();
    closegraph();
}