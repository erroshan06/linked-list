#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
 void AlternateData( struct node *start){
    struct node *ptr;
    ptr  = start;
     if (start == NULL){
        printf(" LL is empty");
     return;
    }
      while(ptr != NULL && ptr -> next !=NULL){
         printf(" %d ", ptr -> data);
     ptr = ptr -> next -> next;
        
        }
 if (ptr ==NULL)
 return ;
 if ( ptr -> next == NULL){
    printf(" %d ", ptr -> data);
 }
 }
int main(){
    struct node *start;
    struct node *second;
    struct node *third;

    start=  (struct node*)malloc(sizeof(struct node ));
    second =  (struct node*)malloc(sizeof(struct node ));
    third =  (struct node*)malloc(sizeof(struct node) );

    start ->data = 10 ;
    start -> next= second;

    second -> data = 20;
    second -> next= third ;

    third -> data= 30;
    third -> next= NULL;

 
    AlternateData(start);
    return 0;
}

