#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Maximum 10

int top=-1;
int stackArray[Maximum];

bool isFull(){
    if(top=Maximum-1){
        return true;
    }
    else{
        return false;
    }
}

