/*
Creation of circular linked list. The only difference is that it is exactly same as the linked list and
only diff is that the last node is connected to root element or first element.

*/

struct node{
	int data;
	struct node* link;
}
struct node* root = NULL;
 
void create(){
	struct node* newNode;
	struct node* temp;

	newNode = (struct node*)malloc(sizeof(struct node));  //Creation of node
	printf("Enter the node data");
	scanf("%d",&newNode->data)
	newNode->link = NULL;

	if(root == NULL){
		root = newNode;
		temp = newNode;
	}
	else{
		temp->link = newNode;
		temp = newNode;
	}

	temp->link = root;			//Link the last node  to the root node to make it circular.
}