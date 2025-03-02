//METHOD 1

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector<int> arr={7,1,5,3,6,4};
    int ans=0,leftp=0,rightp=arr.size()-1;

    while(leftp<rightp){
        int width=rightp-leftp;
        int height=min(arr[leftp],arr[rightp]);
        int area=width*height;
        ans=max(ans,area);
        arr[leftp]<arr[rightp]?++leftp:--rightp;
    }
    cout << ans;

}

//METHOD 2

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;


// int main(){
//     vector<int> arr={7,1,5,3,6,4};
//     int ans=0;
//     for(int i=0; i<arr.size(); ++i){
//         for(int j=i+1; j<arr.size(); ++j){
//             int width=j-i;
//             int height=min(arr[i],arr[j]);
//             int area=width*height;
//             ans=max(ans,area);
//         }
//     }
//     cout << ans;

// }