#include<iostream>
#include<string>


using namespace std;


// Merge sort 

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





int main() {

	int a[] = { 2,42,1,5,35 };
	int size = 5;


	Node* HEAD = new Node;
	HEAD->data = 12;

	HEAD->left = NULL;
	HEAD->right = NULL;
	

		
		
	return 0;
}