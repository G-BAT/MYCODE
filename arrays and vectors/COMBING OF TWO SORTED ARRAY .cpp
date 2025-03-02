#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a1={1,6,7,10},a2={0,1,3,8,11,12,15,18},a3;
    int s=a1.size()+a2.size(),l1=0,l2=0;
    for(int i=0; i<s; ++i){
        if(a1[l1]<a2[l2]){
            a3.push_back(a1[l1]);
            ++l1;
        }
        else if(a1[l1]>a2[l2]){
            a3.push_back(a2[l2]);
            ++l2;
        }
        else{
            a3.push_back(a1[l1]);
            ++l1;
        }
    }
    for(int j:a3){
        cout << j <<" ";
    }
}