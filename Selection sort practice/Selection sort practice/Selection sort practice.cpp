// Selection sort practice.cpp 

#include <iostream>
#include<string>
using namespace std;

class abj {
public :
	/*
	void sortarray(int* A, int n) {

		for (int i = 0; i < n-1; i++) {
			int temp;
			int min_index = i;
			
			for (int j = i + 1; j < n; j++) {

				if (A[j] < A[min_index]) {
					min_index = j;
				}

			}
			if (min_index!=A[i]) {
				int temp = A[i];
				A[i] = A[min_index];
				A[min_index] = temp;

			}

		}


	}
	*/

	void selectsort(int* A, int n) {
		for (int i = 0; i < n; i++) {

			int min_index = i;

			for (int j = i + 1; j < n; j++) {
				if (A[j] < A[min_index]) {

					min_index = j;

				}
			}
			if (min_index !=A[i] ) {
				int temp = A[i];
				A[i] = A[min_index];
				A[min_index] = temp;
			}

		}


	}
	void traversal(int* A, int n) {
		for (int i = 0; i < n; i++) {
			cout << A[i] << endl;
		}
	}

};

int main()
{
	int array[] = { 1,5,4,3,2,6 };
	int n = 6;

	abj c;

	c.selectsort(array, 6);
	c.traversal(array, 6);
	return 0;
}
