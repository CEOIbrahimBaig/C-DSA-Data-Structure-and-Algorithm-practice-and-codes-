#include<iostream>
#include<string >

using namespace std;

class Node {
public : 

    int data;
    Node* right;
    Node* left;


    Node* insert(Node* head, int datag) {

        Node* new_node = new Node; // Creating new Node 
        new_node->data = datag;
        new_node->left = NULL;
        new_node->right = NULL;

        if (head == NULL) {
            head = new_node;
            return new_node;

        } // Two pointers will be used as one will be at insertion area and other will be at root of pointer 

        Node* ptr = head;
        Node* ptr_root = head;

        while (ptr != NULL) {
            ptr_root = ptr;

            if (ptr->data > datag) {
                ptr = ptr->left;
            }
            else if (ptr->data < datag) {
                ptr = ptr->right;
            }
            else {
                ptr = ptr->right;
            }
        }
        // Ptr is pointing at null and ptr root at position before insertion 
        if (ptr_root->data > datag) {
            ptr_root->left = new_node;
        }
        else if (ptr_root->data < datag) {
            ptr_root->right = new_node;
        }
        else {
            ptr_root->right = new_node;
        }


        return new_node;




    }

    Node* search(Node* head, int datag) {


        if (head == NULL) {
           
            cout << "The Binary search tree is empty " << endl;

            return NULL;

        }

        Node* ptr = head; 

        while (ptr != NULL) {
          
            if (ptr->data == datag) {

                cout << "BST require Node is found " << endl;

                return ptr;
            }

            else if (ptr->data > datag) {
                ptr = ptr->left;
            }
            else if (ptr->data < datag) {
                ptr = ptr->right;
            }
            return NULL;
        }
    }

    void pre_order_traversal(Node *root ) {

        if (root!=NULL){
        cout << root->data << endl;
        pre_order_traversal(root->left);
        pre_order_traversal(root->right);
        }

    }

    void post_order_traversal(Node* root) {
       
        if (root != NULL) {
           
            post_order_traversal(root->left);
            post_order_traversal(root->right);
            cout << root->data << endl;
        }

    }
    void in_order_traversal(Node* root) {
      
        if (root != NULL) {

            in_order_traversal(root->left);
            cout << root->data << endl;
            in_order_traversal(root->right);
            
        }

    }

    Node* largest_data_node(Node* root) {

        Node* ptr = root;

        while (ptr->right != NULL) {
            ptr = ptr->right;

        }
        return ptr;

    }
    Node* smallest_data_node(Node* root) {
        Node* ptr = root;

        while (ptr->left != NULL) {
            ptr = ptr->left;

        }
        return ptr;
    }

    bool is_leaf_node(Node * root) {

        Node* ptr = root;
        if (ptr->left == NULL && ptr->right == NULL) {
            return true;
        }
        else {
            return false;
        }

    }
    Node* delete_nod(Node* root, int datag) {

        Node* ptr = root;
        Node* ptr_root = root;

        if (ptr == NULL) {
            cout << "The BST is empty ." << endl;
            return NULL;
        }

        // Make code to  find the BST 

        while (ptr->data != datag) {

            ptr_root = ptr;

            if (ptr->data < datag) {
                ptr = ptr->right;
            }
            else if (ptr->data > datag) {
                ptr = ptr->right;
            }
            else {
                ptr = ptr->right;
            }

        }

        // Now ptr is at node to delete 

        // Case 1 if node to delete is the leaf node 

        if (is_leaf_node(ptr)) {

            if (ptr_root != NULL) {

                if (ptr_root->left == ptr) {
                    ptr_root->left = NULL;
                }
                else {
                    ptr_root->right = NULL;
                }
            }
            else {
                ptr_root = NULL;
            }
            delete(ptr);
            return root;

        }

        // Case 2 if Node to delete has right node but no left node 



        if (ptr->left == nullptr && ptr->right != nullptr) {
            if (ptr_root != nullptr) {
                if (ptr_root->left == ptr) {
                    ptr_root->left = ptr->right;
                }
                else {
                    ptr_root->right = ptr->right;
                }
            }
            else {
                ptr_root = ptr->right;  // Deleting root
            }
            delete ptr;
            return root;
        }




        // Case 3 if Node to delete has left node but no right node 

        if (ptr->left != nullptr && ptr->right == nullptr) {
            if (ptr_root != nullptr) {
                if (ptr_root->left == ptr) {
                    ptr_root->left = ptr->left;
                }
                else {
                    ptr_root->right = ptr->left;
                }
            }
            else {
                ptr_root = ptr->left;  // Deleting root
            }
            delete ptr;
            return root;
        }

        if (ptr->left != NULL && ptr->right != NULL) {

            Node* left_subtree_largest = ptr->left;
            Node* root_large = ptr;

            while (left_subtree_largest->right != NULL) {
                
                root_large = left_subtree_largest;

                left_subtree_largest->right = left_subtree_largest;

            }

            ptr->data = left_subtree_largest->data;

            // Data is coppied  
            // Now delete the largest_value_Node _of left subaray 

            if (root_large->left == left_subtree_largest) {
                root_large->left = left_subtree_largest->left;
            }
            else {
                root_large->right = left_subtree_largest->left;
            }

            delete (left_subtree_largest);
            return root;
        }



    }

 };

int main()
{
    Node* head = new Node;

    head->left = NULL;
    head->right = NULL;


    head->data = 20;



}