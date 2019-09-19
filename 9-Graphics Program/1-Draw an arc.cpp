//Program to draw an arc
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  arc(200,200,0,150,50); 
//first two is for the center of the arc and next two points are the starting and ending angle and the last one is for radius
   getch();
}

