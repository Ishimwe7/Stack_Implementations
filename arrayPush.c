#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define Maximum 10

int stackArray[Maximum];
int top=-1;
int value;

void push(){
    if(isFull()){
        printf("Sorry!! Stack is already full\n");
    }
    else{
        printf("Enter a value you want to insert..");
        scanf("%d",&value);
        top++;
        stackArray[top]=value;
        printf("Push done Successfully\n");
    }
}

