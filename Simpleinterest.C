#include<stdio.h>
#include<conio.h>
void main()
{
 int p,t,r;
 float si;
 clrscr();
 printf("principle amount:");
 scanf("%d",&p);
 printf("\ntime:");
 scanf("%d",&t);
 printf("\nrate:");
 scanf("%d",&r);
 si = (p*t*r)/100;
 printf("SIMPLE INTEREST = %.2f",si);
 getch();

}