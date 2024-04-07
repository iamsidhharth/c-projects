#include<stdio.h>
#include<conio.h>
void main()
{
 int n,f1=1,f2,f0=0,sum=0,i;
 clrscr();
 printf("Enter the value of n: \n");
 scanf("%d",&n);
 printf("Febonacci series up to %d terms: \n",n);
 for(i=1;i<=n;i++)
 {
  f2=f0+f1;
  sum=sum+f2;
  f0=f1;
  f1=f2;
 }
 printf("\nSum is = %d\n",sum);
 getch();
}