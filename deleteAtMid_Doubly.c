/*
Delete the node at the Middle of the list.
So we have to take the location and do the steps as we did it before

remember that the linking part shoulb be correct and in a definite order

*/

void deleteAtMid(){
	struct node* temp;
	int loc, i=1;

	p = root;
	temp  = root;

	printf("Enter the location");
	scanf("%d",&loc);
	while(i <= loc){
		temp  = temp->right;
		i++;
	}

	temp->left->right = temp->right;
	temp->right->left = temp->left;

	free(temp);
}