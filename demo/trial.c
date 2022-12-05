#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} max;

int main(void)
{
    max *head = NULL;
    head = (max *)malloc(sizeof(max));

    head->data = 11;
    head->link = NULL;

    max *two = NULL;
    two = (max *)malloc(sizeof(max));

    two->data = 22;
    two->link = NULL;
    head->link = two;

    two->data = 33;
    two->link = NULL;
    q
        head->link->link = two;

    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->link;
    }
    return 0;
}