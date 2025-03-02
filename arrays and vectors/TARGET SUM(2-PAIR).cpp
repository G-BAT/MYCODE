//METHOD 1
#include <iostream>
#include <vector>
using namespace std;

int main() {


int v[]={1,2,3,4,5};
int n=sizeof(v)/sizeof(v[0]);
int t=9;


for(int i=0; i<n; ++i){
    for(int j=1+i; j<n; ++j){
        if(v[i]+v[j]==t){
            cout << "index:" <<  i << " " << j;
        }
    }
}

}
// METHOD 2 (TWO POINTER)

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     int v[]={1,2,3,4,5};
//     int n=sizeof(v)/sizeof(v[0]);
//     int t=9;
//     int i=0,j=n-1;
    
//     while(i<j){
//         int p=v[i]+v[j];
    
//         if(p>t){
//             --j;
//         }
//         else if(p<t){
//             ++i;
//         }
//         else{
//             cout << "index:" <<  i << " " << j;
//             break;
//         }
//     }

// }