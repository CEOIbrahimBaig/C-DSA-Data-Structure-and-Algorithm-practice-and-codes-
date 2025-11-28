// Binary tree using linked.cpp 

#include <iostream>
#include<string>

using namespace std;

class node {

public:

	int data;
	node* left;
	node* right;

	node * createnode(int  data) {
		node* nod = new node;  //Creating node 
	nod->left = NULL;
	nod->right = NULL;
	nod->data = data;

	return nod;
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
	return 0;
}
