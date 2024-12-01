#include<stdio.h>
#include<stdlib.h>
struct Node{
     int data ;
     struct Node* next;
};

void Print_LinkedList(struct Node * head){
     while(head != NULL){
          printf("%d ",head->data);
          head = head->next;
     }
     return ;
}


int main(){
     int n;
     printf("Enter the size of a Linked List : ");
     scanf("%d",&n);
     int num;
     printf("Enter the number : ");
     scanf("%d",&num);

     struct Node * head = (struct Node*) malloc(sizeof(struct Node));
     head->data = num;
     struct Node * temp = head;

     for (int i=0;i<n-1;i++){
          struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
          printf("Enter the number : ");
          scanf("%d",&num);

          ptr->data = num;
          temp->next = ptr;
          temp = ptr;
     }
     temp->next = NULL;
     Print_LinkedList(head);

     return 0;
}