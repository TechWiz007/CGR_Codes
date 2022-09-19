#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundary_fill(int x,int y, int f_colour, int b_colour);
void main() {
int gd=DETECT,gm,x1,y1,x2,y2,x,y,f_colour,b_colour;
clrscr();
initgraph(&gd, &gm, "C:/TurboC3/BGI");
printf("\nEnter four coordinates: ");
scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
rectangle(170,230,250,280);
printf("Enter seed point: ");
scanf("%d %d", &x, &y);
printf("Enter fill colour: ");
scanf("%d", &f_colour);
b_colour=getpixel(x1,y1);
boundary_fill(x,y,f_colour,b_colour);
getch();
closegraph();
}
void boundary_fill(int x, int y, int f_colour, int b_colour) {
if (getpixel(x,y) != b_colour && getpixel(x,y) != f_colour) {
putpixel(x,y,f_colour);
boundary_fill(x+1,y,f_colour,b_colour);
boundary_fill(x,y+1,f_colour,b_colour);
boundary_fill(x-1,y,f_colour,b_colour);
boundary_fill(x,y-1,f_colour,b_colour);
boundary_fill(x+1,y+1,f_colour,b_colour);
boundary_fill(x-1,y-1,f_colour,b_colour);
boundary_fill(x+1,y-1,f_colour,b_colour);
boundary_fill(x-1,y+1,f_colour,b_colour);
}
}