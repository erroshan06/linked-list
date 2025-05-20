#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void LastNode(struct node *start){
 struct node *ptr;
 ptr= start;
 if ( start == NULL ){
    printf("NO Node is present");
 }
 while(ptr -> next !=NULL){
     ptr = ptr -> next;

 }
 printf("data in last node is %d",ptr ->data);
}
int main(){
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;
    start= (struct node*)malloc (sizeof (struct node ));
    second=(struct node*)malloc (sizeof (struct node ));
    third=(struct node*)malloc (sizeof (struct node ));
    fourth=(struct node*)malloc (sizeof (struct node ));
    start -> data = 100;
    start -> next = second;
    second -> data = 150;
    second -> next = third;
    
    third -> data = 104;
    third -> next = fourth;
     
    fourth -> data = 1021;
    fourth-> next = NULL;
    LastNode(start);
    return 0;
}