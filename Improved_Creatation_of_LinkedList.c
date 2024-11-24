#include<stdio.h>
#include<stdlib.h>

struct Node {
     int data;
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
     struct Node * temp = head;

     int n;
     printf("Enter the number of element : ");scanf("%d",&n);

     while(n--){
          int num;
          printf("Enter the number : ");scanf("%d",&num);

          temp->data = num;
          struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
          temp->next = ptr;

     }
     temp->next = NULL;
     Traversal(head);
     return 0;
}