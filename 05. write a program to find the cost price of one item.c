/*
If the total selling price of 15 items and the total profit earned on them is
input through the keyboard, write a program to find the cost price of one
item.
  */
#include <stdio.h>
int main ()
{
float a, b, price;
printf("Enter 15 item Price: ");
scanf("%f", &a);
printf("Enter 15 item Profit: ");
scanf("%f", &b);
price=(a-b)/15;
printf("Cost of Each Product Price = %.2f", price);
return 0;
}
