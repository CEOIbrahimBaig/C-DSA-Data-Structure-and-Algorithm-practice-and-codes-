#include<iostream>
#include<string>
using namespace std;



class queue {
public:

	int r;
	int f;
	int size;
	int* arr;


	int isfull(queue* q) {
		if (q->r == q->size ) {
			cout << "The stack is full" ;
			return 1;
		}
		else {
			return 0;
		}
	}
	int isempty(queue* q) {
		if (q->r == q->f) {
			cout << "The stack is empty " << endl;
			return 1;

		}
		else {
			return 0;
		}
	}
	void enqueue(queue* a,int val) {
		if (isfull(a)) {
			return ;
		}
		else {
			a->r++;
			a->arr[a->r] = val;
			cout << "Enqued : " << val << endl;
		}
	}
	void dequeue(queue* a) {
		if (isempty(a)) {
			return ;
		}
		else {
			a->f++;
			int dequeue_val = -1;
			dequeue_val = a -> arr[a->f];
			cout << "Dequeued : " << dequeue_val << endl;
			
		}
	}


};

int main() {
	queue abj;
	abj.f = -1;
	abj.r = -1;
	abj.size = 5;
	abj.arr = new int[abj.size];



	return 0;
}
