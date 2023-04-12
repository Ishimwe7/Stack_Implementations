#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *link;
};

struct node *head;

void push(){
    struct node *ptr;
    int value;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Unable to push. No enough memory\n");
    }
    else{
        printf("Enter a value you want to push..");
        scanf("%d", &value);
        if(head==NULL){
            ptr->data=value;
            ptr->link=NULL;
            head=ptr;
            printf("Node inserted\n");
        }
        else{
            ptr->data=value;
            ptr->link=head;
            head=ptr;
            printf("Node inserted\n");
        }
        display();
    }
}

