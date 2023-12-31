#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name that it will print
 * @f: pointer to the function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
