
#include <iostream>
#include<string >

using namespace std;


class Node {
public:

    int data;
    Node* next;

    void linkedlist_traversal(Node *head) {
       
        Node* ptr = head;

        do {
            cout << " The data store is : " << ptr->data << endl;
            ptr = ptr->next;

        } while (ptr!= head);
}
    Node* insert_at_first(Node* head, int data1) {
        
        Node* newnode = new Node; // New node creation 
        newnode->data = data1;   // Giving new node data 
        
        Node* ptr = head->next; 

        while (ptr->next != head) { // using it to move the p pointer to last node 
            ptr = ptr->next;
        }
        // Now p is present at last node of circular linked -list  

        ptr->next = newnode;
        newnode->next = head;

        return newnode;

    }
    Node* insert_at_end(Node* head, int data1) {

        Node* newnode = new Node;
      
        newnode->data = data1;
        Node* ptr = head->next;      
     

        while (ptr->next != head) {
            ptr = ptr->next;
          
        }
        newnode->next = head;
        ptr->next = newnode;
      

        return newnode;
    }
    Node* insert_at_index(Node* head, int index,int data1) {
        Node* ptr = head;

            Node * newnode = new Node;
        newnode->data = data1;
            int i = 0;
        while (i < index - 1) {
            ptr = ptr->next;

        }
        newnode->next = ptr->next;
        ptr->next = newnode;

    }
};




int main()
{
    Node* Head= new Node;
    Node* Secondnode = new Node;
    Node* Third = new Node;

    //Assign data 

   Head->data = 12;
   Head->next = Secondnode;

   Secondnode->data = 13;
   Secondnode->next = Third;

   Third->data = 14;
   Third->next = Head;

   Node ab;

   ab.linkedlist_traversal(Head);

  // Head = ab.insert_at_first(Head, 54);

  Head= ab.insert_at_end(Head, 54);
   ab.linkedlist_traversal(Head);
}

