#include <stdio.h>
int main(void)/*prints the alphabet in lowercase, followed by a new line.*/
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
printf("\n");
return (0);
}
