#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)/*prints the alphabet in lowercase, followed by a new line.*/
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}

char CH = 'a';
while (CH <= 'f')
{
putchar(CH);
CH++;
}

putchar('\n');
return (0);
}
