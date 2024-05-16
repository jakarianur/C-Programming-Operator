/*
https://www.beecrowd.com.br/judge/en/problems/view/1008
*/

#include <stdio.h>
int main()
{
int NUMBER,hours;
float amount,SALARY;
scanf("%d %d %f", &NUMBER, &hours, &amount);
SALARY = hours * amount;
printf("NUMBER = %d\n",NUMBER);
printf("SALARY = U$ %0.2f\n", SALARY);
return 0;
}
