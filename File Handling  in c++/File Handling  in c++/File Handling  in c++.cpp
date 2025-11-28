// File Handling  in c++.cpp 

/*

// Ask user for 5 names and   store data in the name file 
#include <iostream>
#include<string >
#include<fstream>

using namespace std;

int main()
{
	ofstream aj("C:\\Users\\User\\Name5b.txt");

	string names;
	int i = 0;
	while (i != 5) {
		cout << "Please enter the name  " << endl;
		getline(cin, names);
		aj << names;
		i++;
	}
	


	

	return 0;
}

*/

// #2 Read a file and count how many lines it has 

#include<iostream>
#include<fstream>
#include<string >



using namespace std;

int main() {


	ifstream abj;
	abj.open("C:\\Users\\User\\Name5b.txt");

	string data;
	int lines = 0;

	while (getline(abj, data)) {
		lines++;
	}
	
	
	cout << "The number of lines are " << lines << endl;

	return 0;
}
