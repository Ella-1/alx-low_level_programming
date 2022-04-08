#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
{
	putchar('0' + -c);
}
	putchar('\n');
	return (0);
}
