#include <iostream>
using namespace std;


int main(){
    int x[]={1,2,3,4,5,6};
    int s1=sizeof(x)/sizeof(x[0]);
    int y[]={4,5,6,7,8,9};
    int s2=sizeof(y)/sizeof(y[0]);

    for(int i=0; i<s1; ++i){
        for(int j=0; j<s1; ++j){
            if (x[i]==y[j]){
                cout << x[i] << " ";
            }
        }
    }
}