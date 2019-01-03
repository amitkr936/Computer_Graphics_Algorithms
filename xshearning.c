#include<graphics.h>
int main()
{
    int shx;
    printf("Enter the sheering values of x");
    scanf("%d",&shx);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    line(100,100,200,100);
    line(100,50,100,100);
    line(200,100,100,100);
    setcolor(RED);
    line(100+shx,100,200+shx,100);
    line(100+shx,50,100+shx,100);
    line(200+shx,100,100+shx,100);
    getch();
    closegraph();
}