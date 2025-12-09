// Practice _merge and quick sort for quiz.cpp 

#include<iostream>

#include<string >

using namespace std;

int partition(int a[], int l , int h) {

	int i = l+1;
	int j = h;

	int pivot = a[l];
	while (i < j) {

		while (a[i] < pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}

		if (i < j) {
			swap(a[i], a[j]);
		}
		

	}
	// swap a[j] and pivot 
	swap(a[j], a[l]);


	return j;
}

void quick_sort(int a[], int l , int h ) {

	if (l < h) {
		int partition_index = partition(a,l,h);
		quick_sort(a, partition_index + 1, h); // For the right part of array 
		quick_sort(a,l, partition_index - 1);  // For the left part of the array 

	}



}

void merge(int a[], int l, int m, int h) {

	int i = l;
	int j = m+1;
	int k = l;

	int b[100];

	while (i <= m && j <= h) {

		if (a[i] < a[j]) {
			b[k] = a[i];
			i++;
			k++;
		}
		else {
			b[k] = a[j];
			j++;
			k++;
		}
	}

	while (i <= m) {
		b[k] = a[i];
		i++;
		k++;
	}
	while (j <= h) {
		b[k] = a[j];
		j++;
		k++;
	}
	for (int i = l; i <= h; i++) {
		a[i] = b[i];
	}
}


void merge_sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		merge_sort(a, l,m);
		merge_sort(a, m+1, h);

		merge(a,l,m,h);
	}


}



int main() {

	int a[] = { 3,4,5,1,2,3 ,99,1};
	int size = 8;



	return 0;
}