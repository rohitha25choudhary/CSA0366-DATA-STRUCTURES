#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 10
void enqueue();
void dequeue();
void display();
int i,front,rear,item,choice,q[SIZE];
front=-1;
rear=-1;

main()
{
int i,front,rear,item,choice,q[SIZE];
front=-1;
rear=-1;
while(1)
{
	printf("\n\n*****MENU*****\n");
	printf("\n1) Enqueue\n2) Dequeue\n3) Display\n4) Exit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
   switch(choice)
   {
   	case 1: enqueue();
   	        break;
   	        
    case 2: dequeue();
            break;
    
    case 3: display();
            break;
            
    case 4: printf("****END****");
            exit(0);
            
    case 5 : if(choice>4){
               default: printf("Wrong choice.., Enter you choice again.");
               break;
   }
}
}
}

void enqueue()
{
	if(rear>=SIZE-1){
	printf("The queue is full or in overflow condition.");
}
    if(front==-1)
    {
    	front++;
	}
	else
	{
		printf("Enter the element to enqueue : ");
		scanf("%d", &item);
	    rear++;
		q[rear]=item;l,,?
		
}
}

void dequeue(){
	if(front>rear)
	{
		printf("The queue is empty or in underflow condition.");
	}
	if(front==-1){
		printf("The queue is empty or in underflow condition.");
	}
	else{
		item=q[front];
	    printf("Elemented dequeued is %d at index %d.", item,front);
	    front++;
	}
}

void display(){
	if(rear==-1){
		printf("The queue is empty or in underflow condition");
	}
	for(i=front;i<=rear;i++)
	printf("Element %d is at %d\n", q[i],i);
}
