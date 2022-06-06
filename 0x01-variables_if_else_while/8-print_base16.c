#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)/*prints the alphabet in lowercase, followed by a new line.*/
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
char print = 'a';
while (print < 'g')
{
putchar(print);
print++;
}
putchar('\n');
return (0);
}
