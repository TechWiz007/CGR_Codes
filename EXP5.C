#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood_fill(int x, int y, int oc, int fc);
void main() {
int gd=DETECT,gm,x1,y1,x2,y2,x,y,oc,fc;
initgraph(&gd,&gm, "C:/TurboC3/BGI");
printf("Enter four coordinates: ");
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
rectangle(x1,x2,y1,y2);
printf("Enter seed point: ");
scanf("%d %d", &x, &y);
oc=getpixel(x,y);
printf("Enter fill color: ");
scanf("%d", &fc);
flood_fill(x,y,oc,fc);
getch();
closegraph();
}
void flood_fill(int x, int y, int oc, int fc) {
if (getpixel(x,y) == oc) {
putpixel(x,y,fc);
flood_fill(x+1,y,oc,fc);
flood_fill(x,y+1,oc,fc);
flood_fill(x-1,y,oc,fc);
flood_fill(x,y-1,oc,fc);
flood_fill(x+1,y+1,oc,fc);
flood_fill(x-1,y-1,oc,fc);
flood_fill(x+1,y-1,oc,fc);
flood_fill(x-1,y+1,oc,fc);
}
}