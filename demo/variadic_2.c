#include <stdarg.h>
#include <stdio.h>

int add(int n, ...)
{
    va_list(ap); // ap can be replaced with any name
    va_start(ap, n);

    int index = 0;
    int sum = 0;
    for (index = 0; index < n; index++)
        sum += va_arg(ap, int); // int represents the data type

    va_end(ap);

    printf("%d", sum);

    return 0;
}

int main()
{
    add(4, 4, 2, 5, 2)
}
