#include<iostream>
#include<string>
using namespace std;

class stack {

public:
	int top;
	int size;
	int* arr;


	int isfull(stack *a) {
		if (a->top == a->size - 1) {
			cout << "The stack is full " << endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	int isempty(stack* b) {
		if (b->top < 0) {
			cout << "The stack is empty " << endl;
			return 1;

		}
		else {
			return 0;
		}

	}
	void push(stack* a,int val) {
		if (isfull(a)) {
			return;
		}
		else {
			a->top++;
			a->arr[a->top] = val;
			cout << "Pushed :" << val << endl;
		}


	}
	void pull(stack* a) {
		if (isempty(a)) {
			return ;
		}
		else {
			int pulled_val = a->arr[a->top];
			a->top--;
			cout << "Pulled :" << pulled_val << endl;
		
		}

	}



};

int main() {

	stack abh;

	abh.size = 5;
	abh.top = -1;
	abh.arr = new int[abh.size];

	return 0;
}