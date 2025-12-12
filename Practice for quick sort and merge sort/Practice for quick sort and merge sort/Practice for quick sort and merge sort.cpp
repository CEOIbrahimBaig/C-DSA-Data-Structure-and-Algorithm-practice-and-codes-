// Practice for quick sort and merge sort.cpp :


#include <iostream>
#include<string >
using namespace std;




/*

int  partition(int a[],int l,int h) {
	 
	int i = l;
	int j = h;
	int pivot = a[l];

	do {
		if (a[i] < pivot) { // i++ untill element larger then pivot is found 
			i++;
		}
		else if (a[j]>pivot) { // j-- untill element smaller then pivot is found 
			j++;
		}
		if (i < j) {
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;

		}

	} while (i < j);
	// Now swap pivot with a[j]
	int temp = a[l];
	a[l] = a[j];
	a[j] = temp;



	return j;
}


void quicksort(int a[], int l, int h) {

	int pivot = partition(a,l,h);

	if (l < h) {
		quicksort(a,pivot+1,h); // For the right subarray 

		quicksort(a,l,pivot-1);// For the left subarrayy


	}


}

void merge(int a[], int l, int m, int h) { // l = low, m =mid , h = high 

	int i = l; // For the first part of the arrary
	int j = m+1; // For the 2nd part of the array 
	int k = l;  // same as low 


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
	while (i <= m) {  // If the first array  become empty
		b[k] = a[i];
		i++;
		k++;
	}
	while (j <= h) {
		b[k] = a[j];
		j++;
		k++;
	}


}


void merge_sort(int a[], int l, int h) {

	if (l < h) {
		
		int m = (l + h) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, h);

		merge(a, l, m, h);

	}



}*/

int partition(int a[],int l , int h ) {

	int i = l;
	int j = h;

	int pivot = a[l];
	


	do {

		if (a[i]<pivot ) {
			i++;
		}
		else if (a[j] > pivot) {
			j--;
		}
		// Swap a[i] and a[j]   ; 
		if (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}



	} while (i < j);
       // Sawap a[j] and pivot 	
		int temp = a[l];
		a[l] = a[j];
		a[j] = temp;
	


	return j; 
}



void quicksort(int a[], int l, int h) {

	if (l < h) {
		int pivot = partition(a,l,h);
			quicksort(a, pivot + 1, h);
			quicksort(a, l, pivot - 1);




	}


}


void merge(int a[], int m, int l, int h) {

	int i = l; // Starting point of firt part of array 
	int j = m+1;  // starting point of 2nd part of array 
	int k = l;  // Starting point of the third array 

	int b[100];

	while (i <= m && j <= h) {

		if (a[i] < a[j]) {
			b[k] = a[i];
			k++;
			i++;
		}
		else {
			b[k] = a[j];
			k++;
			j++;
		}

	}
	while (i<=m) {
		b[k] = a[i];
		k++;
		i++;
	}
	while (j<=h) {
		b[k] = a[j];
		k++;
		j++;
	}
}


void mergesort(int a[], int  l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		mergesort(a, l, m );
		mergesort(a, m + 1, h);
		merge(a, m, l, h);
	}


}


int main() {
	int a[] = { 1,3,52,5,88,52 };
	int size = 6;

	return 0;
}