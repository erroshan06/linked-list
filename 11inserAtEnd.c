#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data ;
    struct node* next;

 };
 void insertatend(struct node *start,int key){
    struct node *temp,*ptr ;
    temp = malloc(sizeof(struct node));
   
    ptr = start;
      if(  temp !=NULL){
      temp -> data = key;
      temp -> next =NULL;
      }
        
if (start -> next == NULL){
start = temp;
 return ;
}
ptr =start;
 while (ptr !=NULL)
  
      ptr = ptr -> next;
    
     
   ptr -> next = temp;
 printf(" is %d ", ptr-> data); 
 }
 
 int main(){

    struct node *start ;
    struct node *second;
    struct node *third;
    start= malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third= malloc(sizeof(struct node));
    start-> data = 10;
    start -> next = second;
    second ->data= 20;
    second -> next = third;
    third -> data = 30 ;
    third -> next = NULL;
    insertatend(start,126);
    return 0;
 }