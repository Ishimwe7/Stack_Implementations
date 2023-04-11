#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define Maximum 10

int stackArray[Maximum];
int top=-1;

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
