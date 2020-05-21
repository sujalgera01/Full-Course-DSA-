/*
Deletion and all other things can be done just as same as the single linked list.
Let us see how to display the elements in the circular list.

*/

void display(){
	struct node* temp;

	if(root == NULL){
		printf("Empty List");
	}
	else{
		temp = root;
		while(temp->link != root){
			printf("%d",temp->data);
			temp = temp->link;
		}
		printf("%d", temp->data);		//Printing last element.
	}
}