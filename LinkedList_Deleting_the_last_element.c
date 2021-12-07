#include <stdio.h>
#include<stdlib.h>

int main()
{
    struct Node
    {
        int data;
        struct Node *next;
        
    };
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->next=third;
    second->data=20;
    third->data = 30;
    third->next = forth;
    forth->next = NULL;
    forth->data = 40;
    struct Node *p = head->next;
    struct Node *ptr =head;
    while(p->next != NULL){
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = NULL;
    free(p);
    while(head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    
    return 0;
}
