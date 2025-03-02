#include <iostream>
using namespace std;

void s(int x[],int s){
    int st=0,ed=s-1;
    while (st<=ed){
        int t=x[st];
        x[st]=x[ed];
        x[ed]=t;
        ++st,--ed;
    }
}

int main(){
    int x[]={1,2,3,4,5,6};
    int ss=sizeof(x)/sizeof(x[0]);
    s(x,ss);
    for(int y:x){
        cout << y << " ";
    }
}