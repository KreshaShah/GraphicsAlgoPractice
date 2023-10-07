#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void translation(int x0,int y0, int x1,int y1)
{
    int i,j,k,tx,ty,outline[3][3];
    int gd=DETECT, gm;
    int ogline[3][3];
    int tline[3][3];
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    printf("Enter tx and ty:");
    scanf("%d%d",&tx,&ty);
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    outline[i][j]=0;
	}
    }
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    ogline[i][j]=0;
	}
    }
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    tline[i][j]=0;
	}
    }
    ogline[0][0]=x0;
    ogline[0][1]=y0;
    ogline[0][2]=1;
    ogline[1][0]=x1;
    ogline[1][1]=y1;
    ogline[1][2]=1;
    ogline[2][0]=0;
    ogline[2][1]=0;
    ogline[2][2]=1;
    tline[0][0]=1;
    tline[0][1]=0;
    tline[0][2]=0;
    tline[1][0]=0;
    tline[1][1]=1;
    tline[1][2]=0;
    tline[2][0]=tx;
    tline[2][1]=ty;
    tline[2][2]=1;

    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    for(k=0;k<3;k++)
	    {
		outline[i][j]+=ogline[i][k]*tline[k][j];
	    }
	}
    }
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d\t",outline[i][j]);
	}
    }
    setcolor(RED);
    line(ogline[0][0],ogline[0][1],ogline[1][0],ogline[1][1]);
    setcolor(YELLOW);
    line(outline[0][0],outline[0][1],outline[1][0],outline[1][1]);
}
void scaling(int x0, int y0, int x1, int y1)
{
    int i,j,k,sx,sy,outline[3][3];
    int gdriver=DETECT, gmode;
    int ogline[3][3];
    int sline[3][3];
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
    printf("Enter sx and sy:");
    scanf("%d%d",&sx,&sy);
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    outline[i][j]=0;
	}
    }
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    ogline[i][j]=0;
	}
    }
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    sline[i][j]=0;
	}
    }
    ogline[0][0]=x0;
    ogline[0][1]=y0;
    ogline[0][2]=1;
    ogline[1][0]=x1;
    ogline[1][1]=y1;
    ogline[1][2]=1;
    ogline[2][0]=0;
    ogline[2][1]=0;
    ogline[2][2]=1;
    sline[0][0]=sx;
    sline[0][1]=0;
    sline[0][2]=0;
    sline[1][0]=0;
    sline[1][1]=sy;
    sline[1][2]=0;
    sline[2][0]=0;
    sline[2][1]=0;
    sline[2][2]=1;

    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    for(k=0;k<3;k++)
	    {
		outline[i][j]+=ogline[i][k]*sline[k][j];
	    }
	}
    }
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d\t",outline[i][j]);
	}
    }
    setcolor(RED);
    line(ogline[0][0],ogline[0][1],ogline[1][0],ogline[1][1]);
    setcolor(YELLOW);
    line(outline[0][0],outline[0][1],outline[1][0],outline[1][1]);
}
void rotation(int x0,int y0,int x1, int y1)
{
    int i,j,k,theta,outline[3][3];
    int gdriver=DETECT, gmode;
    int ogline[3][3];
    int rline[3][3];
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
    printf("Enter theta:");
    scanf("%d",&theta);
      for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    outline[i][j]=0;
	}
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ogline[i][j]=0;
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            rline[i][j]=0;
        }
    }
    ogline[0][0]=x0;
    ogline[0][1]=y0;
    ogline[0][2]=1;
    ogline[1][0]=x1;
    ogline[1][1]=y1;
    ogline[1][2]=1;
    ogline[2][0]=0;
    ogline[2][1]=0;
    ogline[2][2]=1;
    rline[0][0]=cos(theta);
    rline[0][1]=sin(theta);
    rline[0][2]=0;
    rline[1][0]=-sin(theta);
    rline[1][1]=cos(theta);
    rline[1][2]=0;
    rline[2][0]=0;
    rline[2][1]=0;
    rline[2][2]=1;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                outline[i][j]+=ogline[i][k]*rline[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",outline[i][j]);
        }
    }
    setcolor(RED);
    line(ogline[0][0],ogline[0][1],ogline[1][0],ogline[1][1]);
    setcolor(YELLOW);
    line(outline[0][0],outline[0][1],outline[1][0],outline[1][1]);

}
int main()
{
    int gdriver=DETECT, gmode;
    int x0,y0,x1,y1,x2,y2,x3,y3,i,j;
    int ch;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
	printf("\n1-Translation, 2-Scaling 3-Rotation");
   	scanf("%d",&ch);
    printf("Enter start point of line:");
    scanf("%d%d",&x0,&y0);
    printf("Enter end point of line: ");
    scanf("%d%d",&x1,&y1);
    switch(ch)
    {
    	 case 1: translation(x0,y0,x1,y1);
    			break;
    	 case 2: scaling(x0,y0,x1,y1);
    	 		break;
    	 case 3: rotation(x0,y0,x1,y1);
    	 		break;
    	default: printf("ERROR");
    }
    getch();
    closegraph();
    return 0;
}