#include<stdio.h>
#include<conio.h>
void main()
{
  int radius;
  float pi,area;
  clrscr();
  printf("Enter the radius of circle:");
  scanf("%f",&radius);
  area = pi * radius * radius;
  printf("Radius of circle is %d",area);
  getch();
}