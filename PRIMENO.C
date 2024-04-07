#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,num,count=0;
 clrscr();
 printf("Enter the Number:");
 scanf("%d",&n);
 printf("Prime numbers are: \n");
 for(num=1;num<=n;num++)
 {
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
      count++;
    break;
  }
  if(count==0 && num!=1)
    printf("%d ",num);
 }
 getch();
}