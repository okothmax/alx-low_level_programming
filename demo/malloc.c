#include <stdlib.h>
#include <stdio.h>

int main()
{
	int index;
	int s;

	printf("Enter the number of integers to store: ");
	scanf("%d", &s);

	int *m = (int *)malloc(s * sizeof(int));

	m[0] = 9;
	m[1] = 23;
	m[2] = 10;
	m[3] = 4;
	m[4] = 9;
	m[5] = 34;

	for (index = 0; index <= s; index++)
		printf("%d\n ", m[index]);

	printf("elemnt 1:%d", *m);

	free(m);

	return (0);
}
