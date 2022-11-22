#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no;
	int *m = (int *)malloc(no * sizeof(int));

	if (m == NULL)
	{
		printf("Memory full\n");
		exit(1);
	}

	printf("Enter the number of integers to store: \n3");
	scanf("%i", &no);

	int index = 0;

	for (index = 0; index < no; index++)
	{
		printf("Enter the number at index %d : \n", index);
		scanf("%d", m + index);
	}

	for (index = 0; index < no; index++)
		printf(" The element at position %d is : %d\n", index, *(m + index));

	int new_store;
	printf("Enter the number of integers to stpore under the new storage: \n");
	scanf("%d", &new_store);

	int *new = (int *)realloc(*m, sizeof(int) * 25);
	if (new == NULL)
	{
		printf("Memory full\n");
		exit(1);
	}

	int index_2 = no;
	for (index_2 = no; index_2 < new_store; index_2++)
	{
		printf("Enter the element at index %d: ", index_2);
		scanf("%d", m + index_2);
	}

	for (index_2 = 0; index_2 < new_store; index_2++)
		printf(" The element at position %d is : %d\n", index_2, *(m + index_2));

	return 0;
}
