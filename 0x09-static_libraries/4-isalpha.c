#include "main.h"
/**
 * _isalpha -> checks the alphabets in lowercase
 * @c: a character parameter
 * Return: 1 or 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
