#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)/*prints the alphabet in lowercase, followed by a new line.*/
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
char c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
printf("\n");
return (0);
}
