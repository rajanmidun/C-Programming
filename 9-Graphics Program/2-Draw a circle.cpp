//program to draw a circle
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    circle(45,180,89);
// here first two value specifies the center of the circle and last value specifies the radius of the circle
    getch();
}

