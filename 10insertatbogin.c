#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data ;
    struct node* next;

 };
 void insertatbegin(struct node *start,int key){
    struct node *temp;
    temp = malloc(sizeof(struct node));
      if(  temp !=NULL){
        temp-> data= key;
        temp ->next = start;
        start = temp;
       temp= start;
      }

    struct node *ptr;
    ptr = start;
     while (ptr !=NULL){
     printf("%d ", ptr -> data);
      ptr = ptr -> next;
     }
   return; 
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
    insertatbegin(start,126);
    return 0;
 }