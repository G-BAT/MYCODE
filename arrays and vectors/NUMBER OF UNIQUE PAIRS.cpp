#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

   vector<int> v={2,2,2};
   int i=0,j=v.size()-1,c=0,t=4;

   while(i<j){
        int p=v[i]+v[j];

        if(p>t){
            --j;
        }
        else if(p<t){
            ++i;
        }
        else if(p==t){
            ++c;
            ++i,--j;
        }
    }
    cout << c;
}