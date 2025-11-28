#include<iostream>
# include<string>
using namespace std;

class Node {

public:
	int data;
	Node* next;
	
	void traversal(Node *top) {
		Node* ptr = top;
		while (ptr != NULL) {
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
	Node* push(Node *top,int val){
		
		
		Node* new_node = new Node;
		new_node->data = val;
		new_node->next = top;
		top = new_node;
		return top;
	}
	Node* pop(Node* top ) {
		
		if (top == NULL) {
			cout << "Stack is empty " << endl;
			return NULL;
		}
		else {
			Node* ptr = top;
			int del_val = top->data;
			top = top->next;
			delete (ptr);
			cout << "Value pulled ;" << del_val << endl;
			return top;
			
		}
	}

};

int main() {



	return 0;
}