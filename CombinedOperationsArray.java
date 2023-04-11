import java.util.Scanner;

public class CombinedOperationsArray {

    final static int Maximum=10;
	static int[] stackArray = new int[Maximum];
	static int top=-1;

	static Scanner scan= new Scanner(System.in);

	static boolean isEmpty(int stackArray[]){
	    if(top==-1){
	        return true;
	    }
	    else{
	        return false;
	    }
	}
	
	static boolean isFull(int stackArray[]){
	    if(top==Maximum-1){
	        return true;
	    }
	    else{
	        return false;
	    }
	}

	static void push(){
		int value;
	    if(isFull(stackArray)){
	    	System.out.println("Sorry!! Stack is already full");
	    }
	    else{
	        System.out.println("Enter a value you want to insert..");
	        value=scan.nextInt();
	        top++;
	        stackArray[top]=value;
	        System.out.println("Push done Successfully");
	        display();
	    }
	}

	static void pop(){
	    int popp;
	    if(isEmpty(stackArray)){
	    	System.out.println("Sorry!! Stack is Empty");
	    }
	    else{
	        popp=stackArray[top];
	        top--;
	        System.out.println("You have Successfully popped an element from your Stack");
	        display();
	    }
	}

	static void display(){
	    int i;
	    if(isEmpty(stackArray)){
	    	System.out.println("Your Stack is Empty");
	       }
	    else{
	    	int ele=top+1;
	    	System.out.println("Your Stack is now having: " + ele + " elements below");
	        for(i=0;i<=top;i++){
	        	System.out.print(stackArray[i]+ "\t");
	       }
	        System.out.print("\n\n");
	    }
	}

	public static void main(String args[]){
	    int choice;
	    System.out.println("Welcome to our program!!!");
	    do {
	    System.out.print(" Enter 1. To Push\n Enter 2. To Pop\n Enter 3. To Display Stack elements\n Enter 0 to exit\n\n");
	    System.out.print("Enter your choice...");
	    choice=scan.nextInt();
	    switch(choice){
	    case 1:
	    	System.out.print("\n");
	        push();
	        break;
	    case 2:
	    	System.out.print("\n");
	        pop();
	        break;
	    case 3:
	    	System.out.print("\n");
	        display();
	        break;
	    case 0:
	    	System.out.println("Thank you for using our system. Bye!!");
	        return;
	    default:
	    	System.out.println("Sorry you entered invalid choice. Try Again!");
	    }
	    }
	    while(choice!=0);
	}
	}
