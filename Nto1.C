#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 scanf("%d",&i);
 while(i>=1)
 {
  if(i%2==1)
  {
   printf("%d ",i);
  }
  i--;
 }
 getch();
}