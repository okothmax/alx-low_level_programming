#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	printf("\n");
	return (0);
}
