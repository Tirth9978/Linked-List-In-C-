#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data ;
     struct Node * next;
};


void Traversal(struct Node * ptr){
     while(ptr != NULL){
          printf("%d ",ptr->data);

          ptr = ptr->next;

     }
     return ;
}

int main(){
     struct Node * head = (struct Node*) malloc(sizeof(struct Node));
     struct Node * Second = (struct Node*) malloc(sizeof(struct Node));
     struct Node * Third = (struct Node*) malloc(sizeof(struct Node));

     // For First Node
     head->data = 1;
     head->next = Second;

     // For Second Node 
     Second->data = 2;
     Second->next = Third;

     // For Last Node
     Third->data = 3;
     Third->next = NULL;//Last element symbol
     


     // To Travers in a Linked List 
     Traversal(head);
     return 0;
}