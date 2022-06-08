#include "main.h"
/**
 *print_to_98 -> prints the 24 hour time
 *@n: a number
 * Return: i and j
 */
void print_to_98(int n)
{
while ( n <= 98)
{
_putchar(n);
_putchar(',');
n++;
}
_putchar('\n');
}
