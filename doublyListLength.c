/*
Calculate the number of  nodes in the doubly list.
Here is the Code!!!

*/

void length(){
	struct node* temp;
	temp = root;
	int count = 0;

	while(temp!=NULL){
		count++;
		temp = temp->right;
	}
	return count;
}