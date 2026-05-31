#include <iostream>
using namespace std;

long long reverseNumber(long long n) {
    long long rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long A, B;
        cin >> A >> B;

        long long revA = reverseNumber(A);
        long long revB = reverseNumber(B);

        long long sum = revA + revB;

        long long result = reverseNumber(sum);

        cout << result << endl;
    }

    return 0;
}