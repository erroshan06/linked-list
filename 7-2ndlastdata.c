#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;

};
void SecondlastData(struct node *start){
    struct node *ptr;
    ptr = start;
    if (start == NULL || start -> next == NULL){
        printf("NO Node is present");
    }
     while (ptr ->next -> next != NULL){
        ptr = ptr -> next ;
      
     }
     printf("%d is present at second last node ", ptr -> data);
}
int main(){
    struct node *start;
    struct node *second;
    struct node *third;
     struct node *fourth;
 
     start = (struct node *)malloc (sizeof (struct node));
     second=(struct node *)malloc (sizeof (struct node));
     third = (struct node *)malloc (sizeof (struct node));
     fourth =  (struct node *)malloc (sizeof (struct node));
    
     start -> data = 10 ;
     start -> next = second;

     second -> data = 20 ;
     second -> next =third; 

     third -> data = 40 ;
     third  -> next = fourth;

     fourth -> data = 49 ;
     fourth -> next = NULL;
     SecondlastData(start);
     return 0;

    }