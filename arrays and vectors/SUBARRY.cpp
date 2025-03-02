#include <iostream>
#include <vector>
using namespace std;



int main() {
    int v[]={1,2,3,4,5};
    int n=5;

    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            for(int k=i; k<=j; ++k){
                cout << v[k];
            }
            cout << " ";
        }
        cout << "\n";
    }


}
