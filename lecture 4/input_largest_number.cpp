#include <iostream>
using namespace std;
int main() {
   // int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // int n = sizeof (a) / sizeof (int);
    
int a[1000];
int n;
cin>> n;
for ( int i = 0; i < n; ++i)
{
    cin >> a[i];

}
int mx = INT_MIN;

for (int i = 0; i < n; ++i)
{
    if (a[i] > mx) {
        mx = a [i];
    }
}
cout << "largest :" << mx << endl;
return 0;
}