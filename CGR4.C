#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y,xc,yc,d,r;
initgraph(&gd,&gm,"C:/TurboC3/BGI");
clrscr();
printf("Enter the radius of the circle:-\n");
scanf("%d",&r);
printf("Enter the center of the circle:-\n");
scanf("%d%d",&xc,&yc);
d=3-2*r;
x=0;
y=r;
do
{
putpixel(xc+x,yc+y,RED);
putpixel(xc+y,yc+x,RED);
putpixel(xc+x,yc-y,RED);
putpixel(xc+y,yc-x,RED);
putpixel(xc-y,yc-x,RED);
putpixel(xc-x,yc-y,RED);
putpixel(xc-x,yc+y,RED);
putpixel(xc-y,yc+x,RED);
if(d<=0)
{
d=d+4*x+6;;
}
else
{
d=d+4*(x-y)+10;
y=y-1;
}
x=x+1;
}while(x<y);
getch();
closegraph();
}