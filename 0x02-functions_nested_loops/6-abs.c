#include "main.h"
/**
 * _abs(int) -> checks the absolute value of numbers
 * @n: a number
 * Return: n, 0 or -n
 */
int _abs(int n)
{
if (n > 0)
return (n);

else if (n < 0)
{
n *= -1;
return (n);
}

else
return (0);

}
