// Practicing Queue using linkedlist.cpp 

#include <iostream>
#include<string>

using namespace std;

class Node {

public:
	int data;
	Node* r;
	Node* f;
	Node* next;
	Node() {
		r = f = NULL;
	}

	void enqueue(int val) {
		Node* new_node = new Node;
		
		new_node->data = val;
		if (r == NULL) {
			r = f = new_node;
		 }
		else{
		r->next = new_node;
		r= new_node;

		cout << "Enqueued : " << val << endl;
		}

	}
	void dequeue() {
		if (r == NULL) {
			cout << "Queue is empty" << endl;
		}
		else {
			Node* temp = f;
			int val = f->data;
			f = f->next;
			delete(temp);
			if (f == NULL) {
				r =NULL;
			}
			cout << "Dequeued : " << val << endl;

		}
	}
	void traversal() {
		Node* ptr = f;
		while (ptr != NULL) {
			cout << " Data : " << ptr->data << endl;
			ptr = ptr->next;
		}
	}

};




int main()
{

	return 0;
}
