/*
BINARY SEARCH -> for binary search make sure the array is sorted

#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5,6,7,8};
    int size =sizeof(a)/sizeof(a[0]);
    int target=100,low=0,high=size-1,z=0;

    while (low<=high){

        int mid=(low+high)/2;

        if (target<a[mid]){
            high=mid-1;
        }

        else if(target>a[mid]){
            low=mid+1;
        }

        else{
            cout << "found it at index " << mid;
            z=1;
            break;
        }
    }

    if(z==0){
        cout << "not found";
    }
}
---------------------------------------------------------------

LINEAR SEARCH

#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5,6,7,8};
    int size =sizeof(a)/sizeof(a[0]);
    int target=100,z=0;

    for(int i=0; i<size; ++i){
        if (a[i]==target){
            cout << "element fount at index " << i;
            z=1;
            break;
        }
    }
    
    if(z==0){
        cout << "not found";
    }
}
*/