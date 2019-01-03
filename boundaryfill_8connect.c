#include <graphics.h> 

// Function for 4 connected Pixels 
void boundaryFill8(int x, int y, int fill_color,int boundary_color) 
{ 
	if(getpixel(x, y) != boundary_color && 
	getpixel(x, y) != fill_color) 
	{ 
		putpixel(x, y, fill_color); 
	    boundaryFill8(x + 1, y, fill_color, boundary_color); 
        boundaryFill8(x, y + 1, fill_color, boundary_color); 
        boundaryFill8(x - 1, y, fill_color, boundary_color); 
        boundaryFill8(x, y - 1, fill_color, boundary_color); 
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color); 
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color); 
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color); 
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
	} 
} 

//driver code 
int main() 
{ 
	int gd = DETECT, gm; 

	initgraph(&gd, &gm, "*"); 

	int x = 250, y = 200, radius = 50; 

	// circle fuction 
	circle(x, y, radius); 

	// Function calling 
	boundaryFill8(x, y, 6, 15); 

	delay(10000); 

	getch(); 

	// closegraph function closes the 
	// graphics mode and deallocates 
	// all memory allocated by 
	// graphics system . 
	closegraph(); 

	return 0; 
} 