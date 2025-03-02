//METHOD 1
#include <iostream>
#include <vector>
using namespace std;

int lol(int x[],int s){
    int m=x[0],j=0;
    for(int i=1; i<s; ++i){
        if(x[i]>m){
            m=x[i];
            j=i;
        }
    }
    return j;
}

int main(){
    int x[]={7,2,3,5,7,6,1,7};
    int s=sizeof(x)/sizeof(x[0]);
    int a=lol(x,s);
    int ll=x[a];
    for(int i=0; i<s; ++i){
        if (x[i]==ll){
            x[i]=0;
        }
    }
    int b=lol(x,s);
    cout << x[b];
}

//METHOD 2

// #include <iostream>
// #include <vector>
// using namespace std;

// int lol(int x[],int s){
//     int max=INT_MIN,max2=INT_MIN;
//     for(int i=0; i<s; ++i){
//         if(x[i]>max){
//             max=x[i];
//         }
//     }

//     for(int i=0; i<s; ++i){
//         if(x[i]>max2 && x[i]!=max){
//             max2=x[i];
//         }
//     }

//     return max2;
// }

// int main(){
//     int x[]={1,2,3,4,5,6,7};
//     int y=7;
//     int a=lol(x,y);
//     cout << a;

// }