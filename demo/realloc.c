#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m=5;
	

	int *p=(int *)malloc(m*sizeof(int));

	printf("elements are:%d\n", *(p+1));
}
