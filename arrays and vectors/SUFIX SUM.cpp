#include <iostream>
#include <vector>
using namespace std;

void lol(vector<int> &a){
    for(int i=a.size()-2; i>=0; --i){
        a[i]+=a[i+1];
    }

}

int main(){
    vector<int>a={5,4,1,2,3};
    lol(a);
    for(int j:a){
        cout << j << " ";
    }

}