#include <stdio.h>

/**
 * main - prints out the size of various data types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int a;
	int long int b;
	int long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
