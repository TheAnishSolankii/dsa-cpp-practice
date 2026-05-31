#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int num = 1; num <= 1000; num++) {
        int original = num;
        int sum = 0;
        int temp = num;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + pow(digit, 3);   // for 3 digits
            temp = temp / 10;
        }
        
        if (sum == original) {
            cout << num << " ";
        }
    }
    return 0;
}