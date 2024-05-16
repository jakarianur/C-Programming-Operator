/*
A computer manufacturing company has the following monthly
compensation policy to the sales-person:
Minimum base salary: 1500.00
Bonus for every computer sold: 200.00
Commission on the total monthly sales: 2%
Write a program to calculate the gross salary for a sales-person. You will
take input the price of each computer and the number of sold during the month.
  */
#include <stdio.h>
int main() {
float salary, bonus, commission, price, sold, total_sarary;
salary=1500.00;
printf("Enter Each Computer Price: ");
scanf("%f", &price);
printf("Enter Total Computer Sold: ");
scanf(“%f”, &sold);
bonus = price*200;
commission = price*sold*.2;
total_sarary = salary+ bonus+commission;
printf("Total Salary = %f\n",total_sarary);
return 0;
}
