// Binary Searcg h.cpp : 

#include <iostream>
#include<string >

using namespace std;
/*
void binarysearch(int* A, int l,int h,int k) {
  
    int m = (l + h) / 2;

    if (l > h) {
        cout << "Element not Found " << endl;
        return ;
    }

    if (A[m] == k) {
        cout << " Element  is found" << endl;
        return ;
    }
    else if (A[m] < k) {
        l = m + 1;
        binarysearch(A,l,h,k);
    }
    else {
        h = m - 1;
        binarysearch(A, l, h, k);
    }

   
}
*/

/*
void binarysearch(int* A, int l, int h, int k) {
    int m = (l + h) / 2;


    if (l > h) {
        cout << "Element  is not found " << endl;
    }
    if (A[m] == k) {
        cout << "Roti khool do  , Mubarak ho Element mil gia " << endl;
    }
    else if (A[m] < k) {
        l = m + 1;
        binarysearch(A, l, h, k);
    }
    else {
        h = m - 1;
        binarysearch(A, l, h, k);
    }


}
*/

void binarysearch(int *A,int  l , int h, int k) {

    int m = (h + l) / 2;
    if (l > h) {
        cout << "Element is not found " << endl;
        return;

    }
    if (A[m]==k) {
        cout << "Element is found " << endl;
        return;
    }
    else if (A[m] < k) {
        l = m + 1;

        binarysearch(A, l, h, k);
    }
    else {
        h = m - 1;
       binarysearch(A, l, h, k);

    }
}

void binarysearych(int *A,int l, int h, int k) {
    int m = (h + l) / 2;

    if (A[m] == k) {
        cout << "Element is found " << endl;
    }
    else if (A[m] < k) {
        binarysearch(A,m+1, h,k);
    }
    else {
        binarysearch(A, l, m - 1, k);
    }
}

int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    binarysearch(a,0,9,4);

}

