// Implement stack using linked List.cpp :

#include <iostream>
#include<string>

using namespace std;

class Node {
public:

	int data;
	
	Node * next;

	Node * push(Node* top, int x) {

			Node* n = new Node;
			n->data = x;
			n->next = top;
			top = n;
			return top;

		}
	}
	int isempty(Node *top) {
		if (top == NULL) {
			return 1;
		}
		else {
			return 0;
		}
		
	}
	void linkedlisttraversal(Node* ptr) {

		while (ptr!=NULL){
		cout << "The data stored in it is " << ptr->data << endl;
		ptr = ptr -> next;

	}
	}
	Node* pop(Node* top) {
		if (top==NULL) {
			cout << "Stack empty " << endl;
			return top;  // no change
		}
		else {
			Node* temp = top;
			int val = top->data;
			top = top->next;
			delete temp;
		
			cout << "Popped value is: " << val << endl;
			return top;  // updated top returned
		}
	}

};

int main()
{

	Node* top = NULL;
	Node abj;

top = abj.push(top, 76);
top = abj.push(top, 72);
top = abj.push(top, 704);
top = abj.push(top, 76333);
abj.linkedlisttraversal(top);

top=abj.pop(top);

cout << "After poping out " << endl;
cout << endl;
abj.linkedlisttraversal(top);


	return 0;

}
