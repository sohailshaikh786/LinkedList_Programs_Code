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
    struct Node *p =head;
    struct Node *ptr = (struct Node * )malloc(sizeof(struct Node));
    
    while(p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = 99;
    p->next =ptr;
    ptr->next  = NULL; 
    while(head != NULL)
    {
        printf("%d " , head->data);
        head = head->next;
    }
    
    return 0;
}