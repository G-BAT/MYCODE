#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int p=-2;
    double x=2;
    double a=1;
    bool l=false;
    if(p<0){
        p=abs(p);
        l=true;
    }

    while(p!=0){
        if(p%2==0){
            x*=x;
            p/=2;
        }
        else{
            a*=x;
            p-=1;
        }
    }
    if(l){
        a=1.0/a;
    }
    cout << a;
}