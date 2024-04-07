#include<conio.h>
#include<stdio.h>
void main()
{

 int sum = 0,n,i,number;
 clrscr();
 printf("Enter the value of n:");
 scanf("%d",&n);
/* for(i = 1;i<=n;i++)
 {
  sum+=i;
 }
 printf("Sum of %d natural Numbers: %d\n",n,sum);
 getch(); */
 printf("Enter %d numbers:\n",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&number);
 sum += number;
 }
 printf("Sum of %d numbers is: %d\n",n,sum);
 getch();
}

