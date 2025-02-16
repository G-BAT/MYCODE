/*#include <iostream>
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

------------------------------------------------------------------
REVERSE ARRAY

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

--------------------------------------------------
INTERCHANGING THE MAXIMUM AND MINIMUM VALUE

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
-----------------------------------------------------------
UNIQUE VALUES IN AN ARRAY

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
    for(int i=0; i<size; ++i){
        cout <<x[i] << " ";
    }
    cout <<"\n";
    
    cout << x[0] << " ";
    for (int i=1; i<size; ++i){
        if(x[i]!=x[i-1]){
            cout << x[i]<<" ";
        }
    }
}


int main(){
    int x[]={2,6,4,1,7,0,1,2,3,4};
    int s=sizeof(x)/sizeof(x[0]);
    sort(x,s);

}
----------------------------------------------------------------------------
INTERSECTION OF TWO ARRAY

#include <iostream>
using namespace std;


int main(){
    int x[]={1,2,3,4,5,6};
    int s1=sizeof(x)/sizeof(x[0]);
    int y[]={4,5,6,7,8,9};
    int s2=sizeof(y)/sizeof(y[0]);

    for(int i=0; i<s1; ++i){
        for(int j=0; j<s1; ++j){
            if (x[i]==y[j]){
                cout << x[i] << " ";
            }
        }
    }
}
-------------------------------------------------------------------
TARGET SUM(2-PAIR)

#include <iostream>
#include <vector>
using namespace std;

int main() {


int v[]={1,2,3,4,5};
int n=sizeof(v)/sizeof(v[0]);
int t=9;


for(int i=0; i<n; ++i){
    for(int j=1+i; j<n; ++j){
        if(v[i]+v[j]==t){
            cout << "index:" <<  i << " " << j;
        }
    }
}

}
------------------------------------------------------------------
TARGET SUM(2-PAIR)(TWO POINTER PAIR)

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int v[]={1,2,3,4,5};
    int n=sizeof(v)/sizeof(v[0]);
    int t=9;
    int i=0,j=n-1;
    
    while(i<j){
        int p=v[i]+v[j];
    
        if(p>t){
            --j;
        }
        else if(p<t){
            ++i;
        }
        else{
            cout << "index:" <<  i << " " << j;
            break;
        }
    }

}
--------------------------------------------------------------------
TARGET SUM(3-PAIR)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x[]={3,1,2,4,0,6};

    int t=5,c=0;

    for(int i=0; i<6; ++i){
        for(int j=i+1; j<6; ++j){
            for(int k=j+1; k<6; ++k){
                if(x[i]+x[j]+x[k]==t){
                    ++c;
                }
            }
        }
    }
    cout << c;
}
------------------------------------------------------------
SECOND LARGRST IN AN ARRAY

#include <iostream>
#include <vector>
using namespace std;

int lol(int x[],int s){
    int m=x[0],j=0;
    for(int i=1; i<s; ++i){
        if(x[i]>m){
            m=x[i];
            j=i;
        }
    }
    return j;
}

int main(){
    int x[]={7,2,3,5,7,6,1,7};
    int s=sizeof(x)/sizeof(x[0]);
    int a=lol(x,s);
    int ll=x[a];
    for(int i=0; i<s; ++i){
        if (x[i]==ll){
            x[i]=0;
        }
    }
    int b=lol(x,s);
    cout << x[b];
}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#include <iostream>
#include <vector>
using namespace std;

int lol(int x[],int s){
    int max=INT_MIN,max2=INT_MIN;
    for(int i=0; i<s; ++i){
        if(x[i]>max){
            max=x[i];
        }
    }

    for(int i=0; i<s; ++i){
        if(x[i]>max2 && x[i]!=max){
            max2=x[i];
        }
    }

    return max2;
}

int main(){
    int x[]={1,2,3,4,5,6,7};
    int y=7;
    int a=lol(x,y);
    cout << a;

}
--------------------------------------------------------------------------------
ROTARAING OF ARRAY L->R

#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp=arr[0];
    for(int i=0; i<n-1; ++i){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(x) / sizeof(x[0]);
    leftRotateByOne(x,n);
    for(int y:x){
        cout << y << " ";
    }

    return 0;
}
----------------------------------------------------------------
ROTARAING OF ARRAY R->L

#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp=arr[n-1];
    for(int i=n-1; i>0; --i){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(x) / sizeof(x[0]);
    leftRotateByOne(x,n);
    for(int y:x){
        cout << y << " ";
    }

    return 0;
}
-----------------------------------------------------------
ROTARAING OF ARRAY BY 'N' STEPS
#include <iostream>
using namespace std;

void left(int arr[], int st,int ed) {
    while (st<ed){
        int temp=arr[st];
        arr[st]=arr[ed];
        arr[ed]=temp;
        ++st,--ed;
    }
}

void reverse(int arr[],int n, int k){
    k%=n;
    left(arr,0,n-1);
    left(arr,0,k-1);
    left(arr,k,n-1);
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(x) / sizeof(x[0]);
    int k = 2;
    reverse(x,n,k);
    for(int y:x){
        cout << y << " ";
    }

    return 0;
}
-----------------------------------------------------------------------------------------
SUBARRY

#include <iostream>
#include <vector>
using namespace std;



int main() {
    int v[]={1,2,3,4,5};
    int n=5;

    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            for(int k=i; k<=j; ++k){
                cout << v[k];
            }
            cout << " ";
        }
        cout << "\n";
    }


}

------------------------------------------------------------------
SUM OF SUBARRAYS

#include <iostream>
#include <vector>
using namespace std;



int main() {
    int v[]={1,2,3,4,5};
    int n=5;

    for(int i=0; i<n; ++i){
        int cs=0;
        for(int j=i; j<n; ++j){
            cs+=v[j];
            cout << cs << " ";
        }
        cout << "\n";
    }


}

-------------------------------------------------------------------

SUM OF ALL SUBARRYS

#include <iostream>
#include <vector>
using namespace std;



int main() {
    int v[]={1,2,3,4,5};
    int n=5,sum=0;

    for(int i=0; i<n; ++i){
        int cs=0;
        for(int j=i; j<n; ++j){
            cs+=v[j];
            sum+=cs;
        }
    }

    cout << sum;

}

------------------------------------------------------------

LARGEST SUM OF A SUBARRAY(KADANE'S ALGORITHM)

#include <iostream>
#include <vector>
using namespace std;



int main() {
    
    int a[]={1,-2,7,2,1,-2,5};
    int size =sizeof(a)/sizeof(a[0]);
    int maxx=INT_MIN;

    for(int i=0; i<size; ++i){
        int currentsum=0;
        for(int j=i; j<size; ++j){
            currentsum+=a[j];
            maxx=max(currentsum,maxx);
        }
    }

    cout << "maximum subarray sum is " << maxx;

}
------------------------------------------------------------------------

MAJORITY ELEMENT-1

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int v[]={2,1,1,2,2};
    int n=sizeof(v)/sizeof(v[0]);

    for(int i:v){
        int count=0;
        for(int j:v){
            if(i==j){
                ++count;
            }
        }
        if(count>n/2){
            cout << i;
            break;
        }
    }
}
-----------------------------------------------------------------

MAJORITY ELEMENT-2

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int v[]={1,1,2,2,2};
    int n=sizeof(v)/sizeof(v[0]);
    int f=1,a=v[0];

    for(int i=1; i<n; ++i){
        if(v[i]==v[i-1]){
            ++f;
        }
        else{
            a=v[i];
            f=1;
        }
        if(f>n/2){
            cout << a;
        }
    }
}
----------------------------------------------------------

MAJORITY ELEMENT-2(MOORRE'S ALGORITHM)

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int v[]={1,1,2,2,2};
    int n=sizeof(v)/sizeof(v[0]);
    int f=0,a=0;

    for(int i=0; i<n; ++i){
        if(f==0){
            a=v[i];
        }
        if(a==v[i]){
            ++f;
        }
        else{
            --f;
        }
    }
    cout << a;
}
-----------------------------------------------------------------------------

*/