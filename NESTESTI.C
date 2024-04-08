#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter 1st number: ");
  scanf("%d",&a);
  printf("Enter 2nd number: ");
  scanf("%d",&b);
  printf("Enter 3rd number: ");
  scanf("%d",&c);
  if(a>=b)
  {
   if(a>=c)
   {
      printf("\n%d is largest number",a);
   }
   else
   {
      printf("\n%d is largest number",c);
   }
  }
  else
  {
   if(b>=c)
   {
    printf("\n%d is largest number",b);
    }
    else
    {
     printf("\n%d is largest number",c);
    }
  }
  getch();
}