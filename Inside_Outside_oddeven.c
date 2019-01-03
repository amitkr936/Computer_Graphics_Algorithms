#include<stdio.h>
#include<graphics.h>
void drawpolyg();
void drawline();
void wait_for_char();
int main()
{
   int gd=DETECT,gm;
   int x,y;
   int flag=0;
    printf("Enter the coordinates of the Point to be tested.");
   scanf("%d%d",&x,&y);
   initgraph(&gd,&gm,"*");
   rectangle(100,100,300,300);//rectangle(int left, int top, int right, int bottom);
  
   for(int i=0;i<x;i++)
   {
      putpixel(i,y,WHITE);
      if(i>=100)
      {
         if(i==100 && y>=100 && y<=300)
         {
            flag+=1;
         }
         putpixel(i,y,RED);
      }
      if(i<=300)
      { 
         if(i==300)
         {
            flag-=1;
         }
         putpixel(i,y,RED);
      }
      
   }
   if(flag%2==0)//even
   {
      printf("Outside the Polygon");
   }
   else
   {
      printf("Inside the Polygon");
   }
   
   getch();//Draw Polygon
   closegraph();
}


