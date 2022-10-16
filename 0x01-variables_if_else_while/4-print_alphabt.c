#include <stdio.h>
/**
 * main -entry point
 * description: prints out alphabet without q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);

	}
	printf("\n");
	return (0);
}
