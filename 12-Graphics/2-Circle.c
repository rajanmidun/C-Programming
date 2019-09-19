#include<stdio.h>
int main()
{
int gd= DETECT, gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
circle(200,100,10);
getch();
closegraph();
return 0;
}
//Drawing
