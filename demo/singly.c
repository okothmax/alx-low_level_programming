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

        if (current == NULL)
        {
            printf("There is no  meory to allocate\n");
        }

        else
        {
            current->data = 50;
            current->link = NULL;
            head->link = current;
        }
        current->data = 50;
        current->link = NULL;
        head->link->link = current;

        current->data = 55;
        current->link = NULL;
        head->link->link->link = current;

        while (head != NULL)
        {
            printf("%d\n", head->data);
            head = head->link;
        }
        free(current);
        free(head);
    }

    return 0;
}