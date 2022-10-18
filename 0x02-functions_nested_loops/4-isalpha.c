#include "main.h"
/**
 * _isalpha - will check whether a character is an alphabet
 * @ch : is the character to be checked
 * Return: 1 if character , 0 otherwise
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
