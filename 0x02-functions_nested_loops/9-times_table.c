#include "main.h"
/**
 * times_table -> prints the 24 hour time
 *
 * Return: i and j
 */
void times_table(void)
{
int i, j, x;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
x = i * j;
_putchar(x);
if (j == 9)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
}
}
}

}
