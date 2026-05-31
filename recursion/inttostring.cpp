#include <iostream>
using namespace std;

char a[][10] = {
    "zero" , "one" , "two" ,"three", "four" , "five" ,"six" ,"seven" , "eight" , "nine" } ;
    void inttostring(int n) {
        if ( n == 0) {
            return;
        }
        int lastdigit = n % 10;
        cout << a[lastdigit] << " ";
        inttostring(n / 10);
    }
int main() {
    int n;

    cin >> n;
    inttostring(n);
   return 0;

}