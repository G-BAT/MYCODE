#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x[]={3,1,2,4,0,6};

    int t=5,c=0;

    for(int i=0; i<6; ++i){
        for(int j=i+1; j<6; ++j){
            for(int k=j+1; k<6; ++k){
                if(x[i]+x[j]+x[k]==t){
                    ++c;
                }
            }
        }
    }
    cout << c;
}