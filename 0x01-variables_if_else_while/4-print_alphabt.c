#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase excluding q and e
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
{
	if (c != 'e' && c != 'q')
	putchar(c);
}
	putchar('\n');

	return (0);
}
