#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct  node *next;
 };
 void MIDData ( struct node *start){
    int count = 0;
    struct node* ptr;
      ptr = start;
       while (ptr -> next != NULL ){
          ptr =ptr -> next; 
        count ++;
       }
        if (count == 0)
        return ; 
        int middle = count /2;
        ptr = start;
       for (int i= 1; i<= middle; i++){
        ptr= ptr -> next ;

       }
        printf("%d", ptr -> data);
 }
  int main(){
     struct node *start;
     struct node *second;
     struct node *third;
     struct node *fourth;
     struct node  *fifth ;

      start = malloc(sizeof(struct node));
      second =malloc(sizeof(struct node));
      third = malloc(sizeof(struct node));
      fourth = malloc(sizeof(struct node));
      fifth  = malloc(sizeof(struct node));

       start -> data = 20;
       start -> next = second;

        second -> data= 30;
        second -> next = third;
         
         third -> data = 456 ;
         third -> next = fourth;

          fourth -> data = 50 ;
           fourth -> next= fifth;

           fifth -> data = 25;
           fifth -> next = NULL;
            MIDData(start);

  return 0;
}