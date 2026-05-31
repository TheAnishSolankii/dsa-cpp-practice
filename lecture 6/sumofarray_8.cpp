#include <iostream>
using namespace std;

void ArrayPair(int a[], int n) {
    for (int i = 0; i < n; i++) {
       for( int j = i + 1;j<n; j++){
        if (a[i] + a[j] == 6) {
            cout << a[i] << " ," << a[j] << endl;
        }
        }
    }
}

int main() {
    int a[5] = {1, 3, 2, 5, 4};
    int n = sizeof(a) / sizeof(int);

    ArrayPair(a, n);

    return 0;
}