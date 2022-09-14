#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

void main() {
int gd=DETECT,gm;
int x1,y1,x2,y2,dx,dy,e,x,y,i;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");
printf("Enter starting point of the line: ");
scanf("%d %d", &x1, y1);
printf("Enter ending point of the line: ");
scanf("%d %d", &x2, &y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
putpixel(x,y,WHITE);
e=2*dy-dx;
for(i=1;i<dx;i++) {
putpixel(x,y,WHITE);
while(e>=0) {
y=y+1;
e=e+2*dy;
}
getch();
closegraph();
}
}
