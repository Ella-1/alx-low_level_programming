#include <stdio.h>
/**
 * main - print all possible combination of two different digits,
 * in ascending order, seperated by a comma followed by space.
 *
 * Return: always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
{
	for (j = i + 1; j < 10; j++)
{
	putchar((i % 10) + '0');
	putchar((j % 10) + '0');

	if (i == 8 && j == 9)
	continue;

	putchar(',');
	putchar(' ');
}
}

	putchar('\n');

	return (0);
}

