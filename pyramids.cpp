/*#include <iostream>
using namespace std;

int main(){

  int r=5;

  for (int i=r; i>=1; --i ){
    for(int j=i;j>=1; --j){
        cout << "o";
    }
    cout << "\n";
  }


ooooo
oooo
ooo
oo
o
*/


/*
  int r=5;

  for (int i=1; i<=r; ++i ){
    for(int j=1;j<=i; ++j){
        cout << "o";
    }
    cout << "\n";
  }

o
oo
ooo
oooo
ooooo
*/


/*
  int r=5,n=1;

  for (int i=1; i<=r; ++i ){
    for(int j=1;j<=i; ++j){
        cout << n << "\t";
        ++n;
    }
    cout << "\n";
  }

1
2       3
4       5       6
7       8       9       10
11      12      13      14      15
--------------------------------------------------
int n=5,x=1;
for(int i=1; i<=n; i++){

    int s=n-i;
    for(int k=0; k<s; k++){
        cout<< " ";
    }

  for(int j=1; j<=i; ++j){
    cout << x << " ";
    x++;
  }
  cout<<endl;
}
    1 
   2 3
  4 5 6
 7 8 9 10
11 12 13 14 15
_____________________________________________________________________


int n=5,x=1;

for(int i=1; i<=n; ++i){
  int s=n-i;
  for (int k=0; k<s; ++k){
     cout << " ";
  }

  for (int j=1; j<=(2*i-1); ++j){
    cout << j;
  }

  cout <<endl;

}

for(int i=1; i<=n; ++i){
  
  for (int k=0; k<i; ++k){
     cout << " ";
  }

  for (int j=1; j<=(2*(n-i))-1; ++j){
    cout << j;
  }

  cout <<endl;

}

    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
________________________________________________________________________


int n=5;
cout<<"(^-^)\n";

for(int p=1; p<=3; p++){
    for(int i=1; i<=n; ++i){
    
    for(int j=0; j<i; ++j){
        cout <<" ";
    }
    for(int k=1; k<=3; k++){
        cout<< "*";
    }
    cout << endl;
 
}

for(int i=1; i<=n; ++i){
  
  for (int k=n; k>i; --k){
     cout << " ";
  }

  for (int j=1; j<=3; ++j){
    cout << "*";
  }

  cout <<endl;

}
}
cout<<"\\\\\\";

(^-^)
 ***
  ***
   ***
    ***
     ***
    ***
   ***
  ***
 ***
***
 ***
  ***
   ***
    ***
     ***
    ***
   ***
  ***
 ***
***
 ***
  ***
   ***
    ***
     ***
    ***
   ***
  ***
 ***
***
\\\
_____________________________________________________________________________

    for(int i=1; i<=n; ++i){

    int s=n-i;

    for(int j=0; j<s; ++j){
        cout <<" ";
    }

    for(int k=1; k<=(2*i)-1; ++k){
        cout <<(char)('@'+k);
    }

    cout <<endl;
    
}

for(int i=1; i<=n; ++i){
    
    for(int j=0; j<i; ++j){
        cout <<" ";
    }

    for(int k=1; k<=(2*(n-i))-1; ++k){
        cout <<(char)('@'+k);
    }
    
    cout <<endl;
    
}

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
------------------------------------------------------------------------------

int n=5;
for(int i=1; i<=n; ++i){
    for(int j=0;j<n-i; ++j){
        cout << " ";
    }
    for(int k=1;k<=i;++k){
        cout << k;
    }
    if(i!=1)
     for(int k=i-1;k>=1;--k){
        cout << k;
    }


    cout << "\n";
}
    1
   121
  12321
 1234321
123454321
--------------------------------------------------------------------------------------------------

int n=5;
for(int i=1; i<=n; ++i){
    for(int j=0; j<n-i; ++j){
        cout << " ";
    }
    cout << "*";
    
    if(i!=1){
    for(int k=0; k<2*i-3;++k){
        cout << " ";
     }
     cout <<"*";
    }

    cout << "\n";
}

for(int i=1; i<=n-1; ++i){
    for(int j=0; j<i; ++j){
        cout << " ";
    }
    cout<< "*";
    if(i!=n-1){ 
        for(int k=0; k<(2*(n-i))-3; ++k){
        cout <<" ";
    }
    cout << "*";
    }
    cout << "\n";
}

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
--------------------------------------------------------------------------

int n=5;

for(int i=1; i<=n; ++i){
    for(int j=0; j<i; j++){
        cout << "*";
    }
    for(int k=0; k<=(2*(n-i))-1; ++k){
        cout << " ";
    }
    for(int j=0; j<i; ++j){
        cout << "*";
    }
    
    cout<<"\n";
}

for(int i=1;i<=n-1; ++i){
    for(int j=0; j<n-i; ++j){
        cout << "*";
    }
    for(int j=0; j<=2*i-1; j++){
        cout << " ";
    }
      for(int j=0; j<n-i; ++j){
        cout << "*";
    }
    cout << "\n";

}

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
__________________________________________________________________


int n=5;

for(int i=1; i<=n; ++i){
    for(int j=0; j<i; j++){
        cout << "*";
    }
    for(int k=0; k<=(2*(n-i))-1; ++k){
        cout << " ";
    }
    for(int j=0; j<i; ++j){
        cout << "*";
    }
    
    cout<<"\n";
}

for(int i=1; i<=2; i++){
    for(int j=1; j<=1; ++j){
        cout << "*";
    }
    for(int j=0; j<=2; ++j){
        cout << " ";
    }
      for(int j=1; j<=2; ++j){
        cout << "*";
    }
     for(int j=0; j<=2; ++j){
        cout << " ";
    }
     for(int j=1; j<=1; ++j){
        cout << "*";
    }
    cout << "\n";
}

for(int i=1; i<=1; ++i){
    for(int j=1; j<=10; ++j){
        cout <<"*";
    }
     cout << "\n";
}

for(int i=1; i<=1; ++i){
    for(int j=1; j<=1; j++){
        cout << "*";
    }
        for(int j=1; j<=8; ++j){
        cout << " ";
    }
      for(int j=1; j<=1; ++j){
        cout << "*";
    }
    cout << "\n";
}

for(int i=1; i<=1; ++i){
    for(int j=1; j<=10; ++j){
        cout <<"*";
    }
     cout << "\n";
}

*        *
**      **
***    ***
****  ****
**********
*   **   *
*   **   *
**********
*        *
**********

}
*/