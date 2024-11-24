#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;
     struct Node * next;
};

struct Node * Insert_first(struct Node* head,int value){
     struct Node * temp = (struct Node*) malloc(sizeof(struct Node));

     temp->data = value;
     temp->next = head;
     head = temp;
     return head;
}

void Print_LinkedList(struct Node * ptr){
     while(ptr != NULL){
          printf("%d ",ptr->data);
          ptr = ptr->next;
     }
     printf("\n");
     return ;
}

int main(){
     struct Node* head=(struct Node*) malloc(sizeof(struct Node));
     struct Node* first=(struct Node*) malloc(sizeof(struct Node));
     struct Node* second=(struct Node*) malloc(sizeof(struct Node));
     struct Node* third=(struct Node*) malloc(sizeof(struct Node));
     struct Node* fourth=(struct Node*) malloc(sizeof(struct Node));

     head->data = 1;
     head->next = first;

     first->data = 2;
     first->next = second;

     second->data = 3;
     second->next = third;

     third->data = 4;
     third->next = fourth;

     fourth->data = 5;
     fourth->next = NULL;

     printf("Before Operation : \n");
     Print_LinkedList(head);
     
     head = Insert_first(head,8);
     printf("After Operation  : \n");
     Print_LinkedList(head);

     return 0;
}