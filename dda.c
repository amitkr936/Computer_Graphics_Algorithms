#include<stdio.h>
#include<graphics.h>
#include<math.h>
struct points
{
	int x;
	int y;
};
int main()
{
	struct points x1,x2;
	printf("Enter coordinates of point 1\n");
	scanf("%d",&x1.x);
	scanf("%d",&x1.y);
	printf("Enter coordinates of point 2\n");
	scanf("%d",&x1.x);
	scanf("%d",&x1.y);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"*");
	int dx,dy,no_of_steps;
	dx=x1.x-x2.x;
	dy=x1.y-x2.y;
	if(abs(dx)>abs(dy))
	{
		no_of_steps=abs(dx);
	}
	else
	{
		no_of_steps=abs(dy);
	}
	int x_increment=dx/no_of_steps;
	int y_increment=dy/no_of_steps;
	int x=x1.x;
	int y=x1.y;
	putpixel(x,y,WHITE);
	while(no_of_steps>0)
	{
		x+=x_increment;
		y+=y_increment;
		no_of_steps--;
		putpixel(x,y,WHITE);
	}
}
