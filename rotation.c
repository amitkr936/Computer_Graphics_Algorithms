#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd=DETECT,gm;
    int lt=50,tp=50,rt=100,bt=100;
    int px=50,py=50;//(50,50)
    float angle=90*(float)22/(180*7);
    int a,b,c,d;
    initgraph(&gd,&gm,"*");
    line(lt,tp,rt,bt);
    //rotation along x axis
    a=px+(lt-px)*cos(angle)-(tp-py)*sin(angle);
    b=py+(lt-px)*sin(angle)+(tp-py)*cos(angle);
    c=px+(rt-px)*cos(angle)-(bt-py)*sin(angle);
    d=py+(rt-px)*sin(angle)+(bt-py)*cos(angle);
    line(a,b,c,d);
    getch();
    closegraph();
}
