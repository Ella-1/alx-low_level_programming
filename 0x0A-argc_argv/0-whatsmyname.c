#include <stdio.h>

/**
 * main - writes its name
 * @argc: arguement count
 * @argv: array of pointers to argument strings
 * Return: 0
 **/
int main(int agrc, char *argv[])
{
	agrc = argc;
	printf("%ss\n", *argv);
	return (0);
}
