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
    int main () {
        int a[]= {1,3,5,7,2,7};
        int n = sizeof(a)/sizeof(int);
if (contain7(a,n)){
    cout  << "7 hai";


}
else {
     cout << "7 nahi hai";

}

        
   
    return 0;
}