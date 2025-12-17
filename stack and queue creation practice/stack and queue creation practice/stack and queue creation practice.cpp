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

/*
 // Queue using array 


class que {

public:
	int r;
	int f;
	int size;
	int* arr;

	bool is_full(que* s) {
		if (s->r == s->size - 1) {
			cout << "full " << endl;
			return true;
		}
		else {
			return false;
		}
	}
	bool is_empty(que* s) {

		if (s->f == -1 || f > r) {
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

*/

void merge(int a[], int l, int m, int h) {

	int i = l;
	int j = m+1;
	int k = l;

	int b[100];

	while (i <= m && j <= h) {

		if (a[i] < a[j]) {
			
			b[k] = a[i];
			i++;
			k++;

		}
		else if (a[j] <= a[i]) {
			b[k] = a[j];
			j++;
			k++;
		}

	}
	while (i <= m) {
		b[k] = a[i];
		i++;
		k++;

	}
	while (j <= h) {
		b[k] = a[j];
		j++;
		k++;
	}
	for (int o = l; o <= h; o++) {
		a[o] = b[o];
	}


}

void merge_sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;;
			merge_sort(a, l, m);
			merge_sort(a, m + 1, h);

			merge(a, l, m, h);
	}

}


int partition(int a[], int l, int h) {

	int i = l + 1;
	int j = h;

	int pivot = a[l];

	do {

	while (i<=h && a[i] <= pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}

		if (i < j) {
			swap(a[i], a[j]);
		}

	} while (i < j);

	swap(a[j], a[l]);

	return j;



}


void quicksort(int a[], int l, int h) {

	if (l < h) {

		int pivot = partition(a,l,h);

		quicksort(a, l, pivot - 1);
		quicksort(a, pivot + 1, h);



	}


}

void merge_(int a[], int l, int m, int h) {

	int i = l;
	int j = m + 1;
	int k = l;
	int b[1000];

	while (i <= m && j <= h) {

		if (a[i] <= a[j]) {
			b[k] = a[i];
			k++;
			i++;
		}
		else{
			b[k] = a[j];
			k++;
			j++;


		}
	}
	while (i <=m) {
		b[k] = a[i];
		k++;
		i++;
	}
	while (j <= h) {
		b[k] = a[j];
		k++;
		j++;
	}
	for (int o = l; o <= h; o++) {
		a[o] = b[o];
	}
 }


void merge_sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, h);

		merge_(a, l, m, h);


	}



}

int partition_(int a[], int l, int h) {

	int pivot = a[l];
	int i = l + 1;
	int j = h;

	do {

		while (i <= h && a[i] <= pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}
		if (i < j) {
			swap(a[i], a[j]);

		}
		
	} while (i < j);

	swap(a[j], a[l]);






	return j;
}

void quick_sort(int a[], int l, int h) {

	if (l < h) {
		int pivot = partition_(a,l,h);
		quick_sort(a, l, pivot - 1);
		quick_sort(a, pivot + 1, h);


	}
}

void heapify(int a[], int n , int i) {

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && a[largest] < a[left]) {
		largest = left;
	}
	if (right < n && a[largest] < a[right]) {
		largest = right;
	}

	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void  heap_sort(int a[], int n) {

	// Build max heap ;

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);

	}

	// Extract element from array one by one 

	for (int i = n - 1; i > 0; i--) {
		swap(a[i], a[0]);
		heapify(a,  i,0);
	}
}

void heapif(int a[], int n, int i) {

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left<n && a[left]>a[largest]) {
		largest = left;
	}
	if (right <n && a[right]>a[largest]) {
		largest = right;
	}

	if (largest != i) {

		swap(a[i], a[largest]);
		heapif(a, n, largest);

	}



}

void heap__sort(int a[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);
	}
	for (int i = n - 1; i > 0; i--) {
		swap(a[i], a[0]);
		heapify(a,i,0);

	}

}

void merging(int a[], int l , int m ,int h) {

	int i = l;
	int j = m + 1;

	int k = l;
	int b[1000];


	while (i <= m && j <= h) {

		if (i <= m && a[i] <= a[j]) {
			b[k] = a[i];
			i++;
			k++;
		}
		else {
			b[k] = a[j];
			k++;
			j++;

		}
		if (i < j) {
			swap(a[i], a[j]);
}
	}
	while (i <= m) {
		b[k] = a[i];
		i++;
		k++;
	}
	while (j <= h) {
		b[k] = a[j];
		k++;
		j++;
	}

	for (int o = l; o <= h; o++) {
		a[o] = b[o];
	}

}

void merging_sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		merging_sort(a, l, m);
		merging_sort(a, m+1, h);

		merging(a, l, m, h);
	}


}
int parti(int a[], int l , int h ) {

	int i = l + 1;
	int pivot = a[l];
	int j = h;

	do {
		while (i <= h && a[i] <= pivot) {
			i++;
		}
		while (j>=l && a[j] > pivot) {
			j--;
		}

		if (i < j) {
			swap(a[i], a[j]);
		}

	} while (i < j);

	swap(a[j], a[l]);

	return j;
}

void qsort(int a[], int l, int h) {

	if (l < h) {
		int pivot = parti(a,l,h);
		qsort(a, l, pivot - 1);
		qsort(a, pivot + 1, h);


	}


}

void heapi(int a[], int i, int n) {

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left <n && a[left] > a[largest]) {
		largest = left;
	}
	if (right < n && a[right] > a[largest]) {
		largest = right;
	}
	if (largest != i) {

		swap(a[i], a[largest]);
		heapi(a, largest,n);

	}
}


void heapisort(int a[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {

		heapi(a, n,i);
	}

	for (int i = n - 1; i > 0; i--) {

		heapi(a, i, 0);
		swap(a[i], a[0]);
	}

}


void  heapp_sort(int a[], int i, int n) {

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left<n && a[left]>a[largest])
	{
		largest = left;
	}
	if (right <n && a[right]>a[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(a[i], a[largest]);
		heapp_sort(a, largest, n);
	}
}

void h(int a[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {

		heapp_sort(a, i, n);

	}
	for (int i = n - 1; i > 0; i--) {
		swap(a[i], a[0]);
		heapp_sort(a, 0, i);
	}
}

int main() {

	int a[] = { 11,23,55,1,2,3 };
	int size = 6;

	return 0;
}