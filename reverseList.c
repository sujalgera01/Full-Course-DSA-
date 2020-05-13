/*
We have to reverse the list meaning the data of the nodes shoubld be reversed and the root should be 
in the link of last node instead of first  bcoz the data of first node has reached in last.

Remember to reverse the root node
*/

void reverse(){
	int i,j,len,k;
	struct node* p;
	struct node* q;
	struct node* temp;


	p = q = root;
	i=0;
	len = length();
	j=len-1;		//value to the last node.

	while(i<j){
		k=0;
		while(k<j){
			q = q->link;
			k++;
		}
	}

	temp = p->data;			//Reversing the nodes one by one that is first with last, second with secondlast and so on... 
	p->data = q->data;
	q->data = temp;

	i++;		
	j--;
	p = p->link;		//root node to its correct pos.
	q = root;
}