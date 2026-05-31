#include<iostream>
#include<cstring>
using namespace std;
 
int stringtoint (char *a , int n) {
    if ( n == 0) {
        return 0;

    }
    int chotaAns = stringtoint(a, n - 1);
    int last_digit = a[n - 1] -'0';
    return chotaAns * 10 + last_digit;
}
int main() {
    char a[] = "1234 ";
    int n = strlen(a);
    int ans = stringtoint(a, n);
    cout << ans << endl;
    cout << ans + 10 << endl;
}