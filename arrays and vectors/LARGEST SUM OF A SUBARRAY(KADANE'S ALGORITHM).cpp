//METHOD 1
#include <iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int sum=0,maxx=INT_MIN;

    for(int i=0; i<5; ++i){
        sum+=a[i];
        maxx=max(sum,maxx);
        if(sum<0){
            sum=0;
        }
    }

    cout << maxx;

}

//METHOD 2

// #include <iostream>
// #include <vector>
// using namespace std;



// int main() {
    
//     int a[]={1,-2,7,2,1,-2,5};
//     int size =sizeof(a)/sizeof(a[0]);
//     int maxx=INT_MIN;

//     for(int i=0; i<size; ++i){
//         int currentsum=0;
//         for(int j=i; j<size; ++j){
//             currentsum+=a[j];
//             maxx=max(currentsum,maxx);
//         }
//     }

//     cout << "maximum subarray sum is " << maxx;

// }