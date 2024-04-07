#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z;
 clrscr();
 printf("Enter the first angle:");
 scanf("%d",&x);
 printf("\nEnter the second angle:");
 scanf("%d",&y);
 z = 180 - (x+y);
 printf("\nThe third angle is: %d",z);
 getch();
}