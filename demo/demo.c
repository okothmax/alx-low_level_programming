#include <stdio.h>

#define GRADE_2 2
#define GRADE_1 1
#define BONUS 10

int main()
{
    int grade;

    printf("Enter the grade:");
    scanf("%d", grade);
    printf("%d\n", BONUS);
    // if (grade == GRADE_1)
    // printf("Your bonus is: %d\n", BONUS);

    // else if (grade == GRADE_2)
#undef BONUS
#define BONUS 20
    // printf("Your bonus is :%d\n", BONUS);
    printf("%d\n", BONUS);
    return 0;
}
