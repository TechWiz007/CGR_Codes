#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

void main() {
int gd=DETECT,gm,x1,y1,x2,y2,dx,dy,length,x,y,i;
initgraph (&gd, &gm, "C:/TurboC3/BGI");
clrscr();
printf("Enter the value of x1,y1,x2,y2: ");
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
dx = abs(x2-x1);
dy = abs(y2-y1);
if (dx>=dy) {
length = dx;
}
else {
length = dy;
}
dx = dx / length;
dy = dy / length;
x = x1;
y = y1;
i = 1;
while (i <= length) {
putpixel(x, y, 4);
x = x + dx;
y = y + dy;
i = i + 1;
}
getch();
closegraph();
}