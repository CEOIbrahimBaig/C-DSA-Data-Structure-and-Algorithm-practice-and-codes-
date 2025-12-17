#include<iostream>

using namespace std;


// stack using linkedlist 

/*
class Node {
public:


	int data;
	Node* next;
	 

		bool empt(Node* top) {
			if (top == NULL) {
				return true
					;
			}
			else {
				return false;
			}
		}

		Node* add(Node* top, int val) {

			Node* newnode = new Node; 

			newnode->data = val;
				newnode->next = NULL;



			if (empt(top)) {
				top = newnode;
				return top;
			}

			newnode->next = top;
			top = newnode;

			return top ;

		}
		Node * remove(Node* top) {


			if (empt(top)) {
				return NULL;
			}
			Node* ptr = top;
			top = top->next;
			delete(ptr);

			return top ;
		}
		void display(Node* top) {
    if (top == nullptr) {
        cout << "Stack is empty!" << endl;
        return;
    }

    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

 };



int main() {

	Node* top = NULL;
Node aj;

top = aj.add(top,2);
	return 0;
 }*/

// queueu using linkedkust list 

/*
class Node {

public :

	int data;
	Node* next;
	 

	bool empt(Node*& r, Node*& f) {
		if (r == f && f == NULL) {
			return true;
		}
		else {
			return false;

		}
	}

	void travers(Node* r) {

		Node* ptr = r;

		while (ptr != NULL) {
			cout << ptr->data << endl;
			ptr = ptr->next; 

		}

	}

	Node* add(Node*& r, Node*& f, int val) {
		Node* newnode = new Node;
		newnode->data = val;
		newnode->next = NULL;

		if (empt(r,f)) {
			r = f = newnode;
			return newnode;
		}
		r->next = newnode;
		r = r->next;

		return r;
	}

	Node* remove(Node*& r, Node*& f) {

		if (empt(r, f)) {
			return NULL;
		}
		Node* te = f;
		f = f->next;
		delete(te);
		if (f == NULL) {
			r == NULL;
		}

	}
};





int main() {
	Node* r = NULL;
	Node* f = NULL;

	Node abj;




}*/
/*
class stack {
public :

	int size;
	int top;
	int* arr;

	bool is_empty(stack* s) {
		if (s->top == -1) {
			return true;
		 }
		else {
			return false;
		}
	}

	bool is_full(stack* s) {
		if (s->top == size - 1) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert(stack* s, int val) {

		if (is_full(s)) {
			return;
		}

		if (is_empty(s)) {
			s->top++;
			s->arr[0] = val;
			
		}
		else {
			s->top++;
		s->arr[s->top] = val;
	
		}
	}
	void remove(stack* s) {

		if (is_empty(s)) {
			return;
		}
		else {
			int val;
			s->arr[s->top] = val;
			cout << "Removed : " << val << endl;
			s->top--;
		}


	}
	void display(stack *s ) {
		if (is_empty(s)) {
			return;
		}

		int i = 0;

		while (i <= s->top) {
			cout << s->arr[i] << endl;
			i++;
		}
		
	}
};


int main() {

	stack abj; 
	abj.size = 5;
	abj.top = -1;
	abj.arr = new int[abj.size];

}



*/


// Queue using array 


class que {

	public:
		int r;
		int f;
		int size;
		int* arr;

		bool is_full(que *s) {
			if (s->r == s->size - 1) {
				cout << "full " << endl;
				return true;
			}
			else {
				return false;
			}
	}
		bool is_empty(que* s) {

			if (s->f==-1 || f>r) {
				return true;
			}
			else {
				return false;
			}

		}

		void insert(que* s, int val) {

			if (is_full(s)) {
				return; 
			}

			if (is_empty(s))
			{
				s->f++;
				s->r++;
				s->arr[s->r] = val;
				return;
			}
			s->r++;
			s->arr[s->r] = val;
		}

		int  remove(que* s) {
			
			if (is_empty(s)) {
				return -11;

			}

			int val = s->arr[s->f];
			s->f++;

			// check if it is empty make r also -1 
			if (s->f > s->r) {
				s->r = -1;
				s->f = -1;
			}

			return val;

			
		}
		void display(que* s) {
			if (is_empty(s)) {
				cout << "Queue is empty!" << endl;
				return;
			}
			for (int i = s->f; i <= s->r; i++) {
				cout << s->arr[i] << " ";
			}
			cout << endl;
		}

};

int main() {

	que abj;

	abj.size = 5;
	abj.r = -1;
	abj.f = -1;
	abj.arr = new int[abj.size];



	return 0;
}