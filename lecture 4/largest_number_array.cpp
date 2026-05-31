#include <iostream>
using namespace std;
int main() {
    int a[100] = {123, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof (a) / sizeof (int);
    int max = a[0];
    for (int i  = 1; i < n; i++) {
        if ( a[i] > max) {
            max = a[i];

        }
    }   
    cout << "largest number is:" << max <<endl;
    return 0;
}