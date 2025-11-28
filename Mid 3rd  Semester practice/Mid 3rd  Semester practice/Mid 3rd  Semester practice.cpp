// Mid 3rd  Semester practice.cpp : 


#include <iostream>
#include<string >

using namespace std;

class Node {
public:

    int data;
    Node* next;

    void traversal(Node* a) {

        Node* ptr = a;

        while (ptr!= NULL){
            cout << "The data is : " << ptr->data << endl;
            ptr = ptr->next;
        }
    }

    Node* insert_at_first(Node* a, int datag) {

        Node* ptr = a;
        Node* new_node = new Node;

        new_node->data = datag;
        new_node->next = ptr;

        return new_node;
    }
    Node* insert_at_index(Node* a, int  datag, int index) {

        Node* ptr = a;

        int i = 0;
        while (i != index - 1) {
            ptr = ptr->next;
            i++;
        }


        Node* new_node = new Node;
        new_node->data = datag;
        new_node->next = ptr->next;

        ptr->next = new_node;
       
        return a;
    }
    Node* insert_at_end(Node* a, int datah) {
        Node* end_node = new Node;

        Node* ptr = a;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = end_node;
        end_node->data = datah;
        end_node->next = NULL;
        return a;

    }
    Node* delete_at_start(Node* a) {
        Node* ptr = a;
        a = a->next;
        delete (ptr);

        return a;

    }
    Node* delete_at_index(Node* a, int index) {
        Node* ptr = a;
        Node* q = ptr->next;
        int i = 0;
        while (i != index - 1) {
            ptr = ptr->next;
            q = q->next;
        }
        ptr->next = q->next;
        delete(q);

        return a;


    }
    Node* delete_at_end(Node* a) {

        Node* ptr = a;
        Node* q = ptr->next;
        while (q->next!=NULL) {
            ptr = ptr->next;
            q = q->next;
        }
        delete(q);
        ptr->next = NULL;
        return a;

    }
    Node* find_node(Node* a, int data_to_find) {
        int i = 0;
        Node* ptr = a;
        while (ptr->data != data_to_find || ptr!=NULL) {
            ptr = ptr->next;
            if (ptr->data == data_to_find) {
                i++;
                cout << "The data is found and is in the " << i << " index" << endl;
                return ptr;
            }
            else if (ptr->data != data_to_find && ptr==NULL) {
                cout << "Data not found " << endl;
                
            }
            i++;
          
        }
    }
    Node* update_specific_node(Node* a, int data_to_find, int update_value) {

        Node* ptr = a;
        int i = 0;
        while (ptr->data != data_to_find || ptr != NULL) {
           
            if (ptr->data == data_to_find) {
               
                ptr->data = update_value; return ptr;
            }
            else if (ptr->data != data_to_find && ptr == NULL) {
                cout << "Data not found  , Plese enter correct one " << endl;

            }
            i++;
            ptr = ptr->next;
        }
        return ptr;


    }
};



int main()
{

    Node* first = new Node;
    Node* second = new Node;
    Node* tail = new Node;

    first->next = second;
    second->next = tail;
    tail->next = NULL;

    first->data = 232;
    second->data = 3434;
    tail->data = 0;

    Node abj;
  
    first = abj.insert_at_first(first,23);
    first = abj.insert_at_index(first, 44, 1);
    first = abj.insert_at_end(first, 55);
    first = abj.delete_at_start(first);
    // 44 232 3434 0 55 
    first = abj.delete_at_index(first, 1);
    first = abj.delete_at_end(first);
    //44 3434 0 
    abj.traversal(first);
    abj.find_node(first, 0);
    cout << endl;
    cout << "After updating the data " << endl;
    abj.update_specific_node(first, 0, 5);
    abj.traversal(first);
}
