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
	node* search(node* root, int key) {

		if (root == NULL) {
			return NULL;
		}
		if (root->data == key) {
			return root;
		}
		else if (key < root->data) {
			return search(root->left, key);
		}
		else {
			return search(root->right, key);
		}
	}
	void insert(node* root, int key) {

		node* prev = NULL;

		while (root != NULL) {
			prev = root;
			if (key == root->data) {
				cout << "Can not insert in this BST" << endl;
				return;
			}
			else if (key < root->data) {
				root = root->left;
			}
			else {
				root = root->right;
			}
		}
		node* NEW = createnode(key);
		if (key < prev->data) {
			prev->left = NEW;
		}
		else {
			prev->right = NEW;
		}

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



	abj.insert(rootnode, 7);
	cout << rootnode->right->right->data;
	return 0;
}
