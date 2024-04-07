#include<stdio.h>
#include<conio.h>
void main()
{
 float bs,hra,da,ta,gs;
 clrscr();
 printf("Enter the basic salary:");
 scanf("%f",&bs);
 printf("Enter the percentage rate of house rent allowance: ");
 scanf("%f",&hra);
 printf("Enter the percentage of dearness allowance: ");
 scanf("%f",&da);
 printf("Enter the percentage of travel allowance: ");
 scanf("%f",&ta);
 gs = bs + (bs * hra /100) + ( bs * da /100) + (bs * ta /100 );
 printf("gross salary: %0.2f\n",gs);
 getch();
}