#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp;
 clrscr();
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("\nEnter the second number:");
 scanf("%d",&b);
 temp=a;
 a = b;
 b=temp;
 printf("Numbers after swapping:\n");
 printf("a = %d\n",a);
 printf("b = %d\n",b);
 getch();
}