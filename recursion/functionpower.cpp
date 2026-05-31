#include <iostream>
using namespace std;
int powerfxn ( int x , int n)
{
if ( n == 0)
 return 1;
return ( x*powerfxn(x, n - 1));}


int main () {
    cout << powerfxn(2,12) << endl;
    return 0;

}


