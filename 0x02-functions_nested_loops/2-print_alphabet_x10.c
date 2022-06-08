#include "main.h"
/**
 * print_alphabet -> prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i,j;
for (j = 0 ; j < 10 ; j++)
{
for (i = 'a' ; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
