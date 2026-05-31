#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int position = 1;
    int oddSum = 0;
    int evenSum = 0;

    while (n > 0) {
        int digit = n % 10;   // extract last digit

        if (position % 2 == 1) {
            oddSum += digit;   // odd position
        }
        else {
            evenSum += digit;  // even position
        }

        n = n / 10;  // remove last digit
        position++;  // move to next position
    }

    cout << oddSum << endl;
    cout << evenSum << endl;

    return 0;
}