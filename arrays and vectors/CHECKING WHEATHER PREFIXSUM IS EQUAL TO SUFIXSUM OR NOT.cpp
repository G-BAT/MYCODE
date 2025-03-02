#include <iostream>
#include <vector>
using namespace std;

bool lol(vector<int> &a){
    int t=0;
    for(int i=0; i<a.size(); ++i){
        t+=a[i];
    }
    int p=0;
    for(int i=0; i<a.size(); ++i){
        p+=a[i];
        int s=t-p;
        if(p==s){
            return true;
        }
    }
    return false;

}

int main(){
    vector<int>a={6,2,4,3,1};
    cout << lol(a);

}