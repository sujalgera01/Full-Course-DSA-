/*
Now we will see the doubly linked list. It contains three parts i.e.
LEFT Link
DATA part
RIGHT Link

We will create a node in this file and in coming topics we will cover everything from append to delete the
node in doubly linked list. We will see  each and every code..


So, Let's get Started!!!
*/

struct node
{
	int data;
	struct node* left;
	struct node* right;

}
struct node* root = NULL;

/*
--------------------------------
|  left   |   data   |  right  |
|  link   |   part   |  link   |
--------------------------------
This is what our node contains */