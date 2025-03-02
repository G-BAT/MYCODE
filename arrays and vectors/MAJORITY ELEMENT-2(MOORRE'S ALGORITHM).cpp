// METHOD 1

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int v[]={1,1,2,2,2};
    int n=sizeof(v)/sizeof(v[0]);
    int f=0,a=0,ff=0;

    for(int i=0; i<n; ++i){
        if(f==0){
            a=v[i];
        }
        if(a==v[i]){
            ++f;
        }
        else{
            --f;
        }
    }
    for(int i=0; i<n; ++i){
        if(a==v[i]){
            ++ff;
        }
    }
    if(ff>n/2){
        cout << "majority element is:" << a;
    }
    else{
        cout << "no majority element";
    }
    
}

//METHOD 2

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     int v[]={2,1,1,2,2};
//     int n=sizeof(v)/sizeof(v[0]);

//     for(int i:v){
//         int count=0;
//         for(int j:v){
//             if(i==j){
//                 ++count;
//             }
//         }
//         if(count>n/2){
//             cout << i;
//             break;
//         }
//     }
// }