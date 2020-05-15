/*
Let's start writing the code for Appending the doubly linked list.
Append means adding the newly created nodes after the existing node and
if the node is not there then the first newly created node is our first node....

*/

void Append(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data");
	scanf("%d",&temp->data);
	temp->left = NULL;
	temp->right = NULL;

	if(root == NULL){
		root = temp;
	}
	else{
		struct node* p;
		p = root;
		while(p->link!=NULL){
			p = p->right;
		}
		p->right = temp;
		temp->left = p;
	}

}