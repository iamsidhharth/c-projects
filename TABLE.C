#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
 printf("%d %d = %d\n",i,n,i*n);
 getch();
 }
}