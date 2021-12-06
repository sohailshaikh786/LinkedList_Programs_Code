#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    struct Node
    {
        int data;
        struct Node *next;
    };
    //creating Node
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    //allocation memory in dinamic memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    //Linking Node with the help of next pointer and giving //data to node
    head->data = 10; //data for head(data = 10)
    head->next = second; //pointer to next node(next = second)
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = forth;
    
    forth->data = 40;
    forth->next = NULL;
    //Now printing element of linkedList
    struct Node *p = head;
    struct Node *q = head;
    int position;
    printf("Enter Index of Element :");
    scanf(" %d",&position);
    for(int i =1;i< position-1;i++)
    {
        p = p->next;
    }
    
    q = p->next;
    p->next =q->next;
    free(q);
    while(head != NULL)
    {
        printf(" %d" ,head->data);
        head = head->next;
    }    
    return 0;
}