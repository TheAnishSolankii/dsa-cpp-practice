#include<iostream>
using namespace std;
int sumofarray(int a[5],int n ){
int sum=0;
for (int  i = 0; i < n; i++){

  sum+=a[i];
     /* code */
}

return 0;
}


int main () {
   
   int a[5]={1,2,3,4,5};
   int n = sizeof(a)/sizeof(int);
    int ans= sumofarray(a,n);
   cout << ans <<endl;
    return 0;
}