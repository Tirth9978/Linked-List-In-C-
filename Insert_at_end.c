#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;
     struct Node * next;
};

void Insert_end(struct Node * ptr,int value){
     while(ptr->next != NULL){
          ptr = ptr->next;
     }
     
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp->data = value;
     ptr->next = temp;
     temp->next = NULL;
     return ;
}

void Print_LinkList(struct Node * ptr){
     while(ptr != NULL){
          printf("%d ",ptr->data);
          ptr = ptr->next;
     }
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

     Insert_end(head,7);
     Print_LinkList(head);

     return 0;
}