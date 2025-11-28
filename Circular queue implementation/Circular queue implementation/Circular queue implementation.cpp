// Implement Queue using Array.cpp 

#include <iostream>
#include<string>

using namespace std;



class circ_queue {

public:

	int size;
	int f; // First value in Queue
	int r; // Last avalue in Queue
	int* arr;


	int  isfull(circ_queue* q) {
		if ((q->r+1)%q->size==q->f) {
			cout << "The Queue using ARRAY is FULL " << endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	int isempty(circ_queue* q) {
		if (q->r == q->f) {
			cout << "The Queue using ARRAY is Empty " << endl;
			return 1;
		}
		else {
			return 0;
		}
	}


	void enque(circ_queue* q, int val) {

		if (isfull(q)) {
			cout << "Queue Full " << endl;
		}
		else {

			q->r = (q->r + 1) % q->size;
			q->arr[q->r] = val;
			cout << "Enqueued :" << val << endl;
		}

	}
	void dequeue(circ_queue* q) {

		int a = -1;
		if (isempty(q)) {
			cout << "Queue empty" << endl;
		}
		else {

			q->f = (q->f + 1) % q->size;
			a = q->arr[q->f];
			cout << "Dequeued :" << a << endl;
		}

	}
};

int main()
{
	circ_queue q;

	q.size = 4;
	q.f = 0;
	q.r = 0;

	q.arr = new int[q.size];

	//ENQUEUE

	q.enque(&q, 12); // Adding Element 
	q.enque(&q, 16); // Adding Element 
	q.enque(&q, 19); // Adding Element 
	
	

	q.dequeue(&q);  // Remove Element 
	q.dequeue(&q);  // Remove Element 
	q.dequeue(&q);  // Remove Element 
	
	q.enque(&q, 19); // Adding Element at start where the element is dequeued 

	q.isempty(&q);
	q.isfull(&q);



}
