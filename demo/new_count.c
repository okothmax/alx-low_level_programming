#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void count_nodes(Node *head)
{
    Node *dummy = NULL;
    dummy = (Node *)malloc(sizeof(Node));

    dummy = head;

    int count = 0;

    while (dummy != NULL)
    {
        count++;
        dummy = dummy->next;
    }

    printf("The number of nodes is: %d\n", count);
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

    int number = 0;

    while (head != NULL)
    {
        number++;
        head = head->next;
    }

    printf("The number of nodes is: %d\n", number);

    count_nodes(head);

    free(head);
    free(second);
    free(tail);

    return 0;
}