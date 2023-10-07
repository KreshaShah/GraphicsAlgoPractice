#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,e;
int i,gd,gm;
clrscr();
printf("Enter the values of x1:\n");
scanf("%f",&x1);
printf("Enter the values of y1:\n");
scanf("%f",&y1);
printf("Enter the values of x2:\n");
scanf("%f",&x2);
printf("Enter the values of y2:\n");
scanf("%f",&y2);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
	do
	{
	putpixel(x+200,y+200,15);
		while(e>=0)
		{
		y=y+1;
		e=e-2*dx;

		}
	x=x+1;
	e=e+2*dy;
	i=i+1;
	}

	while(i<=dx);
getch();
closegraph();
}
