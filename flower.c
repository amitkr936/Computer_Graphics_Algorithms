#include<graphics.h>
void boundaryFill4(int x, int y, int fill_color,int boundary_color) 
{ 
	if(getpixel(x, y) != boundary_color && 
	getpixel(x, y) != fill_color) 
	{ 
		putpixel(x, y, fill_color); 
		boundaryFill4(x + 1, y, fill_color, boundary_color); 
		boundaryFill4(x, y + 1, fill_color, boundary_color); 
		boundaryFill4(x - 1, y, fill_color, boundary_color); 
		boundaryFill4(x, y - 1, fill_color, boundary_color); 
	} 
} 
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(5);

    arc(100,80,140,400,15);
    arc(120,100,-120,130,15);
    arc(100,120,340,570,15);
    arc(80,100,420,200,15);
    setcolor(10);
    arc(120,150,150,230,50);
    setcolor(10);
    circle(100,100,15);
    boundaryFill4(100,100,5,10);

    getch();
    closegraph();
    delay(10000);
}