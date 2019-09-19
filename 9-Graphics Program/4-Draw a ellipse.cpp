//program to draw an ellipse
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   ellipse(60,90,0,360,45,30);
 /* here 60 and 90 stands for center of ellipse
0 and 360 stands for st angle and ending angle
And 45 and 30 is radius along x and y axis resp
*/
   getch();
}

