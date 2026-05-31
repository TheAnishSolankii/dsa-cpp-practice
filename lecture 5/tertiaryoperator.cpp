#include <iostream>
using namespace std;
int main() {
    int a = 8;
    (a >= 10) ? cout << "hello\n" : cout << "world\n";
    bool x = ( a % 2 == 0 ? true : false);
    if (x) {
        cout << "even hai\n";

    }
    else { 
        cout << "odd hai\n";

    }
     
    return 0;
}