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
char _098 = 'a';
while (_098 < 'g')
{
putchar(_098);
_098++;
}
putchar('\n');
return (0);
}
