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

	for (c = 'a'; c <= 'z'; ++c);
{
	if ( c != 'q' && c != 'e')
	putchar(c);
}
	putchar('\n');
	return (0);
}
