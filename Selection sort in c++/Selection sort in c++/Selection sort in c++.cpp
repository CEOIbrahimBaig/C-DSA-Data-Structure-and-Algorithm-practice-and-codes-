// Selection sort in c++.cpp


#include <iostream>
#include<string>
using namespace std;

void selectionsort(int  *A, int n ) {
	int indexofmin;
	int temp;

	cout << "Running selection sort" << endl;
	for (int i = 0; i < n - 1; i++) {
		indexofmin = i;
		for (int j = i + 1; j < n ; j++) {
			if (A[j] < A[indexofmin]) {

				indexofmin = j;
			}
		}
		temp = A[i]; /// Swap function 
		A[i] = A[indexofmin];
		A[indexofmin] = temp;
	}
}

void printarray(int *A , int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}
}
int main()
{
	int A[] = { 3,5,2,13,12};
	int n = 5;
	printarray(A, n);
	selectionsort(A, n);
	printarray(A, n);
}
