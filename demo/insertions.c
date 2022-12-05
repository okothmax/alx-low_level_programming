#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} Node;

void add_node_beginning(Node *head, int Data);

int main(void)
{

    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));

    if (head == NULL)
    {
        printf("No memory to allocate\n");
    }

    else
    {
        head->data = 20;
        head->link = NULL;

        Node *current = NULL;
        current = (Node *)malloc(sizeof(Node));

        if (current == NULL)
        {
            printf("No more memory to allocate more nodes\n");

            return -1;
        }

        else
        {
            current->data = 25;
            current->link = NULL;
            head->link = current;
        }
        Node *current1 = NULL;
        current1 = (Node *)malloc(sizeof(Node));
        if (current1 == NULL)
        {
            printf("No more memory to allocate more nodes\n");

            return -1;
        }

        else
        {
            current1->data = 30;
            current1->link = NULL;
            head->link->link = current1;
        }

        printf("the first node is: %d\n", head->data);
        printf("the second node is: %d\n", current->data);
        printf("the third node is: %d\n", current1->data);

        printf("the first link is: %d\n", head->link);
        printf("the second node is: %d\n", current->link);
        printf("the second node is: %d\n", head->link->link);

        add_node_beginning(head, 19);

        free(head);
        free(current);
    }

    return 0;
}

void add_node_beginning(Node *head, int Data)
{
    Node *first = NULL;
    first = (Node *)malloc(sizeof(Node));

    if (first == NULL)
    {
        printf("This is no memory to allocate\n");
    }

    else
    {
        first->data = Data;
        first->link = NULL;
    }
    first->link = head;
    head = first;

    while (first != NULL)
    {
        printf("%d\n", first->data);
        first = first->link;
    }
}