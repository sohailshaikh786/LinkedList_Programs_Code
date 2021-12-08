#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Node
    {
        int data ;
        struct Node *next ;
    };
    struct Node *head = (struct Node *)malloc(sizeof(struct Node)) ;
    struct Node *first = (struct Node *)malloc(sizeof(struct Node)) ;
    struct Node *second = (struct Node *)malloc(sizeof(struct Node)) ;
    struct Node *third = (struct Node *)malloc(sizeof(struct Node)) ;
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node)) ;
   
    head->next = first ;
    first->data = 10;
    first->next = second;
    second->data = 20 ;
    second->next = third ;
    third->data = 30 ;
    third->next = forth ;
    forth->data = 40 ;
    forth->next = head ;
    struct Node *p = head->next ;
    while( p!=head ){
        printf("%d ",p->data);
        p = p->next;
    }
    return 0;
}
