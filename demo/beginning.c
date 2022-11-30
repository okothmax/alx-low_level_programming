#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} Node;

int begin_node(Node *head, int d)
{
    Node *new = NULL;
    new = malloc(sizeof(Node));

    new->data = d;
    new->link = NULL;

    new->link = head;
    head = new;

    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->link;
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

    begin_node(head, 33);
    free(head);
    free(current);

    return 0;
}