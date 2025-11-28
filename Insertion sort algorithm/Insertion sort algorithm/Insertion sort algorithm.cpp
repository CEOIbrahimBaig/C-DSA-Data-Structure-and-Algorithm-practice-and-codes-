// Insertion sort algorithm.cpp 

#include <iostream>
#include<string >
using namespace std;

/*void insertionsort(int* A, int n) {
    // Loop for each pass 
    int key, j;
    for (int i = 1; i < n; i++) {

        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;

        }
        A[j + 1] = key;

    }

}
*/
void insertionsort(int* A, int n) {

    
    for (int i = 1; i < n; i++) { // For each pass 
        int key, j;
        key = A[i];
        j = i - 1;

        while (i > 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}


void printarray(int *A ,int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
    cout << endl;

}
//  -1  0  1  2  3  4 
//     01 07 02 08 05
int main()
{
    int A[] = { 1,5,24,8,3,5 };
    int n = 6;
    
    printarray(A, n);
    cout << "After using insertion sort algorithm " << endl;
    insertionsort(A, n);
    printarray(A, n);


    return 0;
}
