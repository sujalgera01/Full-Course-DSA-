/*
Let's write the code for dequeue operation in a circular queue.

*/

void dequeue(){
	int element;
	if(front == -1 && rear == -1){  //If both pointers are at initial pos.
		printf("Queue is Empty");
	}

	else if(front == rear){         // This is the condition that arrives only when there is single element left in cqueue
		element = cqueue[front];    // and we want to delete that element too.
		front = rear = -1;
	}

	else if(front = size -1){     //Max pos where front pointer can reach.
		element = cqueue[front];
		front = 0;
	}

	else{
		element = cqueue[front];   //Normal dequeue operation.
		front++;
	}

	return element;
}