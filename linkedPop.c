#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *link;
};

struct node *head;
void pop(){
    int item;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Stack is Empty\n\n");
    }
    else{
        item=head->data;
        ptr=head;
        head=head->link;
        printf("Node deleted\n");
        display();
        free(ptr);
    }
}
