#include "main.h"
/**
 * main - prints alphabet, in lowercase followed by a new line
 *
 * Return: Always 0
 */
void  print_alphabet_x10(void)
{

	int i;
	int count;

	count = 0;
	while (count < 10) 
	{
	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
		count++;
		_putchar('\n');
	}



}

