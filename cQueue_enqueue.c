/*

It is a type of DS that is just like the normal queue but some of the additional properties.
To avoid the drawback of the normal queue both front and rear come back to the initial position.

Also, one advantage is that there is no shifting of elements in this(while deletion). 

So, here we will insert the elements i.e. Enqueue operation and delete the 
elements i.e. Dequeue operation

*/

#include<stdio.h>
#include<stdlib.h>
#define size = 20;

int cqueue[size];
int front = -1;
int rear = -1;

void main(){
	//Here define everything the same we did in Stack Operation.
	//Open up the file called "setup" and have a look. We are going to start main fn's.
}


void enqueue(int element){
	if((rear == size-1) || (front == rear+1)){  // check condition that if rear reaches the last and second condition is rear and front are adjacent to each other.
		printf("Circular Queue is full!");
	}

	else if(front == -1 && rear == -1){  // If both are at initial then increase the value to 0 and add.
		front = 0;
		rear = 0;
		cqueue[rear] = element;
	}

	else if(rear == size-1){  // the condition when rear is at max position but front is not adjacent to it. It means there is a space to add between them.
		rear = 0;             // So, We do value of rear to 0 and add.   
		cqueue[rear] = element;
	}
	else{
		rear++;                     // Simple adding the elements just like a normal Queue.  
		cqueue[rear] = element;    
	}
}
