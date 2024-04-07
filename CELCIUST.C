#include<stdio.h>
#include<conio.h>
void main()
{
 int F,C;
 clrscr();
 printf("Enter the tempreture in celcius:");
 scanf("%d",&C);
 F = (C * 1.8) + 32;
 printf("Tempreture in Fehrenite is: %d",F);
 getch();
}