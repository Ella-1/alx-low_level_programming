#include <stdio.h>
/**
 * main - prints alphabet in lowercase followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	print_alphabet();
	for (i = 0; i <= 26; i++)
{
	putchar('a' + i);
}
	putchar('\n');
	return (0);
}
