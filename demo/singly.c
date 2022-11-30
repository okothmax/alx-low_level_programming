#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *link;
} singly;

int main(void)
{
    singly *head = NULL;
    head = (singly *)malloc(sizeof(singly));

    if (head == NULL)
    {
        printf("No memory to allocate\n");
    }

    else
    {
        head->data = 45;
        head->link = NULL;

        singly *current = NULL;
        current = (singly *)malloc(sizeof(singly));

        current->data = 50;
        current->link = NULL;
        head->link = current;

        current->data = 55;
        current->link = NULL;
        head->link->link = current;

        printf("%d\n", head->data);
        printf("%d", current->data);

        free(current);
        free(head);
    }

    return 0;
}