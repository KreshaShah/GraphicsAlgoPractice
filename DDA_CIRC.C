#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
float x1,y1,x2,y2,startx,starty,epsilon;
int gd,gm,i,val;
int r;
printf("Enter the radius of the circle:\n");
scanf("%d",&r);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
x1=r*cos(0);
y1=r*sin(0);
startx=x1;
starty=y1;
i=0;
	do
	{
	val=pow(2,i);
	i++;
	}
		while(val<r);
		epsilon=1/pow(2,i-1);
			do
			{
			x2=x1+y1*epsilon;
			y2=y1-epsilon*x2;
			putpixel(x2+200,y2+200,9);
			x1=x2;
			y1=y2;
			delay(10);
			}
				while((y1-starty)< epsilon || (startx-x1) >= epsilon);
getch();
closegraph();
}
