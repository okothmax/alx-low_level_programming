#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int add(int num, ...)
{
    va_list(ap);
    int sum = 0;
    int index = 0;
    va_start(ap, num);

    for (index = 1; index <= num; index++)
        sum += va_arg(ap, int);

    va_end(ap);
    printf("The sum of the values is: %d", sum);

    return 0;
}

int main()
{
    int num;

    printf("enter the number of integers that you wish to add: \n");
    scanf("%d", &num);

    int *m = (int *)malloc(num * sizeof(int));
    int i = 0;

    for (i = 0; i < num; i++)
    {
        printf("Enter the value at index %d: \n", i);
        scanf("%d", m + i);
    }

    for (i = 0; i < num; i++)
    {
        printf("The element at position %d is: %d\n", i, *(m + i));
    }

    // add(num, *m);

    free(m);

    return 0;
}
