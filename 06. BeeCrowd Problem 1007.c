/*
Problem- https://www.beecrowd.com.br/judge/en/problems/view/1007
*/
#include <stdio.h>
int main()
{
int A, B, C, D;
int difference;
scanf("%d %d %d %d", &A, &B, &C, &D);
difference = (A * B) - (C * D);
printf("DIFERENCA = %d\n", difference);
return 0;
}
