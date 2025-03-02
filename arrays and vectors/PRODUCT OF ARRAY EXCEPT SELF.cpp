//METHOD 1

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4};
    vector<int>ans(arr.size(),1);

    int prefix=1;
    for(int i=0; i<arr.size(); ++i){
        ans[i]=prefix;
        prefix*=arr[i];
    }

    int suffix=1;
    for(int i=arr.size()-1; i>=0; --i){
        ans[i]*=suffix;
        suffix*=arr[i];
    }
    for(int i:ans){
        cout << i << " ";
    }
}

/*
METHOD 2

#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> arr={5,4,3,2,1};
    vector<int>a(arr.size(),1);
    vector<int>b(arr.size(),1);
    vector<int>ans(arr.size(),1);

    for(int i=1; i<arr.size(); ++i){
        a[i]=a[i-1]*arr[i-1];
    }
    
    for(int i=arr.size()-2; i>=0; --i){
        b[i]=b[i+1]*arr[i+1];
    }

    for(int i=0; i<arr.size(); ++i){
        ans[i]=a[i]*b[i];
    }

    for(int k:b){
        cout << k << " ";
    }
}
*/

/*
METHOD 3

#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int>a;

    for(int i=0; i<arr.size(); ++i){
        int ans=1;
        for(int j=0; j<arr.size(); ++j){
            if(i!=j){
                ans*=arr[j];
            }
        }
        a.push_back(ans);
    }

    for(int k :a){
        cout << k << " ";
    }
}
*/