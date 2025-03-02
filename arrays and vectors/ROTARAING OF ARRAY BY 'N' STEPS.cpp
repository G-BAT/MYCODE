#include <iostream>
using namespace std;

void left(int arr[], int st,int ed) {
    while (st<ed){
        int temp=arr[st];
        arr[st]=arr[ed];
        arr[ed]=temp;
        ++st,--ed;
    }
}

void reverse(int arr[],int n, int k){
    k%=n;
    left(arr,0,n-1);
    left(arr,0,k-1);
    left(arr,k,n-1);
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(x) / sizeof(x[0]);
    int k = 2;
    reverse(x,n,k);
    for(int y:x){
        cout << y << " ";
    }

    return 0;
}