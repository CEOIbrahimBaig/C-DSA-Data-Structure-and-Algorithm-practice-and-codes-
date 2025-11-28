#include<iostream>
#include<string>
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

    int match(char a, char b) {
        if (a == '{' && b == '}') {  
            return 1;
        }
        if (a == '[' && b == ']') {  
            return 1;
        }
        if (a == '(' && b == ')') {  
            return 1;
        }
        return 0;
    }

    void parenthismatch(char* exp) {
        stack* sp = new stack();
        sp->size = 100;
        sp->top = -1;
        sp->arr = new char[sp->size];

        for (int i = 0; exp[i] != '\0'; i++) {
            if (exp[i] == '(') {
                sp->push(sp, '(');
            }
            else if (exp[i] == ')') {
                if (sp->isempty(sp)) {
                    delete[] sp->arr;
                    delete sp;
                   
                }
                sp->pop(sp);
            }
        }

      
    }

    int multiplematch(char* exp) {
        stack* sp = new stack();  // Initialize stack properly
        sp->size = 100;
        sp->top = -1;
        sp->arr = new char[sp->size];

        char popped_ch;
        for (int i = 0; exp[i] != '\0'; i++) {
            if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
                sp->push(sp, exp[i]);
            }
            else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
                if (sp->isempty(sp)) {
                    delete[] sp->arr;
                    delete sp;
                    return 0;
                }
                popped_ch = sp->pop(sp);
                if (!match(popped_ch, exp[i])) {
                    delete[] sp->arr;
                    delete sp;
                    return 0;
                }
            }
        }

        int result = sp->isempty(sp);
        delete[] sp->arr;
        delete sp;
        return result;
    }
};

int main() {
    stack obj;
    char exp[] = "8*(9)";
    if (obj.parenthismatch(exp)) {
        cout << "Match";
    }
    else {
        cout << "Not Match";
    }
    return 0;
}