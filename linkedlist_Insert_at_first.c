#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct Node
    {
        int data ;
        struct Node *next;
    };
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
 //  Giving memory allocation in dinamic memory 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3 ;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    //Now we want to insert Element at the first
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = 50 ;
    ptr->next = head;
    //Now printing element of Linkedlist
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
    return 0;

}
