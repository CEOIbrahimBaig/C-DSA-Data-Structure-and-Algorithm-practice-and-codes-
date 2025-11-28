// Binsary search tree with linkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string >
using  namespace std;
/*
class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node* insert(Node* root, int value) {
    
        //New Node validations 
        Node* newnode = new Node; // Create new node 
        newnode->data = value; // Gave it value 
        newnode->left = NULL;
            newnode->right = NULL;


       // Check if the structure is empty 
       if (root == NULL) {
           root = newnode;
           return newnode;
            }


                // Creating two pointers one will be at root and one at position where the newnode will be inserted 
        Node* pointer = root;
        Node* root_for_pointer = root;
        
        while (pointer!= NULL) {
            root_for_pointer = pointer;
            if (pointer->data > value) {
                pointer = pointer->left;
            }
            else if (pointer->data < value) {
                pointer = pointer->right;
            }
            else {
                pointer = pointer->right;
            }
        }
        //Now the pointer root is at the root position and pointer is at a null position where  we have to insert the Node 
        if (value < root_for_pointer->data) {
            root_for_pointer->left = newnode;
        }
        else if (value >root_for_pointer->data) {
            root_for_pointer->right = newnode;
        }
        else {
            root_for_pointer->right = newnode;
        }
        return root;
     }



};
*/


class Node {
public:


    int data;
    Node* right;
    Node* left;


    Node* insert(Node* root, int value) {

        Node* newnode = new Node;
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;

        if (root == NULL) {
            root = newnode;
            return newnode;
        }

        Node* rootmain = root;
        Node* pointer = root;

        while (pointer != NULL) {
            rootmain = pointer;
            if (value > pointer->data) {
                pointer = pointer->right;
            }
            else if (value < pointer->data) {
                pointer = pointer->left;
            }
            else {
                pointer = pointer->right;
            }
        }
        //Now the pointer is at null and root one step behind 
        if ( value<rootmain->data) {
            rootmain->left = newnode;
        }
        else if (value > rootmain->data) {
            rootmain->right = newnode;
        }
        else {
            rootmain->right = newnode;
        }


        return root;

    }
    Node * search(Node *root,int value ) {
        if (root == NULL) {
            cout << "The BST is empty " << endl;
            return root;
        }
        Node* pointer = root;
        int level = 0;
        int i = 0;
        while (pointer!=NULL){
            
           if (value == pointer->data) {
               cout << "The Node is present at the level " << level<<endl;
               
               return pointer;
            }
           else if (value <pointer->data){
                 pointer = pointer->left;
           }
           else if (value > pointer->data) {
               pointer = pointer->right;
           }
           else  {
               pointer=pointer->right ;
           }
           level = level + 1;
        }
        return NULL;
    }




};




int main()
{
    Node* head = new Node;

    head->left = NULL;
    head->right = NULL;


    head->data = 20;



}