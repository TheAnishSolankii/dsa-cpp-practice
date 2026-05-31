#include<iostream>
using namespace std;
bool contain7 (int* a, int n){
    //base case
    if(n==0){
        return 0 ;
    }
   
        if(a[0] == 7){
        return true;
        }
       bool ans = contain7(a+1,n-1);
       return ans;
        

    
    
    
}
int Index (int *a ,int n ){
        //base case
        if(n==0){
            return -1;
        }
        // ek bucket ko maine check kia
     if(a[0]==7){
        return 0;
     }
     //choti problem ka answer recursion se pucha 
     int ans = Index(a+1,n-1);
    if(ans!=-1){
        // chote array mai jo 7 ka index hoga bade array mei +1 krna padega
    return ans+1;
    }
    // agar chote array mai 7 nahi milta toh -1 hi return krna padhega
    return -1;
}
int lastIndex (int *a , int n){
    if (n==0){
        return -1;
        }
  if(a[n-1]==7){
    return n-1;
  }
  return -1;
}
void all7 (int *a ,int n,int i ){
       if(i==n){
        return ;
       }
       if(a[i]==7){
        cout << i << " ";

       }
       all7(a,n,i+1);

}

    int main () {
        int a[]= {1,3,5,7,2,7};
        int n = sizeof(a)/sizeof(int);
        int i ;
if (contain7(a,n)){
    cout  << "7 hai";


}
else {
     cout << "7 nahi hai";

}
cout << endl;
cout  <<  Index(a,n) << endl ;

cout << lastIndex(a,n) << endl;

all7(a,n,0);
   
    return 0;
}