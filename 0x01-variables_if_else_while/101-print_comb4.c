#include <stdio.h>
/**
 * main - prints all posible combination of three different digits
 * 	  in ascending order sepersted by a commer followed by space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
{
	for (j = i + 1; j < 9; j++)
{
	for (k = j + 1; j < 9; k++)
{

	putchar((i % 10) + '0');
	putchar((j % 10) + '0');
	putchar((k % 10) + '0');

	if (i == 7 && j == 8 && k == 9)
	continue;{

	putchar(',');
	putchar(' ');


}
}
}

	putchar('\n');

	return (0);
}

