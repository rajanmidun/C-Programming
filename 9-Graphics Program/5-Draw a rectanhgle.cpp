//program to draw a rectangle
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   rectangle(20,30,390,260);
//20,30 is for starting and ending angle and 390 and 260 is for length and breadth
   getch();
}

