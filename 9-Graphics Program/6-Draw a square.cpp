//program to draw a square
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   rectangle(20,30,390,390);
//20,30 is for starting and ending angle and 390 and 390 is for length and breadth
   getch();
}

