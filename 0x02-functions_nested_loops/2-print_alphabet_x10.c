#include "main.h"
/**
 * main - prints alphabet, in lowercase followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
		
		_putchar('\n');
		return (0);
}

