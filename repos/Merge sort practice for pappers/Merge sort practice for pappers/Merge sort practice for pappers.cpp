#include<iostream>
#include<string >
using namespace std;
/*

void merge(int a[], int m, int h, int l) {
	int i = l;
	int j = m + 1;
	int k = l;
	int b[100];

	while (i <= m && j <= h) {

		if (a[i] < a[j]) {
			b[k] = a[i];
			k++;
			i++;

		}
		else {
			b[k] = a[j];
			j++;
			k++;
		}

	}
	while (i <= m) {
		b[k] = a[i];
		k++;
		i++;
	}
	while (j <= h) {
		b[k] = a[j];
		j++;
		k++;
	}

	for (int m = l; m <= h; m++) {
		a[m] = b[m];

	}



}


void mergesort(int a[], int l, int h) {

	if (l < h) {

		int m = (l + h) / 2;

		mergesort(a, l, m);
		mergesort(a, m + 1, h);

		//merge(a,m,l,h)



	}

}




*/
void merge(int a[],int m, int l, int h) {
	int i = l;
	int j = m+1;
	int k = l;

	int b[100];
	while (i<=m && j<=h) {
		if (a[i] < a[j]) {
			b[k] = a[i];
			i++;
			k++;
		}
		else {
			b[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= m) {
		b[k] = a[i];
		i++;
		k++;
	}
	while (j <= h) {
		b[k] = a[j];
		k++;
		j++;
	}
	for (int m = l; m <= h; m++) {
		a[m] = b[m];
	}
}

void merge_sort(int a[], int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, h);
		merge(a, l,m, h);
	}
	

}


void printarray(int a[],int s) {

	for (int i = 0; i < s; i++) {
		cout << a[i] << endl;

	}
}




int main() {

	int a[] = { 1,5,3,7,4,9,7 };
	int size = sizeof(a) / sizeof(a[0]);




	return 0;
}