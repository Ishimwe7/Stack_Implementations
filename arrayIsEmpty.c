#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Maximum 10

int stackArray[Maximum];
int top=-1;

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

