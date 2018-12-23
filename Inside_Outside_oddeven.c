#include<stdio.h>
#include<graphics.h>
void drawpolyg();
void drawline();
void wait_for_char();
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"*");
   rectangle(100,100,400,400);
   getch();//Draw Polygon
   closegraph();
}


