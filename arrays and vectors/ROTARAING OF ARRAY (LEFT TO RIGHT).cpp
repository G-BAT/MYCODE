#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp=arr[0];
    for(int i=0; i<n-1; ++i){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(x) / sizeof(x[0]);
    leftRotateByOne(x,n);
    for(int y:x){
        cout << y << " ";
    }

    return 0;
}