#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int a,a1,b,b1,c,c1,xt,ch;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"*");
    a=getmaxx();
    a1=getmaxy();
    b=a/2;
    b1=b/2;

    line(b,0,b,a1);
    line(0,b1,a,b1);
    line(400,200,600,200);
    line(400,200,400,100);
    line(400,100,600,200);

    printf("1.origin\n");
    printf("2.x-axis\n");
    printf("3.y-axis\n");
    printf("4.exit\n");
    do
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                c=400-b,c1=200-b1;
                line(b-c,b1-c1,b-c-200,b1-c1);
                line(b-c,b1-c1+100,b-c-200,b1-c1);
                break;
            case 2:
                c=400-b;c1=200-b1;
                line(b+c,b1-c1,b+c+200,b1-c1);
                line(b+c,b1-c1,b+c,b1-c1+100);
                line(b+c,b1-c1+100,b+c+200,b1-c1);
                break;
            case 3:
                c=400-b;c1=200-b1;
                line(b-c,b1+c1,b-c-200,b1+c1);
                line(b-c,b1+c1,b-c,b1+c1-100);
                line(b-c,b1+c1-100,b-c-200,b1+c1);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Please enter the right options:");
                break;
        }
    }while(ch<4);
    getch();
    closegraph();   
}