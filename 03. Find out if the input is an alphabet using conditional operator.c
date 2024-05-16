#include <stdio.h>
int main()
{
char ch;
printf("Enter any character: ");
scanf("%c", &ch);
(ch>='a' && ch<='z') || (ch>='A' && ch<='Z')
? printf("It is ALPHABET")
: printf("It is NOT ALPHABET");
return 0;
}
