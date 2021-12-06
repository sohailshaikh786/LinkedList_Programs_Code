#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third ;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = NULL;

    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    int position ;
    int n;
    printf("Enter Element :");
    scanf("%d",&n);
    printf("Enter position where you want to store element :");
    scanf("%d",&position);
    struct Node *p = head;
    int i = 1;

    while (i != position-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = n;
    ptr->next = p->next;
    p->next = ptr;

    while (head != NULL)
    {
        printf("%d ",head->data);
       head = head->next;
    }

    return 0;
}
