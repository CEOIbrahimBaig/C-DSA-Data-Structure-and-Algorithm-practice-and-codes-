// Queue using linkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Node {
public:
 
    Node* f;
    Node* r;
    int data;
    Node* next;
    Node() {
        f = r = NULL;

    }
    void enqueue(int val) {

        Node *new_node = new  Node;
        new_node->data = val;
        new_node->next = NULL;

        if (new_node == NULL) {// If we can not make any new node then stack is full 
            cout << "Queue is Full " << endl;
        }
        else {
           
            if (r== NULL) {// IF there is no node in the queue both f and r point to same node 
                f = r =new_node;
            }
            else {
                r->next = new_node;// Inserting new node infront of r 
                r = new_node;// Pointing r toward the last new node 
            }
        }
        

    }
    void linkedlisttraversal() {
        Node* ptr = f;
        cout << "Trying to print data" << endl;
        while (ptr != NULL) {
            cout << "The data stored is  " <<ptr->data<< endl;
            ptr = ptr->next;
    }

    }
    int dequeue() {

        int val;
        Node* ptr = f;
        if (f == NULL) {
            cout << "Stack is empty " << endl;

        }
        else {
           

            val = f->data;
            f = f->next;
            

            cout << "Dequeue : " << val << endl;
            
        }
        return val;
    }
};
int main()
{
 

    Node abh;
    abh.enqueue(19);
    abh.enqueue(16);
    abh.enqueue(12);
    
    abh.dequeue();
    abh.linkedlisttraversal();


}


