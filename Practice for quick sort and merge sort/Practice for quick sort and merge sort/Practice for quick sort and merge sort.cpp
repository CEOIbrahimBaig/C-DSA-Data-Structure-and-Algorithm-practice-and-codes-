// Practice for quick sort and merge sort.cpp :


#include <iostream>
#include<string >
using namespace std;



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

void merge(int a[], int l ,int m, int h) {

	int i = l;
	int j = m + 1;
	int k = l;

	int d[100];

	while (i <= m && j <= h) {

		if (a[i] < a[j]) {
			d[k] = a[i];
			i++;
			k++;
		}
		else if (a[j] < a[i]) {
			d[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <=m) {
		d[k] = a[i];
		i++;
		k++;
	}
	while (j <= h) {
		d[k] = a[j];
		k++;
		j++;
	}
	for (int i = l; i <= h; i++) {
		a[i] = d[i];
	}
}


void merge__sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		merge__sort(a,l,m);
		merge__sort(a, m + 1, h);
		merge(a, l, m, h);
	}



}
int partition(int a[], int l, int h) {

	int i = l + 1;          // minimal fix
	int j = h;
	int pivot = a[l];

	do {
		while (i <= h && a[i] <= pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;            // FIXED
		}

		if (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	} while (i < j);

	int temp = a[l];
	a[l] = a[j];
	a[j] = temp;

	return j;
}

int partition_1(int a[], int l, int h) {

	int i = l + 1;
	int j = h;

	int pivot = a[l];

	do {

		while (i <= h && a[i] <= pivot) {
			i++;
		}
		while (a[j] > pivot) {
			j--;
		}
		if (i < j)
		{
			swap(a[i], a[j]);
		}


	} while (i < j);

	swap(a[j], a[l]);
}

void quicksort(int a[], int l, int h) {

	if (l < h) {
		int pivot = partition(a, l, h);
		quicksort(a, l, pivot - 1);
		quicksort(a, pivot + 1, h);
	}
}

int main() {
	int a[] = { 1,3,52,5,88,52 };
	int size = 6;

	return 0;
}