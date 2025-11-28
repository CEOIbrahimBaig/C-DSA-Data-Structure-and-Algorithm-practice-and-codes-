// Logics for card sorting.cpp 

#include <iostream>
using namespace std;

class abj{
public:

    void sort(int *arr,int n) {
        int a;
        int b;
        int temp;
        for (int i = 0; i < n; i++) {   // 1 5 7 2 4 
            for (int j = 0; j < n - i - 1;j++) {          // a b 
                a = 0;
                b = 1;

                if (arr[a]> arr[b]) {
                    temp = arr[a];//2 5 2
                    arr[a] = arr[b];//5 5 2
                    arr[b] = temp;// 5 2 2 
        
                }
                b++;
            }
            a++;
        }
    }
    void traversal(int arr, int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }

};
int main()
{
    int arr[10] = { 2,5,10,3,4,1,6,7,8,9 };

    abj c;
    c.sort(arr, 10);
   
}
