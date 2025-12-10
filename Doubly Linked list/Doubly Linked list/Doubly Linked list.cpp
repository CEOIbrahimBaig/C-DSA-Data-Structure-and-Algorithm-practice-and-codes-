// Doubly Linked list.cpp : 
#include <iostream>
#include<string>
using namespace std;

class Node {
    
public:

    int data;
    Node* next;
    Node* prev;

    void linkedlisttraversal(Node *head) {

        Node* ptr = head;

        while (ptr->next!= nullptr) {
        
            cout << " The data is : " << ptr->data << endl;
            ptr = ptr->next;
           
        }
      cout<< " The data is : " << ptr->data << endl;
      
      while (ptr != nullptr) {
          cout << " The data is : " << ptr->data << endl;
          ptr = ptr->prev;
      }

        
    }

    //cout << " The data is : " << ptr->data << endl;

};

int main()
{

    Node* N1 = new Node;
    Node* N2 = new Node;
    Node* N3 = new Node;

    // Assign data and link it 

    N1->data = 12;
    N1->next = N2;
    N1->prev = nullptr;

    N2->data = 13;
    N2->next = N3;
    N2->prev = N1;

    N3->data = 14;
    N3->next = nullptr;
    N3->prev = N2;


    Node ak;
    ak.linkedlisttraversal(N1);

}
                  
            