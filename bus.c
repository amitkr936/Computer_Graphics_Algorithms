#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for(int i=0;i<500;i++)
    {
        cleardevice();
        rectangle(100+i,96,50+i,70);
        circle(90+i,98,4);
        circle(59+i,98,4);
        line(100,100,600,100);
        delay(10);
    }
    getch();
    delay(5000);

    return 0;
}
