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
	void inordertraversal(node* root) {
		if (root != NULL) {

			inordertraversal(root->left);
			cout << root->data << endl;
			inordertraversal(root->right);

		}
	}
	int isBST(node* root) {
		static node* prev = NULL;
		if (root != NULL) {
			if (!isBST(root->left)) {
				return 0;
			}
			if(prev!=NULL && root->data<=prev->data) {
				return  0;
			}
			prev = root;
			return isBST(root->right);
		}
		else {
			return 1;
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

	node* rootnode = abj.createnode(5);
	node* p1 = abj.createnode(3);
	node* p2 = abj.createnode(6);
	node* p3 = abj.createnode(1);
	node* p4 = abj.createnode(4);
	
	// Linking root node with childrens 

	rootnode->left = p1;
	rootnode->right = p2;
	p1->left = p3;
	p1->right = p4;


	abj.inordertraversal(rootnode);
	cout<<abj.isBST(rootnode);
	return 0;
}
