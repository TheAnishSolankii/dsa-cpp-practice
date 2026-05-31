#include<iostream>
#include<climits>
using namespace std;
int main () {

   int ans = INT_MIN;
   int n;
   cin>>n;
   int i=1;
   while (i<=n){

    int x;
    {               
    cin >> x; 
     if (x>ans )
         ans =x;
   }
         i=i+1;
} 

    cout << "Largest : " << ans << endl;    

    return 0;
}