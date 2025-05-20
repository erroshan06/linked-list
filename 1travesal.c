#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void traversal(struct node *start ){
    struct node *ptr;
    ptr =start;
    printf("Elements are :\n");
    while(ptr !=NULL){
        printf("%d \n", ptr -> data);
        ptr = ptr -> next;
    }

}
int main(){
    struct node *start;
    struct node *second;
    struct node *third;  
    start = malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof( struct node));
    third  = (struct node*)malloc(sizeof(struct  node));   
   start -> data= 10;  
    start -> next =second;

   second ->data=20;  
    second -> next = third ;   
    
    third->data=30;
  third -> next = NULL;
   traversal(start);
 
   return 0;
}

