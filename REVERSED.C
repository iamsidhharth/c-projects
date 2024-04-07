#include<stdio.h>
#include<conio.h>
void main()
{
 int num,r;
 clrscr();
 printf("Enter the number: ");
 scanf("%d",&num);
 while(num>0)
 {
  r = num % 10;
  num = num / 10;
  printf("%d",r);
 }
 getch();
}