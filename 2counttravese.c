#include<stdio.h>
#include<stdlib.h>
struct node {
    int  data;
    struct node  *next;
};
void CountTravesal(struct node *start){
   
    struct node *ptr;
     ptr = start;
     int count=0;
     if (start == NULL){
        return;
     }
    while (ptr != NULL){
            count ++;
           ptr =  ptr -> next;
        }
        printf(" Count of traverse :%d",count);
}
int main(){
    struct node  *start;
    struct node  *second;
    struct node  *third;
    struct node   *fourth;
    start = (struct node*)malloc (sizeof(struct node));
    second = (struct node*)malloc (sizeof(struct node));
    third = (struct node*)malloc (sizeof(struct node));
    fourth = (struct node*)malloc (sizeof(struct node));
     start -> data = 10;
     start -> next = second;
     second -> data = 10;
     second -> next = third;
     
     third -> data = 10;
     third -> next = fourth;
      
     fourth -> data = 10;
     fourth-> next = NULL;
     CountTravesal(start);

return 0;
}