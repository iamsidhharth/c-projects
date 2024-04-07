#include<stdio.h>
#include<conio.h>
void main()
{
 int height,base;
 float area;
 clrscr();
 printf("Enter the height:");
 scanf("%d",&height);
 printf("\nEnter the base:");
 scanf("%d",&base);
 area = (base * height) / 2;
 printf("\nArea of triangle = %.2f",area);
 getch();
}















































