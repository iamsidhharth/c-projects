#include<stdio.h>
#include<conio.h>
void main()
{
  int num1 = 12,num2 = 6,sum,sub,multi,div,mod;
  clrscr();
  sum = num1 + num2;
  printf("Addition\t: %d\n",sum);
  sub = num1 - num2;
  printf("Substraction\t: %d\n",sub);
  multi = num1 * num2;
  printf("Multiplication\t: %d\n",multi);
  div = num1 /num2;
  printf("Division\t: %d\n",div);
  mod = num1 % num2;
  printf("Modulus\t        : %d\n",mod);
  getch();
}