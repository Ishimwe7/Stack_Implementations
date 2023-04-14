#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

int main(){
    int choice;
    printf("WELCOME TO OUR PROGRAM\n\n");
    do{
    printf(" Enter 1. To push\n Enter 2. To Pop\n Enter 3. To Display\n Enter 0. To Exit\n\n");
    printf("Enter your choice...");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 0:
        printf("\n\nThank you for using our program. Bye!!\n\n");
        return;
    default:
        printf("Invalid choice. Try again!\n");
    }
    }
    while(choice!=0);
    return 0;
}
