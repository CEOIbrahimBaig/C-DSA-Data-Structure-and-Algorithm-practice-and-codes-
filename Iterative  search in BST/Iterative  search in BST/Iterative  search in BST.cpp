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
	node* iter_search(node *root ,int key ) {

		while (root!=NULL){
		if (key == root->data) {
			return root;
		}
		else if (key < root->data) {
			root = root->left;
		}
		else {
			root = root->right;
		}
	}
		return NULL;
	}
};


int main()
{
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

	node* search = abj.iter_search(rootnode,1);
	if (search->data==NULL) {
		cout << "The element is not found " << endl;
	}
	else {
		cout << "Element Found : " << search->data << endl;
	}

	return 0;
}
