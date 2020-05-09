/*
Finding the total number of nodes present in the list.
Cfreate a list do various operations and then find the number of nodes present in it.
*/

int length(){
	int count = 0;		//initialize counter value to 0 and then start its increment.
	struct node* p;
	p = root;
	while(p != NULL){
		count++;
		p = p->link;
	}
	return count;
}