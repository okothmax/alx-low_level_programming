#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} Node;

int end_node(Node *current1, int d)
{
    Node *tail = NULL;
    tail = malloc(sizeof(Node));

    tail->data = d;
    tail->link = NULL;

    current1->link = tail;
    tail = current1;
}

void count(Node *head)
{
    Node *ptr = NULL;
    ptr = malloc(sizeof(Node));

    ptr = head;
    int count = 0;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("The number of nodes is: %d\n", count);
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

    end_node(current1, 100);

    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->link;
    }

    count(head);

    free(head);
    free(current);

    return 0;
}