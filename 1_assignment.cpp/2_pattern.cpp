#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n; // You can change this value to print more or fewer rows
    

    for (int i = 1; i <= n; i++) {

        // Special case for first row
        if (i == 1) {
            cout << 1;
        }
        else {
            for (int j = 1; j <= i; j++) {

                // First or Last position
                if (j == 1 || j == i) {
                    cout << i - 1;
                }
                else {
                    cout << 0;
                }
            }
        }

        cout << endl; // move to next line
    }

    return 0;
}