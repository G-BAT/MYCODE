#include <iostream>
using namespace std;

void lol(int x[], int s){
    int maxi=0,mini=0;
    for(int i=1; i<s; ++i){
        if(x[i]>x[maxi]){
            maxi=i;
        }
        if (x[i]<x[mini]){
            mini=i;
        }
    }
    int t=x[maxi];
    x[maxi]=x[mini];
    x[mini]=t;
}

int main(){
    int x[]={2,6,4,1,7,0};
    int s=sizeof(x)/sizeof(x[0]);
    lol(x,s);
    for(int y:x){
        cout << y << " ";
    }
}