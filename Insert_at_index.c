#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;
     struct Node * next;
};

void Insert_Index(struct Node * ptr,int index,int value){
     int i=0;

     while(i != index-1){
          ptr=ptr->next;
          i++;
     }

     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp->data = value;
     temp->next = ptr->next;
     ptr->next = temp;
     return ;
}

void Printf_LoinkedList(struct Node * head){
     while(head != NULL){
          printf("%d ",head->data);
          head = head->next;
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

     Insert_Index(head,1,12);
     Printf_LoinkedList(head);

     return 0;
}