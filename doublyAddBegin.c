/*

Code for  adding the newly created node in the beggining of the list.
*/

void addAtbegin(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data");
	scanf("%d",&temp->data);
	temp->left = NULL;
	temp->right = NULL;

	if(root == NULL){
		root = temp;
	}
	else{					//First make right connections and then left .
		temp->right = root;
		root->left = temp;
		root = temp;
	}
}