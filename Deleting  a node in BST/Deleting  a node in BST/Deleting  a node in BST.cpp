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

	node* inorderpred(node *root) {
		root = root->left;

		while (root->right != NULL) {
			root = root->right;
		}
		return root;
	}
	node* delete_node(node *root , int key ) {


		node* iPre;

		if (root == NULL) {  // When there is no node 
			return NULL;
		}
		if (root->left == NULL && root->right == NULL) { // If we have reached leaf node
			free(root);
			return NULL;
		}
		
		// First Reaching the node I want to delete 
		if (key < root->data) {
			root->left= delete_node(root->left, key);
		}
		else if (key > root->data) {
			root->left=delete_node(root->right,key);
		}
		// Deletion strategy when node is FOUND
		else {
			iPre = inorderpred(root);
			root->data = iPre->data;
			root->left=delete_node(root->left, iPre->data);

		}
		return root;

	}
	void inorder_traversal(node* root) {
		if (root != NULL) {
			inorder_traversal(root->left);
			cout << root->data << endl;
			inorder_traversal(root->right);
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

	abj.inorder_traversal(rootnode);
	abj.delete_node(rootnode,1);
	abj.inorder_traversal(rootnode);
	return 0;
}
