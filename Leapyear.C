#include<stdio.h>
#include<conio.h>
void main()
{
 int sy,ey;
 clrscr();
 printf("Enter the start year:");
 scanf("%d",&sy);
 printf("\nEnter the end year:");
 scanf("%d",&ey);
 if(sy>ey)
 {
 printf("start year cannot be greater then end year.\n");
 }
 while(sy<=ey)
 {
  if((sy%4 == 0 && sy%100 != 0) || (sy%4 == 0))
  {
   printf("%d\n",sy);
  }
  sy++;
 }
 getch();
}




