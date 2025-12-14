#include <iostream>
#include<string>
using namespace std;

class stack {
public:

    int top;
    int size;
    int* arr;

    int isempty(stack* ptr) {
        if (ptr->top < 0) {

            cout << "The stack is Empty" << endl; 
            return 1;
          }
        else {
            return 0;
        }
    }

    int isfull(stack* ptr) {

        if (ptr->top == ptr->size - 1) {

            cout << "The stack is Full" << endl;

            return 1;
        }
        else {
            return 0;
        }
    }
    void push(stack* ptr,int val) {
       
        ptr->top++;

        if (isfull(ptr)) {

            cout << "Stack overflowed " << endl;
        
        }
        else {
            ptr->arr[ptr->top] = val;
        }
        
    }
    int pop(stack* ptr) {

        int val;

        if (isempty(ptr)) {

            cout << "Stack is empty" << endl;

            return -999999;
        }
        else {
         val= ptr->arr[ptr->top];
            
            ptr->top--;

        }

    }
    int get_element(stack* s, int index) {
        if (index < 0 || index > s->top) {
            cout << "Invalid index" << endl;
            return -1;  // or some error value
        }
        return s->arr[index];
    }

    }
    int stacktop(stack *ptr) {   //To print the top element  

        return ptr->arr[ptr->top];
    }

    int stackbottom(stack* ptr) { //To print the lowermost element 

        return ptr->arr[0];
    }

};

int main() 
{
    stack* s = new stack; // ✅ Allocate memory for the stack object
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size]; // ✅ Allocate memory for the array


    cout << "Stack has been created " << endl;

  //  cout << "Before pushing data" << endl;
  //  s->isfull(s);
  //  s->isempty(s);

    s->push(s,54); // Add to Add element at top 
    s->push(s, 524);// Add element to new top 
   s->push(s, 5214);// Add element to new top 
 //   s->push(s, 5114);
///   s->push(s, 5132);
 //   s->push(s, 5121);
 //   s->push(s, 5132);
  //  s->push(s, 5121);
  //  s->push(s, 5132);
  //  s->push(s, 5121);// Now 10 elements have been created so stack is full
  //  s->push(s, 5132);

  //  cout << "After pushing " << endl;
  //  s->isfull(s);
 //   s->isempty(s);



 //   cout << "After pop " << endl;
//    s->pop(s); // To remove the top element 

    //Function for calling all the values in stack 
//
  
   for (int j = 1; j <=s->top + 1; j++) {
       
        cout << "The value at index " << j-1 << " is " << s->get_element(s, j);
        cout << endl;
       
    }
    return 0;
}
