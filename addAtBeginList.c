/*
Lets make the new node and try to add in the beginning of the first node.

Make the node by creating temp variable then try to make the links and connections to 
the data part and link part of first node.

------IMPORTANT---------
Always try to make the connection from right side i.e. link part bcoz if we make the data part connection first
then we will loose the root element address. So always make link connection first with other nodes..

*/

void addAtBegin(){
	
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data");
	scanf("%d",&temp->data);
	temp->link = NULL;

	if(root == NULL){
		root = temp;
	}
	else{
		temp->link = root;		//Left side Connection with first node.
		root = temp;			//Right side Connection with root node.
	}

}