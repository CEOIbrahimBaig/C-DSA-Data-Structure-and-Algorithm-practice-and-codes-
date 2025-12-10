// All doubly linkedlist and circular linkedlist functions ,codes.cpp 
#include <iostream>
#include<string >
using namespace std;

/*
class Node {
public:

	int data;
	Node* next;


	// For circular linkedlist 

	Node* circular_traversal(Node* head) {

		if (head == NULL) {
			cout << "The list is empty " << endl;
			return NULL;
		}

		Node* ptr = head;
		cout <<"The data is : "<< ptr->data << endl;
		ptr = ptr->next;
		while (ptr != head) {
			
			cout << "The data is : " << ptr->data << endl;
			ptr = ptr->next;
		}

		return head;

	}
	Node* insert_at_head(Node *head , int val) {

		Node* new_node = new Node;
		new_node->data = val;
		new_node->next = NULL;
		Node* ptr = head;


		if (head == NULL) {
			new_node->next = new_node;
			return new_node;
		}

		while (ptr ->next!= head) {
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->next = head;
		return new_node;

	}
	Node* insert_at_end(Node* head, int val) {

		Node* new_node = new Node;

		new_node->data = val;
		new_node->next = NULL;

		Node* ptr = head;

		if (head == NULL) {
			cout << "list is empty " << endl;
			new_node->next = new_node;
			return new_node;
		}

		while (ptr->next != head) {
			ptr = ptr->next;
		}

		// Now ptr is before head , at tail 
		ptr->next = new_node;
		new_node->next = head;

		return head;
	}

	Node* insert_at_index(Node* head, int val, int index) {

		Node* new_node = new Node;
		new_node->data = val;
		new_node->next = NULL;

		if (head == NULL) {
			new_node->next = new_node;
			return new_node;
		}

		if (index == 0) {
			insert_at_head(head, val);
		}

		Node* ptr = head;
		int i = 0;

		while (i < index - 1) {
			ptr = ptr->next;
			i++;
		}

		new_node->next = ptr->next;
		ptr->next = new_node;

		return head;

	}
	
	//For  doubly linkedlist 



};
*/

class Node {
public:

	int data;
	Node* next;
	Node* prev;


	void traversal(Node* head) {

		Node* ptr = head;

		if (head == NULL) {
			cout<<"lINKED-LIST IS EMPTY BETA KIN  KAHBO MAI HO "<<endl;
			return;
		}

		while (ptr->next != NULL) {
			cout << "Data : " << ptr->data << endl;
			ptr = ptr->next;
		}
	
		ptr = ptr->prev;

		while (ptr->prev != NULL) {
			cout << "Data : " << ptr->data << endl;
			ptr = ptr->prev;
		}

	}


	Node* delete_at_head(Node *head) {

		if (head == NULL) {

			cout << "Empty " << endl;

			return NULL;

		}
		if (head->next == NULL) {
			delete(head);
			return NULL;
		}
		Node* ptr = head;
		Node* AB = head;

		ptr = ptr->next;
		ptr->prev = NULL;
		delete(AB);
		return ptr;

	}
	Node* delete_at_end(Node* head) {

		if (head == NULL)
		{
			cout << "Empty" << endl;
			return NULL;
		}
		Node* ptr = head;

		if (head->next == NULL) {
			delete(head);
			return NULL;
		}
		
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		Node* before_ptr = ptr -> prev;
		before_ptr->next = NULL;
		delete(ptr);
		return head;

	}
	Node* delete_at_index(Node* head,int index) {

	
		int node_amount = 0;
		Node* count = head;
		while (count != NULL) {
			count = count->next;
			node_amount++;
		}
		if (index > node_amount-1) {
			cout << "Wrong value entered" << endl;
				return NULL;
		}
		else {
			if (node_amount == 0) {
				cout << "Khalli jayb hai  teri oye  " << endl;

				return NULL;
			}
			else if (node_amount == 1) {
				delete(head);
				return NULL;
			}
			else {
				int i = 0;
				Node* ptr = head;
				while (index < i ) {
					ptr = ptr->next;
				}
				Node* before_ptr = ptr->prev;
				Node* after_ptr = ptr->next;

				before_ptr->next = after_ptr;
				after_ptr->prev = before_ptr;
				delete(ptr);
				return head;
			}


		}
		

	}
};




int main()
{
  



	return 0; 
}






