#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: variable
 * Return: Always 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
