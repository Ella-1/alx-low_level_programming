#include "main.c"

/**
 * print_numbers - prints numbers from(0 through 9)
 * @c: inpute to value check.
 * Return: int.
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
