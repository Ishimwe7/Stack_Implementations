#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define Maximum 10

int stackArray[Maximum];
int top=-1;
int value;

bool isEmpty(stackArray){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(stackArray){
    if(top==Maximum-1){
        return true;
    }
    else{
        return false;
    }
}

void push(){
    if(isFull()){
        printf("Sorry!! Stack is already full\n");
    }
    else{
        printf("Enter a value you want to insert..");
        scanf("%d",&value);
        top++;
        stackArray[top]=value;
        printf("Push done Successfully\n\n");
        display();
    }
}

void pop(){
    int popp;
    if(isEmpty()){
        printf("Sorry!! Stack is Empty\n\n");
    }
    else{
        popp=stackArray[top];
        top--;
        printf("You have Successfully popped an element from your Stack\n\n");
        display();
        free(popp);
    }
}

void display(){
    int i;
    if(isEmpty()){
            printf("Your Stack is Empty\n\n");
       }
    else{
    printf("Your Stack is now having: %d elements below\n\n", top+1);
    for(i=0;i<=top;i++){
        printf("%d\t", stackArray[i]);
    }
    printf("\n\n");
    }
}

void main(){
    int choice;
    printf("Welcome to our program!!!\n\n");
    do {
    printf(" Enter 1. To Push\n Enter 2. To Pop\n Enter 3. To Display Stack elements\n Enter 0 to exit\n\n");
    printf("Enter your choice...");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        printf("\n");
        push();
        break;
    case 2:
        printf("\n");
        pop();
        break;
    case 3:
        printf("\n");
        display();
        break;
    case 0:
        printf("Thank you for using our system. Bye!!\n\n");
        return;
    default:
        printf("Sorry you entered invalid choice. Try Again!\n");
    }
    }
    while(choice!=0);
}
