// 3rd Semester Task #1.cpp 

// Create an array and intialize of size n 
// Find  max value 
// Find 2nd largest Max 
// Find 3rd Largest Max 
// Find vice versa for smallest 
#include <iostream>
using namespace std; 


class abj {
public:
	int val = 0;
	/*
	void maxval(int arr[], int n) {
		for (int i = 0; i < n; i++) {
			if (val < arr[i]) {
				val = arr[i];
			}
		}
	}
	*/

	void maxval(int arr[],int n) {
		cout << arr[n];
	}
	void _2ndlarg(int arr[], int n) {
		cout << arr[n-1];
	}
	void _3rdlarg(int arr[], int n) {
		cout << arr[n - 2];
	}
	void minval(int arr[], int n) {
		cout << arr[n-n];
	}
	void _2ndminval(int arr[], int n) {
		cout << arr[n-n+1];
	}
	void _3rdminval(int arr[], int n) {
		cout << arr[n-n+2];
	}

	void sortarray(int arr[],int n) {
		int temp;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
};
int main()
{
	
	int arr[5] = { 7,5,13,2,1 };
	abj g;
	g.sortarray(arr, 5);
	cout << endl;
	g.maxval(arr, 5);
	cout << endl;
	g._2ndlarg(arr, 5);
	cout << endl;
	g._3rdlarg(arr, 5);
	cout << endl;
	g.minval(arr, 5);
	cout << endl;
	g._2ndminval(arr, 5);
	cout << endl;
	g._3rdminval(arr, 5);
	cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
