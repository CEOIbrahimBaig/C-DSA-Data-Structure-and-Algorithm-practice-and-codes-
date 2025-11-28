#include <iostream>


using namespace std;
 
class Node {
public :
	int data;
	Node* right;
	Node* left;
	
	Node* largest_data_node(Node* root) {

		Node* ptr = root;

		while (ptr->right!= NULL) {
			ptr = ptr->right;

		}
		return ptr;

	}
	Node* smallest_data_node(Node* root ) {
		Node* ptr = root;
		
		while (ptr->left != NULL) {
			ptr = ptr->left;

		}
		return ptr;
	}

};

int main() {

	Node* tree = new Node;

	

	return 0;
}