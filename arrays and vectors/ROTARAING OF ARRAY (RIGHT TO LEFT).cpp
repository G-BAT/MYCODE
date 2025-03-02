#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp=arr[n-1];
    for(int i=n-1; i>0; --i){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
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