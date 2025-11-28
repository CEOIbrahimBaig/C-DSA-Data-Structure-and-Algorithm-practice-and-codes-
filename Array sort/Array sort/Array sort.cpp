// Array sort.cpp 

#include <iostream>
#include<string >
using namespace std;

class abj {
public:

	void sort(int* arr, int n) {
		int temp;
		for (int i = 0; i < n; i++) { // for each pass 
			for (int j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]) {
				temp = arr[j]; // 2 5 2
				arr[j]= arr[j+1];// 5 5 2
				arr[j+1] = temp;  // 5 2 2

			}
			}

		}

	}
	void traversal(int* arr, int n) {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}
	}
};


int main()
{
	int arr[6] = { 6,5,4,3,2,1 };
	abj c;
	c.sort(arr, 6);
	c.traversal(arr,6);
	return 0;
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
