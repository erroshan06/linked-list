#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
     struct node *next;
};
void SearchElement(struct node *start){
    struct node *ptr;
    ptr = start;
    int num , node = 1;
    printf("Enter a number to check whether is present or not: " );
     scanf("%d", &num);
   if ( start == NULL){
   printf ("NO Node is present");}
  while ( ptr != NULL &&  num  != ptr -> data ){
      ptr = ptr -> next;
       node ++;
    }
    if (ptr == NULL){
        printf("%d is not present ",num);
    }
    else{
   printf("%d is at present at %d node  ",num, node);
    }
}
int main(){
    struct node *start;
    struct node *second;
    struct node *third ;
    struct node *fourth;
start = (struct node*)malloc (sizeof (struct node));
second= (struct node*)malloc (sizeof (struct node));
third= (struct node*)malloc (sizeof (struct node));
fourth = (struct node*)malloc (sizeof (struct node));
start -> data = 10;
start -> next = second;

second ->data = 20;
second -> next = third; 

third ->data = 30;
third ->  next = fourth;

fourth -> data = 40;
fourth -> next = NULL;
SearchElement(start);

    return 0;
}