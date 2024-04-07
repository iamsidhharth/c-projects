#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,num3,min;
 clrscr();
 printf("Enter first number:",num1);
 scanf("%d",&num1);
 printf("\nEnter second number:",num2);
 scanf("%d",&num2);
 printf("\nEnter third number:",num3);
 scanf("%d",&num3);
 min = (num1<num2) ?
		     (num1<num3 ? num1:num3):(num2<num3 ? num2:num3);
	    printf("\nSmallest number is: %d",min);
 getch();
}