//program to draw the line
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{    int gd= DETECT ,gm;
     initgraph(&gd,&gm,"C:\\TC\\BGI");
     line(10,10,110,110);
/*here(10,10)=(initial point of the line along x-axis and y- axis) and (110,110)=(Final point of the line along x-axis and y- axis)*/
     getch();
}

