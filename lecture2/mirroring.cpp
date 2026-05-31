#include <iostream>
using namespace std;
int main() {
  int n,r,i ;
  char c ;
  cin >> n;
  for ( r = 1; r <= n; ++r)
 { 
    c = 'A';
    for (i =1 ; i<= n - r + 1; i++)
    {
        cout << c << " ";
        c++;

    }
    c= c - 1;
    for( i = 1; i<=n - r + 1; i++) {
        cout << c << " ";
        c--;
    }
    cout<< endl;
 }
 for(r =n-1; r>= 1; r--) {
    c = 'A';
    for (i =1 ; i<= n - r + 1; i++)
    {
        cout << c << " ";
        c++;

    }
    c= c - 1;
    for( i = 1; i<=n - r + 1; i++) {
        cout << c << " ";
        c--;
    }
    cout<< endl;
 }
    return 0;
}