// Insertion sort.cpp 

#include <iostream>
#include<string >
using namespace std;

class abj {
public:


	void printarray(int* A, int  n) {
		for (int i = 0; i < n; i++) {
			cout << A[i] << endl;
		}
	}
	/*
	void insertionsort(int* A, int n) {
		for (int i = 0; i < n; i++) {

			int k = A[i];
			int j = i - 1;

			while (j > 0 && A[j] > k) {
				A[j + 1] = A[j]; // swap
				j--;
			}
			A[j + 1] = k;
		}

	}
	*/

	void insertion_sort(int* A, int n) {

		for (int i=0;i<n;i++){
		int k = A[i];
		int j = i - 1;

		while (j > 0 && A[j] > k) {
		
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = k;

		}

	}
};

int main()
{
	abj x;

	int arr[] = { 1,7,3,56,3 };
	int n = 5;
	x.insertion_sort(arr,n);
	x.printarray(arr, n);

}
