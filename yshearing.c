#include<graphics.h>
int main()
{
    int shy;
    printf("Enter the sheering values of y");
    scanf("%d",&shy);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    line(100,100,200,100);
    line(200,100,100,100);
    line(100,100+shy,200,100+shy);
    //line(100,50+shy,100,100+shy);
    line(200,100+shy,100,100+shy);
    getch();
    closegraph();
}