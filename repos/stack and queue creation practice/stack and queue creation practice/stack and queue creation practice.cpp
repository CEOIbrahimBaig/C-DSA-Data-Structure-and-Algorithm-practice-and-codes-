

#include<iostream>
using namespace std;
 
// Stack using linkedlist 

class Node {

public : 

	int data;
	Node* next;
	
	bool is_empty(Node *top) {
		if (top == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	Node* add(Node* top, int val) {

		Node* new_node = new Node;
		new_node->next = NULL;
		new_node->data = val;

		new_node->next = top;
		top = new_node;

		return top;

	}
	Node* poph(Node* top, int val) {
		if (top == NULL) {
			return NULL;
		}
		Node* ptr = top;
		top = top->next;
		delete (ptr);

	}

};

int main() {
	int size = 0;
	Node* top = NULL;

	return 0;
}