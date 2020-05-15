/*
Now we will write the code for adding the node in middle of the nodes.
This is little bit tricky because you have to make the links properly and in the
correct order.

You have to take the location from ther user and then add the node at that particular
location.

*/

void addAtMiddle(){
	int i,len,loc;
	len = length();
	struct node* temp;
	struct node* p;
	printf("Enter location");
	scanf("%d",&loc);

	if(loc>len){
		printf("Invalid Location");
	}
	else{
	temp = (struct node*)malloc(sizeof(struct node))	//Node Creation
	printf("Enter node data");
	scanf("%d",&temp->data);
	temp->right = NULL;
	temp->left = NULL;
	p = root;

	while(i < loc){			// Traversing 'p' before the location node.
		p = p->right;
		i++;
	}
	temp->right = p->right; 	// Making Of the connections
	p->right->left = temp;
	temp->left = p;
	p->right = temp;
	}
}