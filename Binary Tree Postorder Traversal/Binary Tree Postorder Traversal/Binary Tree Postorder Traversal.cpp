// Binary tree using linked.cpp 

#include <iostream>
#include<string>

using namespace std;

class node {

public:

	int data;
	node* left;
	node* right;

	node* createnode(int  data) {
		node* nod = new node;  //Creating node 
		nod->left = NULL;
		nod->right = NULL;
		nod->data = data;

		return nod;
	}

	void preordertraversal(node* root) {
		if (root != NULL) {
			cout << root->data << endl;
			preordertraversal(root->left);
			preordertraversal(root->right);
		}
	}
	void postordertraversal(node* root) {
		if (root != NULL) {
			
			postordertraversal(root->left);
			postordertraversal(root->right);
			cout << root->data << endl;
		}
	}
};


int main()
{

	// Correct method below but it is slow 
	/*node* rootnode = new node;  //Creating First root node
	rootnode->left = NULL;
	rootnode->right = NULL;
	rootnode->data = 12;

	node* p1 = new node;  //Creating Second node
	p1->left = NULL;
	p1->right = NULL;
	p1->data = 15;

	node* p2 = new node;  //Creating Third Node
	p2->left = NULL;
	p2->right = NULL;
	p2->data = 10;
	*/
	node abj;

	node* rootnode = abj.createnode(2);
	node* p1 = abj.createnode(6);
	node* p2 = abj.createnode(10);

	// Linking root node with childrens 

	rootnode->left = p1;
	rootnode->right = p2;

	abj.postordertraversal(rootnode);
	return 0;
}
