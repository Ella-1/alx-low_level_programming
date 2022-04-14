#include "main.h"

/**
 * print line - function thst draws a stright line.
 * @n: inpute value to check
 * Return: nothing.
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if(n > 0)
		{
			_putchar(95);
			i += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
