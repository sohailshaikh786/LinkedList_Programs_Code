#include <stdio.h>
#include <stdlib.h>

int main() {
      //creating Node
    struct Node
    {
        int data;
        struct Node *next;
    };
  
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
    // create new pointer p which is at the head
    struct Node *p = head;
    head = head->next;
    free(p);
    //Now printing element of linkedList with the help of while loop
    while(head != NULL)
    {
        printf(" %d" ,head->data);
        head = head->next;
    }    
    //end of program 
    return 0;
}
