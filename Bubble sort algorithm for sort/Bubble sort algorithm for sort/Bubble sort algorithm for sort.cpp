// Bubble sort algorithm for sort.cpp : 

#include <iostream>
#include<string>
using namespace std;

void printarray(int *A, int n) {
	for (int i = 0; i < n; i++) {

		cout << A[i] << endl;
	}
	cout << endl;
}
void bubblesort(int *A,int n) {
	int temp;
	int issorted = 0;

	for (int i = 0; i < n-1; i++) {//For each pass 

		cout << "Working on pass number " << i + 1 << endl;
		issorted = 1;
		
		for (int j = 0; j < n - 1-i;j++){// For number of comparioson in each pass 


			if (A[j]>A[j+1]){
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				issorted = 0;
			}
		}
		if (issorted) {
			return;
		}
	}
}
int main()
{

// 	int a[] = { 12,54,65,7,23,9 };
	int a[] = { 12,14,15,16,17,19 };
	int n = 6;

	printarray(a,n);//Function to print the array 
	cout << "After using bubble swap algo " << endl;

	bubblesort(a, n);

	printarray(a, n);

	return 0;
}
