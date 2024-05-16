#include <stdio.h>
int main()
{
int num1,num2,num3,largest;
printf("Enter Three iInteger Number: ");
scanf("%d %d %d",&num1,&num2,&num3);
largest = (num1 > num2 && num1 > num3)? num1 : (num2 > num3)? num2 : num3;
printf(" The Largest number is : %d\n",largest);
return 0;
}
