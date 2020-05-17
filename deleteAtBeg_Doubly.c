/*
deleting a node from the beginning of the doubly linked list.

It means we have to link the root element to the second node and free the first node 
if possible bcoz might be the list is empty so we have to check that condition

*/

void deleteAtBeg(){
	struct node* temp;
	temp = root;

	if(root == NULL){
		printf("Empty List\n");
	}
	else{
		root = temp->right;			//Connections
		root->left = NULL;
		free(temp);
	}
}