// Linked List concepts.cpp 



// Making Linked list with struct 
/*
#include <iostream>
#include<string>
using namespace std;

struct Node {
    int data;
    struct Node* next;

};

int main()
{
     Node* Head = new Node;
     Node* Second = new Node;
     Node* Third = new Node;

    // Assign data ;

    Head->data = 12;
    Second->data = 22;
    Third->data = 33;

    // Link the node ;

    Head->next = Second;
    Second->next = Third;
    Third->next = nullptr;
    
}
*/

 /*
#include<iostream>
#include<string>
using namespace std;

class Abu {
                      //Linked List Creation with class
public:

    string data;
    Abu* next; // This line makes node a new data type 

    void linkedlist_traversal(Abu *ptr) {  // Making function for traversal of data ( Accesing the data in each linked_list ) 
        while (ptr != nullptr) {

          cout << "Element : " << ptr->data << endl;
          ptr = ptr->next;
        }
    }
};

int main() {

    Abu* Head = new Abu;
    Abu* second = new Abu;
    Abu* Third = new Abu;

    //Assign data ;

    Head->data = "Pehla abu ";
    Head->next = second;

    second->data = "Dosra abu ";
    second->next = Third;

    Third->data = "Akhri abu ";
    Third->next = nullptr;

    Abu aj; // Creating object to run the function .......
    aj.linkedlist_traversal(Head);

    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

class Practice {
    
public:

    string data;
    Practice* new_node;

    void linked_list_traversal(Practice *ptr) // Traversal of Linked List
        //Making the Function to Access each of the message or data ;
    {

        while (ptr != nullptr){

            cout << "The message is : " << ptr->data<< endl;
            ptr = ptr ->new_node;

        }
    }
    Practice*  insert_at_first(Practice* Head, string datag) {
     
        Practice* New_head = new Practice;
        New_head->new_node = Head;
        New_head->data = datag;

        return New_head;
    }

};


int main() {

    Practice* Head = new Practice;
    Practice* Second = new Practice;
    Practice* Third = new Practice;
    Practice* Tail = new Practice;

    // Assigning Data to the Nodes  and Making the chain 

    Head->data = "Pehla ";
    Head->new_node = Second; // Head node linked to Second node 

    Second->data = "Dosra node hai bhai ";
    Second->new_node = Third; // Second Node linked to Third node 

    Third->data = "Tesra node ";
    Third->new_node = Tail; // Third Node linked to Tail 

    Tail->data = "Akrhi node hai bhai , Good bye tata , gaya ";
    Tail->new_node = nullptr; // Tail node linked to nothing ( Null ptr 0

    Practice for_calling_the_function; // Making object to call the function of traversal 

    for_calling_the_function.linked_list_traversal(Head);

   Head= for_calling_the_function.insert_at_first(Head, "naya head ");
  
    for_calling_the_function.linked_list_traversal(Head);


    return 0;
}


*/



/*

#include<iostream>
#include<string >
using namespace std;

class Node {

public:

    string Message;

    Node* next;

    void linked_list_traversal(Node * ptr) {


        while (ptr!=nullptr){

            cout << "The message is : " << ptr->Message << endl;
            ptr = ptr->next;

        }
    }

    Node* insert_at_start(Node *Head,string data) {

        Node* New_node = new Node;
        New_node->Message = data;
        New_node->next = Head;

        return  New_node;
    }

    Node* insert_at_index(Node *head,string data ,int index) {
        Node* index_node = new Node;
        Node* p = head;
        int i = 0;

        index_node->Message = data;
        while (i != index-1) {
            p = p->next;
            i++;

        }
        index_node->next = p->next;
        p->next = index_node;

        return head;
  }
};


int main() {

    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;
    Node* Tail = new Node;


    // Assigning data ;

    Head->Message = "First Message ";
    Head->next = Second;

    Second->Message = "Second Message ";
    Second->next = Third;

    Third->Message = "Third Message ";
    Third->next = Tail;

    Tail->Message = "Last Message ";
    Tail->next = nullptr;

    Node ac;

   // ac.linked_list_traversal(Head);

  //  Head = ac.insert_at_start(Head, "New node made message");

  Head=  ac.insert_at_index(Head, "yay third index pr add hoga ", 2);
    ac.linked_list_traversal(Head);
    return 0;
}*/



#include<iostream>
#include<string>
using namespace std;

class Node {
    
public:

    string Message;
    Node* next;

    // For Accessing or Showing each Message in the Node 

    void linked_list_trversal(Node * ptr) {

        
        while (ptr!=nullptr){
            
            cout << " The Message store is "<<ptr->Message << endl;
            ptr = ptr->next;

        }
    }
    // Case 1 : For inserting a new node at start 
    Node* insert_at_first(Node* head, string d) {

        Node *new_node = new Node;
        new_node->Message = d;

        Node* ptr = head;

        new_node->next = ptr;

        return new_node;
    }

    Node* insert_at_index(Node* head, string d, int index) {

        Node* new_node = new Node;
        new_node->Message = d;

        Node* ptr = head;
      
        int i = 0;
        while (i != index - 1) {

            ptr = ptr->next;
            
            i++;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;

        return new_node;
    }
    Node* end_node_insertion(Node* head, string data) {

        Node* new_node = new Node;
        Node* ptr = head;
        new_node->Message = data;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = NULL;

        return new_node;
    }

    Node *linked_list_insertion_at_start(Node* head, string abj) {

        Node* New_node = new Node;  // Creation of new node 
        New_node->next = head;     // Linking it to next node
        New_node->Message = abj;  // Adding Message in the node 
        return New_node;   
    }
    //Case 2 : For inserting a Node at certain index 

    Node* Linked_list_insertion_at_index(Node* ptr, string data, int index) {

        Node* indexnode = new Node; // Creating New Node 
        indexnode->Message = data; // Giving data to the New Node 

        int i = 0; // Making it for Helping in  Straching the pointer to one digit before Index for attchment of Chain 
        // ( Helping in Creation of linkage )

        while (i != index - 1) {// Creating this condition to stretch p to one digit before Index

            ptr = ptr->next;
            i++;
        }
        indexnode->next = ptr->next;// Linking the index node with the next one 
        ptr->next = indexnode;  // Linking the before Node with the New-node

        return indexnode;
    }

    // Case 3 : For inserting node at End 


    Node* Linked_list_insert_at_end(Node* Head, string s) {


        Node* ptr = Head;
        Node* endnode = new Node;
        endnode->Message = s;

        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = endnode;
        endnode->next = nullptr;
        return Head;
    }

    //Case 4 : For inserting node after certain Node 

    Node* Linked_list_insert_after_node(Node* Head, Node* prevnode,string s) {

        Node* newnode = new Node;
        newnode->Message = s;

        Node* ptr = Head;
      
        newnode->next = prevnode->next;
        prevnode->next = newnode;
       
        return Head;
    }

    Node* delete_index_node(Node* head, int index) {

        Node* ptr = head;
        Node* q = ptr->next;

        int i = 0;

        while (i != index - 1) {
            ptr = ptr->next;
            q = q->next;
        }
        ptr->next = q->next;
        delete(q);
        return head;
    }

    Node* delete_start_node(Node* head) {

        Node* ptr = head;
        head = head-> next;

        delete(ptr);
    }
    Node* delete_end_node(Node* head) {
        Node* ptr = head;
        Node* q = ptr->next;
        while (q->next != NULL) {

            ptr = ptr->next;
            q = q->next;
            
        }
        
        delete(q);
        ptr->next = NULL;

        return head;
    }

    //Case 1 " Delete the first  Node 

    Node* delete_first_node(Node *head) {//For deleting first element in linked list 

        Node* ptr = head; /// A pointer pointing at head 
        head = head->next;
        free(ptr);
        return head;


    }
    // Case 2 : Delete the element at certain index 

    Node* delete_element_at_given_index(Node *Head , int index ) {
        
        Node* p = Head; //Pointing at head 

        Node* q = Head->next; // Pointing at next of head and will be moved till it reach the node we want to delete 

        for (int i = 0; i < index - 1; i++) {
            p = p->next;
            q = q->next;
        }
        p->next = q->next; //Linked the node to next of which node is going to be deleted 

        delete(q);
        return Head;
    }

    // Case 3: Deleting the last Node 

    Node* delete_the_end_node(Node* Head) {

        Node* p = Head;
        Node* q = Head->next;

        while (q -> next != nullptr) {
            p = p->next;
            q = q->next;
        }
        delete(q);
        p->next = nullptr;

        return Head;
    }
    // Case 4 : Delete the Node having certain Message

    Node* delete_node_having_specific_message(Node* Head,string data ){

        Node* p = Head; //Pointing at head 

        Node* q = Head->next; // Pointing at next of head and will be moved till it reach the node we want to delete 

        while (q->Message!=data && q->next!=nullptr) {
            p = p->next;
            q = q->next;
        }
       
        
        if (q->Message ==data) { // Using it for Error Correction 
            p->next = q->next;
            free(q);
        }
      
        return Head;
    }
};
/*
int factorial(int* n) {

    for (int i = n; n > 0; i--) {

    }

}
*/

int main() {

    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;


    // Assigning data and Linking the Chains 

    Head->Message = "First Message ";
    Head->next = Second;

    Second->Message = "Second Message ";
    Second->next = Third;

    Third->Message = "Third Message ";
    Third->next = nullptr;

    Node ak;

  //  cout << " \t Before adding the node in certain index " << endl << endl;

   // ak.linked_list_trversal(Head);
  
  //  Head = ak.linked_list_insertion_at_start(Head, "New Head message");

  //  Head = ak.Linked_list_insertion_at_index(Head, "Newly Created Message hai bro mtlab code kam krgia tera ", 1); //For inserting data at certain index

    
 //   Head = ak.Linked_list_insert_at_end(Head, "End new message "); // For inserting at the end 


  //  Head = ak.Linked_list_insert_after_node(Head, Second, "New node inserted"); //For inserting After the specific Node 
 
    // cout << endl;
   // cout << "\t After adding the node in certain index" << endl << endl;

    //ak.linked_list_trversal(Head); // For displaying the Nodes data 


    cout << "Linked list before deletion " << endl << endl;

    ak.linked_list_trversal(Head);
    cout << endl;

//    Head = ak.delete_first_node(Head); //For deleting first element in linked list 
  
    
    cout << "Linked List after deletion " << endl << endl;

 //   Head = ak.delete_the_end_node(Head); // For deleting the last Node 
  //  Head = ak.delete_element_at_given_index(Head, 2); // For deleting Element at certain index 
    
    Head = ak.delete_node_having_specific_message(Head, "Second Message "); // Delete the Node having certain Message 
    ak.linked_list_trversal(Head);




    return 0;
}





























































