#include<stdio.h>
#include<conio.h>
#define pi 3.142
#define P printf
#define S scanf
void main()
{
 int radius;
 float c;
 clrscr();
 P("Enter the radius:");
 S("%d",&radius);
 c = 2 * pi * radius;
 P("\nPerimeter is: %0.2f",c);
 getch();
}