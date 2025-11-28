// 3rd semester mid practice without  linkedlist.cpp :

#include <iostream>
#include<string>


using namespace std;

 // For linear search 


void linear_search(int* a,int n,int k) {

	int j = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {
			cout << "Element is found " << endl;
			j = 1;
			return;
		}
		else if (i==n-1 && j == 0) {
			cout << "Element is not found " << endl;
		}
	}
}
void binarysearch_non_recursion(int* a, int l,int h,int k) {

	while (l <= h) {

		int m = (l + h) / 2;

		if (a[m] == k) {
			cout << "Element found " << endl;
			return;
		}
		else if (a[m] <k) {
			l = m + 1;
		}
		else {
			h = m - 1;
		}
	}
}
void binarysearch_recusion(int* a, int l, int h, int k) {

	int m = (l + h) / 2;

	if (a[m] == k) {
		cout << "Element is found " << endl;
	}
	else if (a[m] < k) {
		binarysearch_recusion(a, m + 1, h, k);
	}
	else {
		binarysearch_recusion(a, l,m-1, k);
	}

}
void printarray (int a[3][3], int rows, int columns) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}
int factorial(int n) {    //For calculating factorial using Recursion 

	if (n == 0 || n==1) {
		return 1;
	}
	else {
		return factorial(n - 1) * n;
	}
}
 /*
int palindrom(string  g,int start, int end) {
	
	if (start >= end) {
		return 1;
 }

 else if (g[start] != g[end]) {
		 return 0;
	 }
 else {
		return palindrom(g, start + 1, end - 1);
	}
}
*/

int palindrom(string s, int start, int end)
{
	if (start >= end) {
		return 0;
	}
	
	if (s[start] != s[end]) {
		return 1;
	}
	else {
		return palindrom(s, start + 1, end - 1);
	}

}
int factorialb(int n) {
	if (n ==0 || n == 1) {
		return 1;
	}
	else {
		return  factorial(n - 1) * n;
	}
}
int fibonachi(int n) {

	if (n == 1 || n==0) {
		return 1;

	}
	else {
		return fibonachi(n - 1) + fibonachi(n - 2);
	}


}

int main()
{
	/*
	int a[] = {3,4,5,8,52,531};
	int n = sizeof(a) / sizeof(a[0]);
	binarysearch_recusion(a, 0, n, 531);



	*/
	/*
	int rows, columns;

	cout << "Please enter number of rows " << endl;
	cin >> rows;
	cout << "Please enter number of columns" << endl;
	cin >> columns;

	int a[10][10];

	for (int i = 0; i < rows; i++) {  // How to enter element in 2d array

		for (int j = 0; j < columns; j++) {
			cin >> a[i][j];
		}
	}
	// to print 2d array

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;

	}
	// To print sum of rows

	for (int i = 0; i < rows; i++) {
		int sumrows = 0;
		for (int j = 0; j < columns; j++) {
			sumrows = sumrows + a[i][j];
		}
		cout << "Sum of " << i+1 << "row is " << sumrows << endl;
	}

	// to print sum of columns just change the method of loops


	for (int j = 0; j < columns; j++) {
		int sumcolumns = 0;
		for (int i = 0; i < rows; i++) {
			sumcolumns = sumcolumns + a[i][j];
		}
		cout << "Sum of " << j + 1 << " column is " << sumcolumns << endl;
	}


	// To print transpose of matrix

	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {

			cout << a[j][i] << " ";     ////Replace [i][j] with[j][i]
		}
		cout << endl;

	}

	int a[3][3] = { {1,2,3},{2,4,5},{6,5,3} };
*/

/*
// For Finding factorial  qithout recursion
int n;
cout << "Please enter the number whoose factorial you want " << endl;
cin >> n;
int fac = 1;
for (int i = 1; i <=n; i++) {
	fac = fac * i;
}
cout << "The factorial of " << n << " is " << fac << endl;
*/


/*
// Find facotorial by using recursion
int n;

cout << "Please enter the number whose facotorial You want " << endl;
cin >> n;

cout<<factorial(n);// Recursion method written above

*/

// Check if string is palindrome or not  wihtout using recursion 
/*
string abj;
cout << "Please enter the string " << endl;
cin >> abj;
int k = 0;
int n = abj.length()-1;

for (int i = 0; i < n; i++) {
	if (abj[i] != abj[n]) {
		k = 1;
	}
	n--;
}

if (k == 1) {
	cout << "String is not palindrome " << endl;
}
else {
	cout << "Palindrome string found " << endl;
}

*/
//Another method 
/*
string abj;
cout << "Please enter the string " << endl;

cin >> abj;

if (palindrom(abj, 0, abj.length() - 1) == 0) {
	cout << "Not Plaindrome ";
}
else {
	cout << "Palindrome " << endl;
}
*/	/*
	string abj;
	cout << "Please enter the string you want to check " << endl;
	cin >> abj;

	if (palindrom(abj, 0, abj.length() - 1) == 0) {
		cout << "Palindrom" << endl;

	}
	else {

		cout << "Not  palindrom ";
	}

	int n = abj.length()-1;
	int k = 0;
	for (int i = 0; i < n; i++) {

		if (abj[i] != abj[n]) {
			cout << "Not palindrome" << endl;

			k = 1;
			return 0;
		}
		n--;
	}
	if (k==0){
	cout << "Palindrome " << endl;
	}
		return 0;

	}
	*/

// Fabonichi  series 
/*
int n;
cout << "Please enter the number " << endl;
cin >> n;
int p, j, c;
p = 0;
j = 1;
for (int i = 0; i < n; i++) {
	cout << " for level " << i << "value is " << p + j << endl;

	c = j;
	j = p + j;
	p = c;
}
*//*
int n;
cout << "Please enter the number " << endl;
cin >> n;


for (int i = 0; i < n; i ++ ) {
	cout << fibonachi(i) << endl;

}
*/



}

