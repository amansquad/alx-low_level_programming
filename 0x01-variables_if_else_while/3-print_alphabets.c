#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)/*prints the alphabet in lowercase, followed by a new line.*/
{
char ch = 'a', cha = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}

while (cha <= 'Z')
{
putchar(cha);
cha++;
}
printf("\n");
return (0);
}
