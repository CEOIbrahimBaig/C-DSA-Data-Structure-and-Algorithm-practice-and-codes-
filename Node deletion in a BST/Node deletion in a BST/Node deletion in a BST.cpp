#include<iostream>
using namespace std;  

class Node {
public :
	int data;
	Node* right;
	Node* left;


	bool leaf_node(Node* ptr) {
		if (ptr->left == NULL && ptr->right == NULL) {

			return true;
		}
		else {
			return false;
		}
	}
	Node* delete_node(Node* root, int val) {

		Node* ptr = root;
		Node* root_of_ptr = root;
		while (ptr->data != val) {
			root_of_ptr = ptr;
			if (ptr->data < val) {
				ptr = ptr->right;
			}
			else if (ptr->data > val) {
				ptr = ptr->left;
			}
			// No need for  cheking if the val is equal Because if it is equal then loop terminates 
		 }

		//Now as we have found the node to delete  apply the casses 
        //As well as we have the root_node_of_deletion_node  which is root of node_to_delete 

		// 1st case  = The node to delete is a leaf node 
		if (leaf_node(ptr)) { // Suppse the val was equal to leaf node then it will check and delete it 
			
			root_of_ptr->left = NULL;
			root_of_ptr->right = NULL;

			delete(ptr);
			return root;
		}

		// 2nd case = Suppose the node to delete is a root node with  left node but no right node 
		else if (ptr->right == NULL && ptr->left != NULL) {

			if (root_of_ptr->left == ptr) {
				root_of_ptr->left = ptr->left;     // ptr was left child
			}
			else {
				root_of_ptr->right = ptr->left;    // ptr was right child
			}

			delete(ptr);
			return root;
		
		}
		//3rd case = Suppose the node to delte is a root node with right node but no left node 

		else if (ptr->left == NULL && ptr->right != NULL) {
			root_of_ptr->left = ptr->right;
			delete(ptr);
			return root;
		}

		// 4th case: Node has both left and right children
		else if (ptr->right != NULL && ptr->left != NULL) {

			// Go to left subtree and find the largest node
			Node* largest_left_subtree_node = ptr->left;
			Node* root_of_largest = ptr; // parent of the largest node

			while (largest_left_subtree_node->right != NULL) {
				root_of_largest = largest_left_subtree_node; // move parent pointer
				largest_left_subtree_node = largest_left_subtree_node->right; // move to rightmost
			}

			// Copy data from largest node to node-to-delete
			ptr->data = largest_left_subtree_node->data;

			// Detach largest node safely from its parent BEFORE deletion
			
			if (root_of_largest->left == largest_left_subtree_node) {
				root_of_largest->left = largest_left_subtree_node->left; // attach left child if exists
			}
			else {
				root_of_largest->right = largest_left_subtree_node->left; // attach left child if exists
			}

			delete largest_left_subtree_node; // delete the original largest node

			return root; // return updated root
		}

	}

};


int main() {


	return 0;
}