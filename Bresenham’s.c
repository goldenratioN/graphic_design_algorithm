#include<stdio.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;

	p=2*dy-dx;

	while(x<x1)
	{
		if(p>=0)
		{
			printf("(%d,%d)\n",x,y);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			printf("(%d,%d)\n",x,y);
			p=p+2*dy;
		}
		x=x+1;
	}

	printf("(%d,%d)\n",x,y);
}

int main()
{
	int x0, y0, x1, y1;

	x0 = 0;
	y0 = 0;
	x1 = 4;
	y1 = 2;
	drawline(x0, y0, x1, y1);

	return 0;
}
