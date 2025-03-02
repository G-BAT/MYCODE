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
    cout << "max value of an array is:"<< x[maxi] << "\n";
    cout << "min value of an array is:"<< x[mini] << "\n";
}

int main(){
    int x[]={2,6,4,1,7,0};
    int s=sizeof(x)/sizeof(x[0]);
    lol(x,s);
}
