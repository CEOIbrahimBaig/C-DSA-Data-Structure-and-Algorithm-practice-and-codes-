// Countsort.cpp :
#include <iostream>
using namespace std;

int maxnum(int A[],int n) {// Find max element 
    int max = A[0];
    for (int i = 0; i < n; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }
    return max;

}
void countsort(int* A, int n) {
    int i, j;
    int max = maxnum(A, n);
    
    int* count = new int[max + 1]; // Making a new array with size one more then max 

    // Intialize all element as zero in array 
    for ( i = 0; i < max+1; i++) {

        count[i] = 0;
    }
    // Increment corresponding index in countarrray
    for (i = 0; i < n; i++) {

        count[A[i]]++;
    }
    i = 0;// Counter for count array 

    j = 0;// count for given array 

    while (i <= max + 1) {
        if (count[i] > 0) {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else {
            i++;

        }
    }

}







void printarray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;

    }
    cout << endl;

}

int main()
{
    int A[] = { 9,1,4,14,15,6 };
    int n = 6;


    printarray(A, n);

    cout << "After sort " << endl;
    countsort(A, n);


    printarray(A, n);




}
