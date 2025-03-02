#include <iostream>
using namespace std;

void sort(int x[],int size){
    int temp;
    for(int i=0;i<size-1;++i){
        for(int j=0;j<size-i-1;++j){
            if (x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        
        }
    }    
}


int main(){
    int x[]={2,6,4,1,7,0,1,2,3,4,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
    int s=sizeof(x)/sizeof(x[0]);
    sort(x,s);

    
    for (int i=0; i<s; ++i){
        if(x[i]!=x[i+1]){
            cout << x[i] << " ";
        }
    }
}