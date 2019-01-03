#include<stdio.h>
//#include<graphics.h>
struct points{
    int x;
    int y;
};
void wait_for_char();
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
    dx=x1-x0;
    dy=y1-y0;
 
    x=x0;
    y=y0;
 
    p=2*dy-dx;
 
    while(x<x1)
    {
        if(p>=0)
        {
            printf("\n%d , %d",x,y);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            printf("\n%d , %d",x,y);
            p=p+2*dy;
        }
        x=x+1;
    }
    //wait_for_char();
  //  delay(100000000);
    //closegraph();
}
int main()
{   
    struct points x1,x2;
   // int gdriver=DETECT, gmode;
    //initgraph(&gdriver, &gmode, "*");
 
    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x1.x, &x1.y);
 
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x2.x, &x2.y);
    drawline(x1.x, x1.y, x2.x, x2.y);
 
    return 0;
}