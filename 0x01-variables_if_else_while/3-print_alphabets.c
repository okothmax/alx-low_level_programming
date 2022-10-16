#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Desription: prints the alphabet in lower and upper case
 * Return: 0
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	printf("\n");
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	printf("\n");
	return (0);
}
