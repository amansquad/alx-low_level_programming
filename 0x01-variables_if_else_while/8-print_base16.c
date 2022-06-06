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
char _ch = 'a';
while (_ch < 'g')
{
putchar(_ch);
_ch++;
}
putchar('\n');
return (0);
}
