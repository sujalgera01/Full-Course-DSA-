/*
Now let us see how to display the elements of circular queue.
There are two conditions possible for that:

One is if front is always less than rear 
And the other is when both are adjacent to each other then we have to use 2 loops.
(One from 0 to rear and other from front to size-1)

So, let us see.....
*/


void display(){
	if(front == -1 && rear == -1){
		printf("cqueue is empty");
	}
	else{
		if(front <= rear){

			for(int i = front; i<=rear; i++)
				printf(queue[i]);
		}
		else{
			for(int i=front; i<=size-1; i++){
				printf(cqueue[i]);
			}

			for(int i=0; i<rear; i++){
				printf(cqueue[i]);
			}
		}
	}
}