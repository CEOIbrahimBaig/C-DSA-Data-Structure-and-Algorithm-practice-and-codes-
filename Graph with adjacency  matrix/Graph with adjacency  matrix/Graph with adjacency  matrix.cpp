// Graph with adjacency  matrix.cpp :

#include <iostream>
#include<string>

using  namespace  std;

int main()
{

	int n;
	int e; 

	cout << "Enter number of vertices " << endl;
	cin >> n;
	cout << "Enter number of Edges" << endl;
	cin >> e;

	int adj[100][100];// For making the edges in table as 0

	cout << "Enter Edges with respect to (U,V)" << endl;
	
	for (int i = 0; i < e; i++) { // For making the edges in table as 1 

		int row,column;
		cin >> row;
		cin >> column;

		adj[row][column];
	}

	cout << "Matrix is" << endl;

	//Printing the matrix 

	for (int i = 0; i < e; i++) {

		for (int j = 0; j < n; j++) {

			cout << adj[i][j] << " ";

		}
		cout << endl;
	}

}

