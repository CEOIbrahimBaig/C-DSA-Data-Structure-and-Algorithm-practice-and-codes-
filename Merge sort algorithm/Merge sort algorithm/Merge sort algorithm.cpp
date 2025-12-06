// Merge sort algorithm.cpp : 

#include <iostream>
#include <string>
using namespace std;

void merge(int A[], int mid, int low, int high) {
    int i = low, j = mid + 1, k = low;
    int b[100];

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            b[k] = A[i];
            i++;
        }
        else {
            b[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = A[i];
        i++;
        k++;
    }

    while (j <= high) {
        b[k] = A[j];
        j++;
        k++;
    }

    for (int m = low; m <= high; m++) {
        A[m] = b[m];
    }
}

void mergesort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);

        merge(A, mid, low, high);
    }
}

void printarray(int* A, int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = { 9,14,4,8,7,5,6 };
    int n = sizeof (A)/sizeof (A[0]);

    cout << "Before Sorting: ";
    printarray(A, n);

    mergesort(A, 0, n - 1);

    cout << "After Sorting: ";
    printarray(A, n);

    return 0;
}
