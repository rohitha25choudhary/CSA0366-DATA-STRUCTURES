#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 10
void push();
void pop();
void peek();
int i,top,item,stack[SIZE],choice;
int top=-1;

int main()
{
	int top=-1;
	while(1)
	{
		printf("\n\n*****MENU*****\n");
	    printf("\n1)PUSH\n2)POP\n3)PEEK\n4)EXIT\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
     switch(choice)
       {
   	        case 1: push();
   	        break;
   	        
            case 2: pop();
            break;
    
            case 3: peek();
            break;
            
            case 4: printf("\n\n****END****");
            exit(0);
            
            case 5 : if(choice>4)
		   {
               default: printf("Wrong choice.., Enter you choice again.");
               break;
            } 
        }
	}
}

void push()
{
	if(top == -1)
	{
		printf("Stack is underflow.");
	}
	if(top== SIZE-1)
	{
		printf("Stack is overflow.");
	}
	else
	{
		printf("Enter the element to push : ");
		scanf("%d", &item);
		top++;
		stack[top]=item;
	}
}


void pop()
{
	if(top == -1)
	{
		printf("Stack is underflow.");
	}
	else
	{
		printf("Element deleted is : %d", stack[top]);
		top--;
	}
}

void peek()
{
	if(top==-1)
	{
		printf("Stack is underflow.");
	}
	else
	{
	    printf("%d is the peek element.", stack[top]);
	}
}