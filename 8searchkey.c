#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
     struct node *next;
};
void SearchElement(struct node *start, int key ){
    struct node *ptr;
    ptr = start;
if ( start == NULL ){
     printf("ll is empty");
    return ;
}
 int node = 1;
 while (ptr  != NULL){
    if (ptr -> data == key){
        printf( "\n %d is present at %d node ",key, node );
        return ;
    }
     node ++ ;
     ptr = ptr  -> next;
}

 
printf( " \n%d is not found ", key);
}
int  main() {
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
SearchElement(start ,10);
SearchElement(start ,20);
SearchElement(start ,30);
SearchElement(start ,14);
    return 0;
}