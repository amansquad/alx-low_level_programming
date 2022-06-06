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
if (ch != 'e' && ch != 'q')
putchar(ch);
ch++;
}
printf("\n");
return (0);
}
