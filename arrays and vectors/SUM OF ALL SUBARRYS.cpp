#include <iostream>
#include <vector>
using namespace std;



int main() {
    int v[]={1,2,3,4,5};
    int n=5,sum=0;

    for(int i=0; i<n; ++i){
        int cs=0;
        for(int j=i; j<n; ++j){
            cs+=v[j];
            sum+=cs;
        }
    }

    cout << sum;

}