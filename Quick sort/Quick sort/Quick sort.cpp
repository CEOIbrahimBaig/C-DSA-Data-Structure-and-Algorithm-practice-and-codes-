// Quick sort.cpp 

#include <iostream>
#include<string >
using namespace std;

/*
 int partition(int *A,int l ,int h) {
	int pivot = A[l];
	int i = l + 1;
	int j = h;
	do {

		while (A[i] < pivot) { // Move i forward to find value larger than pivot 
			i++;
		}
		while (A[j] > pivot) { // Move j backward untill find a value smaller than pivot 
			j--;
		}

		if (i < j) { //	Swap  i and j // Here the j is still bigger 
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;

		}
	} while (i < j);
	
	// swap a [lpw ] and a [j]
	int temp = A[l];
	A[l] = A[j];
	A[j] = temp;

	return j;
}


void quicksort(int *A ,int l ,int h) {
	int partition_index; // Index of pivot after partition 

	partition_index = partition(A, l, h);

	quicksort(A, l,partition_index-1);    // Sort the Left subarray 
	quicksort(A, partition_index + 1, h);// Sort the Right Subarray 

}
*/
/*
int partition(int *A ,int l , int h) {

	int partition_index = A[l];

		int i = l + 1;
	int j = h;
	do {
		while (A[i] < partition_index) {
			i++;
		}
		while (A[j] > partition_index) {
			j--;
		}

		if (i < j) {
			//swap it 
			int tem = A[i];
			A[i] = A[j];
			A[j] = tem;
		}
	} while (i<j);
	// swap a [l ] and a [j]
	int temp = A[l];
	A[l] = A[j];
	A[j] = temp;

	return j;
}

void quicksort(int* A, int l , int h) {
	
	if  (l<h){
	int partition_index = partition(A, l, h);

	quicksort(A, partition_index + 1, h);
	quicksort(A, l, partition_index - 1);
	}
}
*/

int partition(int* A, int l, int h) {

	int partition_index = A[l];

	int i = l + 1;
	int j = h;
	do {
		while (A[i] < partition_index) {
			i++;
		}
		while (A[j] > partition_index) {
			j--;
		}

		if (j < i) {
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	} while (i < j);
	// swap a [l ] and a [j]
	int temp = A[l];
	A[l] = A[j];
	A[j] = temp;

	return j;
}



void quicksort(int* A, int l, int h) {
 
	int pivot = partition(A, l, h);

	if (l > h) {

		quicksort(A, pivot + 1, h);
		quicksort(A, l, pivot - 1);
	}
}






void printarray(int* A, int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	};

}


int main()
{
	int a[] = { 8,7,6,4,1,2,5,3,9,10 };
	int n = 10;
	quicksort(a, 0, 9);
	printarray(a, n);
}
