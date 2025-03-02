#include <iostream>
#include <vector>
using namespace std;

void lol(vector<int> &a){
    for(int i=1; i<a.size(); ++i){
        a[i]+=a[i-1];
    }

}

int main(){
    vector<int>a={5,4,1,2,3};
    lol(a);
    for(int j:a){
        cout << j << " ";
    }

}