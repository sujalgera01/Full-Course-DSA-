/*
We will see the node swaping in the list.

We will take the location from the user and then we will create a temporary node and make it traverse before the location.
Then we will take 2 more temporary nodes and traverse that next to the node before traversed.
Just interchange some links and nodes will be swaped.

*/

void swap(){
	
	int i = 1, loc, len;
	lem = length();
	struct node* p;
	struct node* q;
	struct node* r;

	if(loc>len){
		printf("Invalid Location");
	}
	else{
		while(i < loc-1){	//Reaching to particular location.
			p = p->link;
			i++;
		}
		q = p->link;
		r = q->link;

		q->link = r->link;		//SWAPING..
		r->link = q;			//SWAPING..
		p->link = r;			//SWAPING..
	}


}

