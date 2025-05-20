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
      while(ptr != NULL && ptr -> next != NULL){
         printf(" %d ", ptr -> data);
     ptr = ptr -> next -> next;
        
        }
         if ( ptr == NULL)
         return ;
         if ( ptr -> next == NULL){
            printf("%d ", ptr -> data );
         }

 }
int main(){

    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *  start= malloc(sizeof(struct node ));
    second =  (struct node*)malloc(sizeof(struct node ));
    third =  (struct node*)malloc(sizeof(struct node) );
    fourth=  (struct node*)malloc(sizeof(struct node ));
    fifth =  (struct node*)malloc(sizeof(struct node ));
     sixth =  (struct node*)malloc(sizeof(struct node ));
    start ->data = 10 ;
    start -> next= second;

    second -> data = 20;
    second -> next= third ;

    third -> data= 30;
    third -> next= fourth;

    fourth ->data =40;
    fourth -> next= fifth;

    fifth->data = 50 ;
    fifth -> next = NULL ;

    // sixth -> data= 60;
    // sixth -> next = NULL;

    AlternateData(start);
    return 0;
}

