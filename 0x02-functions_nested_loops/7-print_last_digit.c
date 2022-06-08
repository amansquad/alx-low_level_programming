#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: a number
 * Return: x
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;

x = n % 10;
_putchar(x + '0');

if (n == INT_MIN)
return ('88');
else
return (x);
}
