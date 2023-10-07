#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{  
int a[7][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0,},{0,0,1,1,1,1},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,1,1}};
  int i,j; 
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 for(i=0;i<7;i++)
 {    
  for(j=0;j<7;j++){putpixel(200+i,200+j,5*a[i][j]);
 }}
  getch();
  closegraph();}