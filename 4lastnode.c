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

    start= (struct node*)malloc (sizeof (struct node ));
    
    start -> data = 100;
    start -> next = NULL;
    
    LastNode(start);
    return 0;
}