#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
void push();
void pop();
void display();

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
