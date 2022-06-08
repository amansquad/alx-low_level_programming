#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: a number
 * @x: a number
 * Return: x
 */
int print_last_digit(int n)
{
int x;
if (x < 0)
x = -n;
x = n % 10;
return (x);
}
