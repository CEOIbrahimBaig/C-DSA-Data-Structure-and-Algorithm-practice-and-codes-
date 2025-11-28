// Sorting practice.cpp 

#include <iostream>
#include<string>

using namespace std;

void sortarray(int* a, int n) {
	

	for (int i = 0; i < n; i++) {
		int minindex = i;
		int min = a[i];
		int temp;
		for (int j = i + 1; j < n ; j++) {
			if (a[j] <min) {
				minindex = j;
				min = a[j];


			}
		}
		if (a[i] != min) {
			temp = a[i];
			a[i] = a[minindex];
			a[minindex] = temp;
		}
	}
}














void selectionsort(int *a,int n) {

	for (int i = 0; i < n; i++) {
		int temp;
		int minindex = i;
			int min = a[i];
		for (int j = i + 1; j < n; j++) {
			if (a[j] < min) {
				minindex = j;
				min = a[j];
			}
		}
		if (a[i] != min) {
			temp = a[i];
			a[i] = a[minindex];
			a[minindex] = temp;
		
		}

	}

}
void selectionsortpractice(int* a, int n) {


	for(int i=0;i<n;i++){
	int minindex = i;
	int min = a[i];

	int temp;

	for (int j = i+1; j<n; j++) {

		if (a[j] < min) {
			minindex = j;
			min = a[j];
		}
	}


	if (a[i] != min) {
		temp = a[i];
		a[i] = a[minindex];
		a[minindex] = temp;
	}
	}
}

void bubblesort(int* a, int  n) {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n - i - 1; j++) {

			if (a[j ]> a[j + 1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;

			}
		}



	}
}
void sortselect(int* a, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		int minindex = i;
		int min = a[i];
		for (int j = i + 1; j < n; j++){
			if (a[j] < min) {
				min = a[j];

				minindex = j;
			}
		}
		if (a[i] != min) {
			//perform swap 

			temp = a[i];
			a[i] = a[minindex];
			a[minindex] = temp;
		}
		

	}


}
void buble(int* a, int n) {

	for (int i = 0; i < n - 1; i++) {

		for (int j = 0; j < n-i-1; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
		  }
		}
	}


}
int main(){

	int a[] = {5,3,1,7,8};
	int n = 5;

	buble(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;

	}



	return 0;
}