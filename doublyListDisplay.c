/*
To display the list we have the same method and the procedure as we did
in the single linked list.

*/

void display(){
	struct node* temp;
	temp = root;
	if(root == NULL){
		printf("Empty List");
	}
	else{
		while(temp!=NULL){
			printf("%d",temp->data);
			temp = temp->right;
		}
		printf("%d",temp->data); 		//Printing the data of last node.
	}
}