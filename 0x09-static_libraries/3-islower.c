#include "main.h"
/**
 * _islower - checks whether a character is of lower case
 * @ch: the character to be checked
 * Return: 1 if lower, 0 if upper
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
