#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt = 0;
    for ( cin >> n; n > 0; n>>= 1) {
        if ( ( n & 1) ==1 )
         cnt++;


    }
    cout << "set bits :" << cnt << endl;
    
    return 0;
}