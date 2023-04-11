#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define Maximum 10

int stackArray[Maximum];
int top=-1;

void pop(){
    int popp;
    if(isEmpty()){
        printf("Sorry!! Stack is Empty\n");
    }
    else{
        popp=stackArray[top];
        top--;
        printf("You have Successfully popped an element from your Stack\n\n");
        free(popp);
    }
}
