#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all single digit numbers from 1 to 10
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; ++c)
{
	putchar('0' + c);
}
	putchar('\n');
	return (0);
}

