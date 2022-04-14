#include "main.h"

/**
 * _isupper - function that check for uppercase character.
 *@c: inpute value check
 * Return; int
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
