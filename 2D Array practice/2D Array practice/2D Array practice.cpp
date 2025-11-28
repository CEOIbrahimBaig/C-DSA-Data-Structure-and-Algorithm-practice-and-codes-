
// 2D Array practice.cpp 


// Code #1 Make code in such a way that it is not hardcoded for printing in Asending order

/*
#include <iostream>
#include<string>
using namespace std;


int main()
{
	int rows, columns;

	cout << "Please enter the numbers of rows  you want " << endl;
	cin >> rows;

	cout << "Please enter the number of columns you want " << endl;
	cin >>columns;

	int a[2][2] = { {1,2},{2,3} };
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {
			cout << a[i][j] <<" ";
		}
		cout << endl;

	}


	return 0;
}
*/
// Code#2 For printing the value of all the elements in each row 

/*
#include<iostream>
#include<string >
using namespace std;



int main() {
	int rows, columns;

	cout << "Please enter the numbers of rows  you want " << endl;
	cin >> rows;

	cout << "Please enter the number of columns you want " << endl;
	cin >> columns;

	int a[3][3] = { {1,2,66},{2,3,7},{3,5,4 } };
	int sum_1strow = 0;
	int sum_2ndrow = 0;
	int sum_3rdrow = 0;

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {
			
			if (i == 0) {
				sum_1strow = sum_1strow + a[i][j];
			}
			else if (i == 1) {
				sum_2ndrow = sum_2ndrow + a[i][j];
			}
			else if (i == 2) {
				sum_3rdrow = sum_3rdrow + a[i][j];
			}

		}
	}
	cout << " The sum of first row is " << sum_1strow << endl;
	cout << "The sum of second row is " << sum_2ndrow << endl;
	cout << "The sum of third row is " << sum_3rdrow << endl;


	return 0;
}
*/

//Code #3 For printing sum of each colmn element 
/*
#include<iostream>
#include<string >
using namespace std;

int main() {
	int rows, columns;

	cout << "Please enter the numbers of rows  you want " << endl;
	cin >> rows;

	cout << "Please enter the number of columns you want " << endl;
	cin >> columns;

	int a[3][3] = { {1,2,66},{2,3,7},{3,5,4 } };
	int sum_1stcolumn = 0;
	int sum_2ndcolumn = 0;
	int sum_3rdcolumn = 0;

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {

			if (j == 0) {
				sum_1stcolumn = sum_1stcolumn + a[i][j];
			}
			else if (j == 1) {
				sum_2ndcolumn = sum_2ndcolumn + a[i][j];
			}
			else if (j == 2) {
				sum_3rdcolumn =sum_3rdcolumn + a[i][j];
			}

		}
	}
	cout << " The sum of first column is " << sum_1stcolumn << endl;
	cout << "The sum of second column is " << sum_2ndcolumn << endl;
	cout << "The sum of third column is " << sum_3rdcolumn << endl;


	return 0;
}
*/

// Code#4 Pass 2D Array into a function printing all the elements 

#include<iostream>
#include<string>
using namespace  std;

void print_all_element(int a[][2], int rows) {
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j <2; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


}
int main() {
	int rows = 2;
	int columns = 2;
	int mat[2][2] = { {1,2},{2,4} };
	

	print_all_element(mat, 2);

	return 0;
}