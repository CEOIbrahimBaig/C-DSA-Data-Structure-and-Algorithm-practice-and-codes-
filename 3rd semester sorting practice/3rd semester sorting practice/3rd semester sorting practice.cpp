// 3rd semester sorting practice.cpp :

#include <iostream>
#include<string>
using namespace std;

void selection_sort(int* a, int n ) {
	
	for (int i = 0; i < n; i++) {
		int min_val = a[i];
		int min_index = i;

		for (int j = i+1; j < n; j++) {
			if (a[j] <min_val){
				min_val=a[j];
				min_index=j;
			}
		}
		if (a[i] != min_val) {
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}

}
void traversal(int* a,int n) {

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}

}

void bubbles_sort(int* a, int n) {

	for (int i = 0; i < n-1; i++) {

		for (int j = 0; j < n - i - 1; j++) {

			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}


	}



}
/*
void selection_sort(int* a, int n) {

	for (int i = 1; i < n; i++) {
		int k = a[i];
		int j = i - 1;
		while (j > 0 && a[j] > k) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;

	}



}
*/
void selection_sor(int* a, int n) {

	for (int i = 0; i < n; i++) {
		int min_index = i;
		int min_val = a[i];

		for (int j = i+1; j < n; j++) {

			if (a[j] < min_val) {
				min_val = a[j];
				min_index = j;
			}


		}
		if (a[i] != min_val) {
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}

	}


}

void bubble(int* a, int n) {

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}

void insertion(int* a, int n) {


	for (int i = 1; i < n; i++) {
		int k = a[i];
		int j = i - 1;
		while (j > 0 && a[j] > k) {

			a[j + 1] = a[j];
			j--;

		}
		a[j + 1] = k;
	}
}
void select(int* a, int n) {

	for (int i = 0; i < n; i++) {

		int mini = i;
		int min = a[i];

		for (int j = i + 1; j < n; j++) {

			if (a[j] < min) {
				mini = j;
				min = a[j];

			}
		}
		if (a[i] != min) {

			int temp = a[i];
			a[i] = a[mini];
			a[mini] = temp;




		}
	}

}
void insert(int* a, int n) {

	for (int i = 1; i < n; i++) {
		int k = a[i];

		int j = i - 1;
		while (j > 0 && a[j] > k) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;

	}


}

void selec(int* a, int n) {

	for (int i = 0; i < n; i++) {
		int mini = i;
		int min = a[i];

		for (int j = i + 1; j < n; j++) {

			if (a[j] < min) {
				mini = j;
				min = a[j];
			 }
		}
		if (a[i] != min) {
			int temp = a[i];
			a[i] = a[mini];
				a[mini] = temp;
		}

	}


}
void bub(int* a, int n) {

	for (int i = 0; i < n-1; i++) {

		for (int j = 0; j < n - i - 1; j++) {

			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;


			}

		}


	}

}
void inset(int* a, int n) {

	for (int i = 1; i < n; i++) {

		int k = a[i];
		int j = i - 1;
		while (j > 0 && a[j] > k) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}




}

int main()
{

	int a[] = { 1,44,2,7,5,3 };
	int n = sizeof(a) / sizeof(a[0]);
	inset(a, n);
	traversal(a, n);
	return 0;

}
