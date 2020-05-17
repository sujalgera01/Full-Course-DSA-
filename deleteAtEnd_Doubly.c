/*
Delete the node at the end of the list meaning we have to append till the last node and 
by use of another variable we have to reach there and delete the last element from the doubly list.

*/

void deleteAtEnd(){
	struct node* temp;
	struct node* p;
	temp = root;

	while(temp->right != NULL){
		temp = temp->right;
	}
	p = temp;    			//Reach of another variable so that we can continue this deletion for other elements too
	p = p->left;
	temp->left = NULL;			//Left link to NULL so as to free the node from list
	free(temp);
}