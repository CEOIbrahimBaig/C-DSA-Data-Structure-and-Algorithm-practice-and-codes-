git#include<iostream>

using namespace std;

void merge_array(int a[], int b[],int c[],int sizeA,int sizeB) {

	int i = 0;
	int j = 0;
	int k = 0;
	while (k < sizeA + sizeB) {

		
		if(i<sizeA && j<sizeB){
			// It means when both arrrays are not empty 
			if (a[i] < b[j]) {
				c[k] = a[i];
				k++;
				i++;
			}
			else {
				c[k] = b[j];
				k++;
				j++;
			}

		
		}
		else if (i < sizeA) {
			//If first array is empty then 
			c[k] = a[i];
			k++;
			i++;

		}
		else {
			// It means that first is full but 2nd  is empty 
			c[k] = b[j];
			k++;
			j++;

		}
		


	}
	return ;
}


int main() {
	int a[4] = { 1,2,4,5 };
	int b[4] = { 6,7,8,9 };
	
	int sizeA = sizeof(a) / sizeof(a[0]);
	int sizeB = sizeof(b) / sizeof(b[0]);

	int* c = new int[sizeA+sizeB];



	return 0; 
}