#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> arr={9,23,45,69,78};
    int t=56;
    int l=0,r=arr.size()-1;
    bool a=false;
    while (l<r){
        int p=abs(arr[l]-arr[r]);
        if(p<t){
            ++l;
        }
        else if(p>t){
            --r;
        }
        else{
           a=true;
            break;
        }
    }
    if(a){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}