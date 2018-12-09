#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    outtext("Enter any key to change the background color to Green");
    getch();
    setbkcolor(GREEN);
    getch();
    delay(10000);
    closegraph();
    return 0;
}
