#include <iostream>
#include <algorithm> // to use sort fuunction
using namespace std;
int main() {
    int a[] = { 5 ,4 , 8 , 9 , 7, 1,};
    int n = sizeof (a) / sizeof(int);
    sort (a , a+n) ;
    for  ( int i = 0; i < n; ++i)
    {
        cout << a[i] << ' ';

    }
    cout << endl;
    return 0;
}