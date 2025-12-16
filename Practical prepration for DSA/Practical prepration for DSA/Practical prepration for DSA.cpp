#include<iostream>
#include<string>


using namespace std;


// Merge sort 
/*
void  merge(int a[], int l, int m, int h) {

	int i = l;
	int j = m+1 ;  // Did mistake here forgot to write j=m+1 , instead wrote j=m;
	int k = l;

	int o[1000000];

	while (i <= m && j <= h) {

			if (a[i] < a[j])
			{
				o[k] = a[i];
				k++;
				i++;
			}
			else {
				o[k] = a[j];
				j++;
				k++;
			}
	}
	while (i <= m) {
		o[k] = a[i];
		k++;
		i++;

	}
	while (j <= h) {
		o[k] = a[j];
		j++;

	}

	for (int i = l; i <= h; i++) {
		a[i] = o[k];
	}
	
}




void  merge_sort(int a[], int l, int h) {

	if (l < h) {

		int m = (l + h) / 2;

		merge_sort(a, l, m);
		merge_sort(a, m + 1, h);

		merge(a,l,m,h);
	}


}

 // Practice for Quick_sort 

int partition(int a[], int l , int h ) {

	int pivot = a[l];

	int i = l+1;  // In QUIZ I forgot to use l+1 and did i=l;
	int j = h;

	   //	Mistakes 
	   // #1 I used while loop instead of do while loop 
	  //  #2 I did not used if inside first while loop (currently it is do while loop )= meaning i did not used i<j condition after while loops  
	do{
		while (a[i] < pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}
	
		if (i < j) {
			swap(a[j], a[i]);
		}

		
	} while (i < j);
	swap(a[j], a[l]);
	
	return j;

}



void quick_sort(int a[], int l, int h) {

	if (l < h) {

		int pivot = partition(a,l,h);

		quick_sort(a, l, pivot-1);
		quick_sort(a, pivot + 1, h);

	}


}
*/
/*

/// Now  BINARY SEARCH TREE 

class Node {
public:

	int data;
	Node* left;
	Node* right;


	Node* insert(Node* head , int val) {
		
		// create new node and give it data 
		
		Node* new_node = new Node;
		new_node->data = val;
		new_node-> left = NULL;
		new_node->right = NULL;
		
		// First edge case is if the list is empty 

		if (head == NULL) {
			head= new_node;   // Did mistake here by writing new_Node = head which make new node null 
			return head;
		}

		Node* ptr = head;
		Node* ptr_root ;
		while (ptr!= NULL) {
			ptr_root = ptr;

			if (ptr->data < val) {
				ptr = ptr->right;
			}
			else {
				ptr = ptr->left; // Did mistake here by writing ptr=ptr->right again
			}
			
		}
		if (ptr_root->data < val) {
			ptr_root->right = new_node;
		}
		else {
			ptr_root->left = new_node;
		}
		return head;
	}
	Node* search(Node* head, int val) {

		Node* ptr = head;

		if (head == NULL) {
			cout << " khali hai  bhai ! " << endl;
			return NULL;
		}
 
	
		while (ptr!=NULL  && ptr->data!=val) {

			if (ptr->data > val) {

				ptr = ptr->left;
			}
			else {
				ptr = ptr->right;
			}
		}
		if (ptr == NULL) {
			cout << "data not found " << endl;
			return ptr;
		}
		else if(ptr->data==val){
			cout << "DATA IS FOUND " << endl;
			return ptr;
		}



	}

	Node* pre_order_traversal(Node* head) {

		if (head == NULL) {
			return head;                                // Mistakes 
			                                           // #1 I use while loop however in recursion you don't need any kind of loop . 		                 
		}                                             //  #2 I did recursion for left then data then right which is for in order not pre .
		    cout << "DATA : " << head->data << endl; //   #3 I did not created base condition .
			pre_order_traversal(head->left);
			pre_order_traversal(head->right);
	
	}
	Node* in_order_traversal(Node* head) {

		if (head == NULL) {   // If head is NULL 
			return head;
		}
	
		in_order_traversal(head->left);
		cout << "DATA : " << head->data << endl;
		in_order_traversal(head->right);

	}
	Node* post_order_traversal(Node* head) {

		if (head == NULL) {
			return head;
		}
		post_order_traversal(head->left);
		post_order_traversal(head->right);
		cout << "Data : " << head->data << endl;
	}

	Node* delete_node(Node* head, int val) {

		Node* ptr = head;
		Node* ptr_root = head;

		if (head == NULL) {
			cout << "List is empty " << endl;
			return NULL;
		}


		// First trying to find the node 

		while (ptr != NULL && ptr->data != val) {

			ptr_root = ptr;

			if (ptr->data < val) {
				ptr = ptr->right;
			}
			else {
				ptr = ptr->left;
			}
		}
		if (ptr->data != val) {
			cout << "The given value is not present in BST" << endl;
			return head;
		}

		// Case 1 if the node to delete is the leaf node 


		if (ptr_root == ptr  && ptr->right==NULL && ptr->left==NULL) {
			delete(ptr);
			return NULL;
		}


		if (ptr->left == NULL && ptr->right == NULL) {

			if (ptr_root->left == ptr) { // If leaf node to delete is the left node of parent 
				cout << "Dequeued : " << ptr->data << endl;
				ptr_root->left = NULL;
				delete(ptr);
				return head;
			}
			else if(ptr_root->right==ptr){
				cout << "Dequeued : " << ptr->data << endl;
				ptr_root->right = NULL;
				delete(ptr);
				return head;
			}

		}
		// Case 2 if Node to delete has a left child but no right child

		if (ptr->right == NULL && ptr->left != NULL) {

			if (ptr_root->right == ptr) {
				ptr_root->right = ptr->left;
				delete(ptr);
				return head;
			}
			else if (ptr_root->left==ptr){
				ptr_root->left = ptr->left;
				delete(ptr);
				return head;
			}

		}
		// Case 3 If node to delete has a right child but no left child
		if (ptr->right != NULL && ptr->left == NULL) {

			if (ptr_root->right == ptr) {
				ptr_root->right = ptr->right;
				delete(ptr);
				return head;
			}
			else if (ptr_root->left == ptr) {
				ptr_root->left = ptr->right;
				delete(ptr);
				return head;
			}

		}
	  // Case 4 if the node to delete is root node 

		Node* largest = ptr->left;
		Node* largest_root = ptr->left;

		while (largest ->right!= NULL) {
			largest_root = largest;

			largest = largest->right;

		}
		ptr->data = largest->data;

		if (largest_root->left == largest) {
			largest_root->left = NULL;
			delete(largest);
			return head;
		}
		else {
			largest_root->right = NULL;
			delete(largest);
			return head;
		}
	}
	Node* smallest(Node* head) {
		Node* ptr = head;

		while (ptr->left != NULL) {
			ptr = ptr->left;
		}
		return ptr;
	}
	Node* largest(Node* head) {

		Node* ptr = head;

		while (ptr->right != NULL) {
			ptr = ptr->right;
		}

		return ptr;

	}

	
};
*/



/*
int main() {

	int a[] = { 2,42,1,5,35 };
	int size = 5;


	Node* HEAD = new Node;
	HEAD->data = 12;

	HEAD->left = NULL;
	HEAD->right = NULL;




	return 0;
}
*/

// Circular Linkedlist
/*

class Node {

public:

	int data;
	Node* next;

	void traversal(Node* head) {

		Node* ptr = head;
		do {
			cout << "Data  :" << ptr->data << endl;
			ptr = ptr->next;

		} while (ptr != head);

	}
	Node* insert_at_first(Node* head,int  val) {

		Node* ptr = head;

		Node* new_node = new Node;
		new_node->next = NULL;
		new_node->data = val;

		if (head == NULL) {
			cout << "List is empty" << endl;
			new_node->next = new_node;
			
			return new_node;
		}

		while (ptr->next != head) {

			ptr = ptr->next;

		}
		ptr->next = new_node;
		new_node->next = head;
		return new_node;
	}
	Node* insert_at_end(Node* head, int val) {

		Node* ptr = head;

		Node* new_node = new Node;
		new_node->data = 12;
		new_node->next = NULL;

		if (head == NULL) {
			cout << "List is empty" << endl;
			new_node->next = new_node;

			return new_node;
		}

		

		while (ptr->next != head) {
			ptr = ptr->next;
		}

		ptr->next = new_node;
		new_node->next = head;

		return  head;
		
	}

	Node* insert_at_index(Node* head, int index, int val) {

		Node* ptr = head;
		
		Node* new_node = new Node;
		new_node->next = NULL;

		new_node->data = val;

		if (head == NULL) {
			new_node->next = new_node;
			return new_node;
		}

		if (index == 0) {
			while (ptr->next != head) {
				ptr = ptr->next;
			}
			ptr->next = new_node;
			new_node->next = head;

			return new_node;
		}
		Node* new_ptr = head;
		int i = 0;
		while (i < index - 1) {
			new_ptr = new_ptr->next; 
			i++;             // Forgot to increment i 
			if (new_ptr == head) {
				cout << "Index out of bonds " << endl;
				                       
				delete(new_node);
				return head;

			}
		}

		
		new_node->next = new_ptr->next;
		new_ptr->next = new_node;

		return head;
	}

	Node* delete_at_first(Node* head) {

		Node* ptr = head;
		

		if (head == NULL) {  // If No Node is present 

			cout << "List is empty " << endl;
			return NULL;
		}
		
		if (head->next == head) { // If only one Node is present 

			delete(ptr);
			return NULL;
		}

		while (ptr->next != head) {
			ptr = ptr->next;
		}
		// Now ptr is at head ;
		Node* del = head;
		head = head->next;
		
		ptr->next = head;

		delete(del);

		return head;
	}
	Node* delete_at_end(Node* head) {

		if (head == NULL) {
			cout << "The list is empty " << endl;
			delete(head);
			return NULL;
		}
		if (head->next == head) {

			delete(head);
			return NULL;

		}

		Node* ptr = head->next;
		Node* ptr_root = head;

		while (ptr->next != head) {
			ptr_root = ptr;
			ptr = ptr->next;
		}
		// Now ptr is at end whihc we have to delete 

		ptr_root->next = head;
		delete(ptr);

		return head;
		

	}
	Node* delete_at_index(Node* head, int index) {

		if (head == NULL) {
			delete(head);
			return NULL;
		}
	
		Node* ptr = head;
		Node* ptr_root = head;
		int i = 0;

		while (i < index - 1) {
			ptr_root = ptr;
			ptr = ptr->next;

			if (ptr == head) {
				cout << "Index out of bond " << endl;
				return NULL;
			}
			i++;                 //Forgot to increment i 
		}

		ptr_root->next = ptr->next;
		
		delete(ptr);
		return head;
	}
	
};


int main() {
	//  Creating Node 
	Node* head = new Node;
	Node* secound = new Node;

	//Assigning Data
	head->data = 12;
	secound->data = 22;

	//Linking chain 
	head->next = secound;
	secound->next = head;





	return 0;
}
*/
/*
class Node {
public:

	int data; 
	Node* next;
	Node* prev;


	void traversal(Node* head) {
		
		if (head == NULL) {
			cout << "List is empty " << endl;
			return;
		}


		Node* ptr = head;

		while (ptr->next != NULL) {
			cout << "Data : " << ptr->data << endl;
			ptr = ptr->next;
		}
		cout<< "Data : " << ptr->data << endl;

		while (ptr->prev!= NULL) {
			cout<< "Data : " << ptr->data << endl;
			ptr = ptr->prev;

		}
		cout<< "Data : " << ptr->data << endl;

	}

	Node* insert_at_start(Node* head, int val) {


		Node* new_node = new Node;
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->data = val;

		if (head == NULL) {

			head = new_node;
			return new_node;
		}

		Node* ptr = head;

		new_node->next = ptr;
		ptr->prev = new_node;

		return new_node;



	}
	Node* insert_at_end(Node* head, int val) {

		Node* new_node = new Node;

		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->data = val;
		
		if (head == NULL) {
			head = new_node;
			return new_node;
		}

		Node* ptr = head;

		
		while (ptr->next != NULL) {
			
			ptr = ptr->next;

		}
		ptr->next = new_node;
		new_node->prev = ptr;

		return head;
	}
	Node* insert_at_index(Node* head, int index,int val) {

		Node* new_node = new Node;  

		new_node->data = val;
		new_node->next = NULL;
		new_node->prev = NULL;

		if (head == NULL) {
			head = new_node;
			return new_node;

		}
		if (index == 0) {
			new_node->next = head;
			new_node->prev = NULL;
			if (head != NULL) {
				head->prev = new_node;
			}
			return new_node; // new head
		}

		Node* ptr = head;
		int i = 0;
		
		while (i < index - 1) {
			ptr = ptr->next;

			if (ptr == NULL) {
				cout << "Out of bond request" << endl;
				return NULL;
			}

			i++;
		}
		new_node->next = ptr->next;
		ptr->next = new_node;
		new_node->prev = ptr;
		

		return head;

	}
	Node* delete_at_start(Node* head) {

		if (head == NULL) {

			cout << "List is empty " << endl;

			return head;

		}
		if (head->next == NULL) {
			
			delete(head);
			return NULL;
		}

		Node* ptr = head;
		head = head->next;
		head->prev = NULL;

		delete(ptr);

		return head;
	}
	Node* delete_at_end(Node* head) {

		if (head == NULL) {
			cout << "List  is empty" << endl;
			return NULL;
		}
		if (head->next == NULL) {
			delete(head);
			return NULL;
		}

		Node* ptr = head;
		Node* before_ptr = head;
		while (ptr->next != NULL) {
			before_ptr = ptr;
			ptr = ptr->next;

		}
		ptr -> prev = NULL;
		before_ptr->next = NULL;
		delete(ptr);

		return head;

	}
	Node* delete_at_index(Node *head , int index ) {

		Node* ptr = head;
		
		if (head == NULL) {

			cout << "List is empty" << endl;

			return head;
		}
		if (head->next == NULL) {
			delete (ptr);
			return NULL;
		}

		int i = 0;

		while (i < index - 1) {      // It takes to one node before required index
			ptr = ptr->next;
			if (ptr == NULL) {
				cout << "Out of bond request " << endl;
				return NULL;
			}
			i++;
		}
		
		Node* bef = ptr->prev;

		if (ptr->next != NULL) {
			bef->next = ptr->next;
			ptr->next->prev = bef;
		}
		else {
			bef->next = NULL;
		}
		delete(ptr);
		return head;




	}
	Node* searc(Node* head, int val) {

		Node* ptr = head;
		if (head == NULL) {

			cout << "Empty";
			return NULL;
		}
		while (ptr != NULL && ptr->data != val) {
			ptr = ptr->next;
		}
		if (ptr == NULL) {
			cout << "NOT Found ";
		}
		else {
			cout << "Data found " << endl;

		}
		return ptr;

	}


};
*/
/*
int main() {

	// Create Nodes 
	Node* head = new Node;
	Node* secound = new Node;

	//Assign data 

	head->data = 12;
	secound->data = 22;

	// Linking them 

	head->next = secound;
	head->prev = NULL;

	secound->next = NULL;
	secound->prev = head;




	return 0;
}
*/

// Queue creation using Linkedlist  

/*
class Node {

public:

	int data;
	Node* r;
	Node* f;
	Node* next;

	Node() {
		r = f = NULL;
	}

bool isempty() {

	if (f == NULL) {
		cout << "Stack is empty " << endl;
		return true;
	}
	else {
		return false;
	}

   }

Node* enqueue(int val) {

	Node* new_node = new Node;
	new_node->data = val;
	new_node->next = NULL;  // Did mistake here as I forgot to declare this line 

	if (isempty()) {

		r = f = new_node;
		return new_node;
		
	}
	r->next = new_node;
	r = r->next;
	
	cout << "Enqueue : " << new_node->data << endl;
	return r;


}

void dequeue() {

	if (f == NULL) {
		cout << "List is empty " << endl;
		return ;
	}

	Node* ptr = f;

	if (f->next != NULL) {
		f = f->next;

		cout << "Removed :" << ptr->data << endl;
	}
	else {
		f=NULL;
		r = NULL;

		cout << "Now the list is empty as you dequeued " <<ptr->data<< endl;
		return;
	}
	delete(ptr);

	return;


} 
Node* peek() {   // Peak means printing the front value 

	if (f == NULL) {
		cout << "List is empty " << endl;
		return NULL;
	}
	cout << "The front value is " << f->data << endl;
	return f;

}
void display() {

	if (f == NULL) {
		cout << "List is empty " << endl;
		return;
	}

	Node* ptr = f;
	
	while (ptr!= NULL) {   // Did a mistake here as I  wrote ptr->next!=NULL which does not print last node 

		cout << "Data : " << ptr->data << endl;
		ptr = ptr->next;

	}
}



};

*/


// Stack Creation using linkedlist 
/*
class Node {
public :

	int data;
	int size;
	Node* next;
	Node* top;

	Node() {
		size = 0;
	}

	bool is_empty() {
		if (size == 0) {
			cout << "List is  empty " << endl;
			return true;
		}
		else {
			return false;
		}
	}

	Node* push(int val) {  // Push means inserting a node in stack // 

		Node* new_node = new Node;
		new_node->data = val;
		new_node->next = NULL;

		if (is_empty()) {
			top = new_node;
			cout << "Pushed : " << top->data << endl;
			size++;
			return new_node;
		}

		
		new_node->next = top;
		top = new_node;

		size++;

		return top;



	}
	void pop() {

		if (is_empty()) {
			cout << "lIST IS EMPTY" << endl;
			return ;
		}

		cout << "Dequeued : " << top->data << endl;
		Node* ptr = top;
		top = top->next;
		
		delete(ptr);

		size--;
	}
	Node* peek() {
		
		if (is_empty()) {
			cout << "lIST IS EMPTY" << endl;
			return;
		}
		cout << "Data : " << top->data << endl;
		return top;

  }
void display() {

		if (top == NULL) {
			cout << "List is empty " << endl;
			return;
		}
		Node* ptr = top;

		while (ptr != NULL) {
			cout << ptr->data << endl;
			ptr = ptr->next;
		}


	}
int getsize() {

	return size;

}

};

*/


// Stack Creation using array 
/*
class stack {

public:

	int* arr;
	int size;
	int top;

	bool is_empty(stack *ptr) {

		if (ptr->top < 0) {
			cout << "Stack is empty " << endl;
			return true;
		}
		else {
			return false;
		}

	}

	bool is_full(stack* a) {

		if (a->top == a->size - 1) {
			cout << "Stack is full " << endl;
			return true;
		}
		else {
			return false;
		}
	}

	void push(stack *a, int val) {

		if (is_full(a)) {
			return;
		}
		a->top++;
		a->arr[a->top] = val;

	}
	int pull(stack* a) {

		if (is_empty(a)) {

			cout << "Stack is empty" << endl;

			return -1; 
		}
		int val_deleted = a->arr[a->top];
		a->top--;

		return val_deleted;

	}
	int get_element(stack* s, int index) {
		if (index < 0 || index > s->top) {
			cout << "Invalid index" << endl;
			return -1;  // or some error value
		}
		return s->arr[index];
	}
	int stack_top(stack* s) {

		if (is_empty(s)) {
			return;

		}
		int val = s->arr[s->top];

		return val;
	}
};




int main() {
	stack *s = new stack;

	s->size = 10;
	s->top = -1;
	s->arr = new int[s->size];

	return 0;

}
*/



// Again stack creation using array 

/*

class stack {

public:

	int size;
	int top;
	int* arr;

	bool is_empty(stack*s) {
		if (s->top < 0) {
			cout << "Empty " << endl;
			return true;

		}
		else {
			return false; 
		}
     }
	bool is_full(stack* s) {
		if (s->top == s->size - 1) {  // Did mistake here  as i wrote smaller instead of == 
			cout << "Stack overflowed " << endl;
			return true;
		}
		else {
			return false;
		}
	}
	void push(stack* s, int val) {

		if (is_full(s)) {
			cout << "FULL" << endl;
			return;
		}

		s->top++;
		s->arr[s->top] = val;



	}
	int pull(stack* s) {

		if (is_empty(s)) {
			cout << "Empty " << endl;
			return;

		}

		int val = s->arr[s->top];
		s->top--;


	}

void display(stack* a) {
	if (is_empty(a)) {
		cout << "Stack is empty" << endl;
		return;
	}

	for (int i = a->top; i >= 0; i--) {
		cout << a->arr[i] << endl;
	}
}

};



int main() {

	stack *s= new stack;
	s->size = 12;
	s->top = -1;
	s->arr = new int[s->size];



	return 0;
}
*/

// Now creating queueu using linkedlist 

/*

class queue {

public:

	int* arr;
	int r;
	int f; 
	int size;

	bool is_empty() {

		if (f == r && r == -1) {
			cout << "Empty" << endl;
			return true;

		}
		else {
			return false;
		}
	}
	bool is_full() {
		if (r == size - 1) {
			cout << "Full" << endl;
			return true;
		}
		else {
			return false;
		}
	}
	void add(queue* s, int val) {

		if (s->is_full()) {
			cout << "Empty" << endl;
			return;
		}
		
		if (s->f == -1) { // if list was empty 
			s->f = 0;
		}
		s->r++;
		s->arr[r] = val;

	}
	int remove(queue* s) {

		if (s->is_empty()) {
			cout << "Empty" << endl;
			return -1;
		}

		if (s->f >s->r) {  // if list become empty 
			s->r = -1;
			s->f = -1;
		}
		int removed = s->arr[s->f];
		s->f++;
		return removed;
	}
	void display(queue* a) {

		if (a->is_empty()) {
			return;
		}
		int g = f;
		while (g <= a->r) {  // Dont use not equal instead use <
			cout << a->arr[g]<< endl;
			g++;
		}
	

	}
	void peek() {
		if (is_empty()) {
			return;
		}
		cout << arr[f] << endl;
	}
};


int main() {

	queue* s = new queue;
	s->size = 5;
	s->r = -1;
	s->f = -1;
	s->arr = new int[s->size];



	return 0;
}

*/

// Heap Sort 

/*
void heapify(int a[], int n , int i) {

	int largest = i;  //root 
	int left = 2 * i + 1;  //Left child 
	int right = 2 * i +2; //Right child

	if (left<n && a[left]>largest) {
		largest = left;
	}

	if (right<n && a[right]>largest) {
		largest = right;
	}

	if (largest != i) {
		swap(a[largest], a[i]);
		heapify(a, n,largest);
	}

}

void heapsort(int a [],int n) {

	// Creating Max heap 

	for (int i = n / 2 - 1; i >= 0; i--) {

		heapify(a, n, i);
	}

	// Extract element one by one 

	for (int i = n - 1; i > 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i,0);

	}
}
*/
/*
void heapify(int a[], int n , int i) {

	int largest = i;
	int left = i * 2 + 1;
	int right = i * 2 + 2;

	if (left <n && a[left]>largest) {
		largest = left;
	}
	if (right<n && a[right]>largest) {
		largest = right;
	}
	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void heapsort(int a[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {

		heapify(a, n, i);
	}

	for (int i = n - 1; i > 0; i--) {
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}


}

*/


void heapify(int a[], int n, int i) {

	int largest = i;
	int left = 2 * i + 1;
	int  right = 2 * i + 2;

	if (a[left] > largest) {
		largest = left;
	}
	if (a[right] > largest) {
		largest = right;
	}

	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}


}

void heap_sort(int a[], int n, int i) {

	for (int i = n / 2 - 1; i >= 0; i--) {

		heapify(a, n,i );
	}
	for (int i = n - 1; i > 0; i--) {
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}
int main() {

	int a[] = { 1,23,2,4,6,5 };
	int size = 6;


	return 0;
}


