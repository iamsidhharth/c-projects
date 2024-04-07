#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 clrscr();
 printf("Enter the number 1:");
 scanf("%d",&num1);
 printf("\nEnter the number 2:");
 scanf("%d",&num2);
 if(num1<num2)
 {
   printf("Minimum number is: %d",num1);
 }
 else
 {
   printf("Minimum number is %d",num2);
 }
 getch();
}