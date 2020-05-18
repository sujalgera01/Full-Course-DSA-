/*
Code for reversing the doubly linked list

In reversing always take an example and make the output result in rough
so, it will be easier to link the nodes effectively.
*/

struct node{			//Node Creation
	int data;
	struct node* right;
	struct node* left;

}
struct node* root;


struct node* p;
p = root;
while(p->right != NULL){		//Reaching to the last node so that we can change root value too at the end
	p = p->right;
}

void reverse(){
	struct node* temp1;			//Required 2 temporary variable for swaping and  interchanging	
	struct node* temp2;
	if(root == NULL){
		printf("Empty list")
	}
	else{
		temp1 = root;
	}
	while(temp1 != NULL){				//Linking the connections  step by step
		temp2 = temp1->right;
		temp1->right = temp1->left;
		temp1->left = temp2;
		temp1 = temp2;
	}
	
	temp1 = root;			//Shifting root  value
	root = p;
	p = temp1;
}