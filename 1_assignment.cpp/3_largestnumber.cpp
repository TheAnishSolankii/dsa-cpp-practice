#include <iostream>
using namespace std;
int main() {
    int a , b , c , d , e;
    cin >> a >> b >> c >> d >> e;
    if (a >= b && a >= c && a >= d && a >= e )
    cout << a;
else if ( b >= c && b >= d && b >= e)
    cout << b;
else if (  c >= d && c >= e)
    cout << c;
else if ( d >= e)
cout << d;
else 
cout << e;
    return 0;
}