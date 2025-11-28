// Quick sort algorithm.cpp

#include <iostream>
#include<string>

using namespace std;
void printarray(int A[],int n) {

	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}

}

int partition(int A[], int low, int high) {
	
	int pivot = A[low];

	int i = low + 1;
	int j = high;

	do {
		while (A[i] <= pivot) {
			i++;

		}
		while (A[j] > pivot) {
			j--;

		}
		if (i < j) {

			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	} while (i < j);

	//Last swap 
	int temp = A[low];
	A[low] = A[j];
	A[j] = temp;

	return j;
}
void quicksort(int A[], int low, int high) {

	int partition_index;// Index of pivot after partition 

	if (low<high){
	partition_index = partition(A, low, high);// This divide the array

	quicksort(A, low, partition_index-1);// This does quicksort of first part of array as low and end part of array as one index before partitionindex
	
	quicksort(A, partition_index + 1, high);// This does quicksort of 2nd part of array using low as one index after partition high 
	}
}


int main()
{
	int A[] = { 3,5,2,13,12};
	int n = 5;

	printarray(A, n);
	cout << "After sorting " << endl;
	//quicksort(A, n);
	quicksort(A, 0, n - 1);
	printarray(A, n);


}

