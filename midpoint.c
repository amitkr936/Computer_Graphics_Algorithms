#include<stdio.h>
#include<graphics.h>
void midpoint(int,int,int);
int main()
{
    int x,y,r;
    printf("Enter the Center coordinates of the Circle");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Enter the radius");
    scanf("%d",&r);
    midpoint(x,y,r);
}
void midpoint(int x,int y,int r)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    int a=0,b=r;
    putpixel(a+x,b+y,WHITE);
    int P=1-r;
    while(b>=a)
    {
        if(P<0)
        {
            P=P+2*a+2+1;
            a=a+1;
            putpixel(x+b,y+a,WHITE);
            putpixel(x+a,y+b,WHITE);
            putpixel(x-b,y+a,WHITE);
            putpixel(x-a,y+b,WHITE);
            putpixel(x-a,y-b,WHITE);
            putpixel(x-b,y-a,WHITE);
            putpixel(x+b,y-a,WHITE);
            putpixel(x+a,y-b,WHITE);
 
        }
        else
        {
            a=a+1;
            b=b-1;
            P=P+2*a+2+1-2*b-2;
            putpixel(a+x,b+y,WHITE);
        }

    }
    delay(10000);

}