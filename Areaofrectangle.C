#include<stdio.h>
#include<conio.h>
void main()
{
  int length,breadth,area;
  clrscr();
  printf("Enter the length:");
  scanf("%d",&length);
  printf("\nEnter the breadth:");
  scanf("%d",&breadth);
  area = length * breadth;
  printf("\nArea of rectangle: %d",area);
  getch();
}