#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,length;
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
if(dx>=dy)
{
length=dx;
}
	else
	{
	length=dy;
	}
dx=(x2-x1)/length;
dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
i=1;
	while(i<=length)
	{
	putpixel(x+200,y+200,15);

	x=x+dx;
	y=y+dy;
	i=i+1;
	delay(100);
	}
getch();
closegraph();
}
