#include<iostream>
#include<string>
#include<cstring>// For storing length of string 
using namespace std;

class stack {
public:
    char* arr;
    int top;
    int size;

    int isempty(stack* ptr) {
        if (ptr->top == -1) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int isfull(stack* ptr) {
        if (ptr->top == ptr->size - 1) {
            return 1;
        }
        else {
            return 0;
        }
    }

    char pop(stack* ptr) {
        if (isempty(ptr)) {
            cout << "Stack Underflow" << endl;
            return '\0';
        }
        else {
            char val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }

    void push(stack* ptr, char val) {
        if (isfull(ptr)) {
            cout << "Stack overflow" << endl;
        }
        else {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
    }

    char stacktop(stack* ptr) {
        if (isempty(ptr)) {
            return '\0';
        }
        return ptr->arr[ptr->top];
    }

    char stackbottom(stack* ptr) {
        if (isempty(ptr)) {
            return '\0';
        }
        return ptr->arr[0];
    }

    char peek(stack* ptr, int i) {
        int arrayind = ptr->top - i + 1;
        if (arrayind < 0 || arrayind > ptr->top) {
            cout << "Not a valid position for Stack" << endl;
            return '\0';
        }
        else {
            return ptr->arr[arrayind];
        }
    }
    char isOperator(char c) {
        return (c == '+' || c == '-' || c == '*' || c == '/');
    }
    

    int precedence(char ch) {
        if (ch == '*' || ch ==  '/') {
            return 3;
        }
        else if (ch == '+' || ch == '-') {
            return 2;

        }
        else {
            return 0;
        }
    }
    char* infixtopostfix(char* infix) {

        stack* sp = new stack;// Create a new stack

        sp -> size = 100; // give it size 
        sp->top = -1;
        sp->arr = new char[sp->size];   // Create array of stack size

        char* postfix = new char[strlen( infix)]; // Create a new array POSTFIX of same size as infix 

        int i = 0; //Scan the infix 
        int j = 0;// For adding in postfix;

        while (infix[i] != '\0') {
            if (!isOperator(infix[i])) {
                postfix[j] = infix[i];
                j++;
                i++;
            }
           else {
             
                if (precedence(infix[i]) > precedence(stacktop(sp))) {
                    push(sp, infix[i]);
                    i++;
            }
                else {
                    postfix[j] = pop(sp);
                    j++;
                }
            }

        }
        while (!isempty(sp)) {
            postfix[j] = pop(sp);
            j++;
        }
        postfix[j] = '\0';
        return postfix;
    }

};

int main() {
    char infix[] = "a-b+t/6";

    stack ab;

    cout << "Posfix is " << ab.infixtopostfix(infix) << endl;
}