#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
     struct  node *next;
     
};
 int  detectloop( struct node *head){
    struct node   *ptr, *slow , *fast;
    ptr = head;
    slow = head;
    fast = head;
     if ( ptr == NULL || ptr -> next == NULL){
     return 0;
      }
      while ( fast != NULL && fast -> next != NULL){
         slow =  slow -> next ;
         fast = fast -> next -> next ;
         if (slow == fast ){
           
         return 1;
      }}
      return 0 ;

   }
int main(){
    struct node *head, * second, * third , *fourth;
    head =  malloc (sizeof (struct node));
    second = malloc (sizeof (struct node));
    third = malloc (sizeof (struct node));
    fourth = malloc (sizeof (struct node));
     
     head -> data = 10 ;
     head -> next = second;
     second -> data = 20 ;
     second -> next = third ;

     third -> data = 40;
     third -> next = fourth; 
     fourth -> data = 40;
     fourth -> next = third;
      if (detectloop(head)){
   printf("Loops existed here in linked list");

      }
      else{
        printf("NO loop detect ");
      }
    
    return 0;
}