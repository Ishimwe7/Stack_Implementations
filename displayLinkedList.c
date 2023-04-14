#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *link;
};

struct node *head;

void display(){
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack is currently having elements below:\n\n");
        while(ptr!=NULL){
            printf("%d\t", ptr->data);
            ptr=ptr->link;
        }
        printf("\n\n");
    }
}
