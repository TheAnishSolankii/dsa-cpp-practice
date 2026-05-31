#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;

    cin >> s;
    cin >> n;

    int len = s.length();
    n = n % len;

    string result = s.substr(len - n) + s.substr(0, len - n);

    cout << result;

    return 0;
}