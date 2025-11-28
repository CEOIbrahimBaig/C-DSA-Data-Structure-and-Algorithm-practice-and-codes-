// Implement Queue using Array.cpp 

#include <iostream>
#include<string>

using namespace std;



class queue{

public:

	int size;
	int f; // First value in Queue
	int r; // Last avalue in Queue
	int *arr;


	int  isfull(queue *q) {
		if (q->r == q->size) {
			cout << "The Queue using ARRAY is FULL " << endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	int isempty(queue* q) {
		if (q->r == q->f) {
			cout << "The Queue using ARRAY is Empty " << endl;
			return 1;
		}
		else {
			return 0;
		}
	}


	void enque(queue* q, int val) {

		if (isfull(q)) {
			cout << "Queue Full " << endl;
		}
		else {

			q->r++;
			q->arr[q->r] = val;
			cout << "Enqueued :" << val << endl;
		}

	}
	void dequeue(queue* q) {

		int dequed_val = -1;
		if (isempty(q)) {
			cout << "Queue empty" << endl;
		}
		else {

			q->f++;
			dequed_val = q->arr[q->f];
			cout << "Dequeued :" << dequed_val << endl;
		}

	}
};

int main()
{
	queue q;

	q.size = 5;
	q.f = -1;
	q.r = -1;

	q.arr = new int[q.size];

	//ENQUEUE

  q.enque(&q, 12); // Adding Element 
  q.enque(&q, 16); // Adding Element 
  q.enque(&q, 19); // Adding Element 
  q.enque(&q, 12); // Adding Element 
  q.enque(&q,123); // Adding Element 

  q.dequeue(&q);  // Remove Element 
  q.dequeue(&q);  // Remove Element 
  q.dequeue(&q);  // Remove Element 
  q.dequeue(&q);  // Remove Element 
  q.dequeue(&q);  // Remove Element 


 q.isempty(&q);
  q.isfull(&q);

  

}
