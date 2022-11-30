#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void print_nodes(Node *head)
{
    Node *dummy = NULL;
    dummy = malloc(sizeof(Node));

    dummy = head;

    while (dummy != NULL)
    {
        printf("The value of the node is: %d\n", dummy->data);
        dummy = dummy->next;
    }
}

int main()
{

    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->next = NULL;

    Node *second = NULL;
    second = (Node *)malloc(sizeof(Node));

    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node *tail = NULL;
    tail = (Node *)malloc(sizeof(Node));

    tail->data = 30;
    tail->next = NULL;
    second->next = tail;

    print_nodes(head);

    free(head);
    free(second);
    free(tail);

    return 0;
}