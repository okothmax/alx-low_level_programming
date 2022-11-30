#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} Node;

int printing_nodes(Node *head)
{
    if (head == NULL)
    {
        printf("The linked-list is empty\n");
    }

    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));
    head->data = 10;
    head->link = NULL;

    Node *current = NULL;
    current = (Node *)malloc(sizeof(Node));
    current->data = 20;
    current->link = NULL;
    head->link = current;

    Node *current1 = NULL;
    current1 = (Node *)malloc(sizeof(Node));
    current1->data = 30;
    current1->link = NULL;
    current->link = current1;

    printing_nodes(head);

    free(head);
    free(current);

    return 0;
}