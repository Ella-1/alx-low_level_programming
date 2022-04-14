#include "main.h"

/**
 * main - check code.
 *
 * Return; Always 0.
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'z')
	{ 
		return (1);
	}
	else
		return (0);
}
