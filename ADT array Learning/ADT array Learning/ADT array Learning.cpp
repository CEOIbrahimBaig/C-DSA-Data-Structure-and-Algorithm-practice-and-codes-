
///////How to implement an Array ADT 

// Array as an ADT means using array as a model for structuring the data having minimal operations and minimal functions

//Operations that can be implemented on Array are following :

//#1 Traversal  = Means accessing each Element in the Array 
//#2 Insertion  = Means adding the Elements in the Array 
//#3 Deletion   = Means deleting an Element in the Array 
//#4 Searching  ; 
//#4.1 Linear Searching = Searching the Element from start to end ;
//#4.2 Binary Searching = Seaching the Element by Mid cutting and then again cut if not find ;
#include <iostream>
#include<string>
using namespace std;

class myarray {
public:

	int total_size;
	int used_size;
	int* ptr;
	int index;
	int element;

	myarray(int tsize, int usize) {
		total_size = tsize;
		used_size = usize;

	}
	void createarray() {
		ptr = new int[total_size];
	}
	void show() {
		for (int i = 0; i < used_size; i++) {

			cout << ptr[i] << endl;
		}
	}
	void setvalue() {
		int n;
		for (int i = 0; i < used_size; i++) {

			cout << "Enter the element " << endl;
			cin >> n;
			ptr[i] = n;
		}
	}
	//Traversal behaviour mean visiting each element once 
	//Acessing the elements is alsoo known as Traversal

	void traversal() {
		for (int i = 0; i < used_size; i++) {
			cout << "Now I have touched the " << i + 1 << " element which is " << ptr[i] << endl;
		}
	}

	//#2 Insertion Method Creation

	//The folloeing made code is for an unsorted Insertion in the Array 

	void unsorted_insertion() {

		cout << "Please Enter the Element you want to Insert " << endl;
		cin >> element;

		cout << "Please Enter the Index at which you want to store the Element " << endl;
		cin >> index;

		if (index < 0 || index > used_size) {
			cout << "Error: Invalid index.\n";
			return;
		}

		if (used_size >= total_size) {
			cout << "Error: Array is full. Cannot insert more elements.\n";
			return;
		}

		else {
			for (int i = used_size - 1; i >= index; i--) {

				ptr[i + 1] = ptr[i];

			}
		}
		ptr[index] = element;
		used_size++;


	}//#3 Deletion Method : Delete a number at certain index and move the rest of Numbers backword 

	void unsorted_deletion() {


		cout << "Please Enter the Index of the Element that you want to be deleted" << endl;
		cin >> index;

		if (index < 0) {
			cout << "Where the hell do you want to put it " << endl;
		}
		else if (index > total_size) {
			cout << "The index does not exist in this array " << endl;
		}
		else {
			for (int i = index; i < used_size - 1; i++) {
				ptr[i] = ptr[i + 1];
			}
		}
		used_size = used_size - 1;
	}
	// Linear search to find the Element in the Array 
	void linear_search() {


		cout << "Please enter the Element you want to find" << endl;
		cin >> element;

		for (int i = 0; i < used_size; i++) {

			if (element == ptr[i]) {
				cout << "Congrats !!! You element is Found and it is at " << i << "index" << endl;
			}
			else {
				cout << "Sorry !, The Asked Element is not found in the Index number " << i << endl;
			}

		}

	}
	int binary_search() {

		cout << "Please enter the Element you want to Search for !" << endl;
		cin >> element;

		int mid_element;
		int first_element = 0;
		int last_element = used_size - 1;

		mid_element = (first_element + last_element) / 2;

		while (first_element <= last_element) {

			if (ptr[mid_element] == element) {
				cout << "Congrats !!!You element is Found and it is at " << mid_element << " index of Array" << endl;
				return 0;
			}
			if (ptr[mid_element] < element) {
				first_element = mid_element + 1;
			}
			else {
				last_element = mid_element - 1;
			}

		}
	}
};



/// TRY TO MAKE A DELTE FUNCTION as well as insertion one also 
int main()
{

	myarray marks(10, 9);

	marks.createarray();

	cout << "We are setting an Element " << endl;

	marks.setvalue();

	//cout << "We are Showing an Element " << endl;
//
//	marks.show();

	//cout << "Now we are going to perform the traversal behaviour " << endl;
	//marks.traversal();

	//marks.unsorted_deletion();
	//marks.show();

	//marks.linear_search();

	marks.binary_search();
	return 0;

}



