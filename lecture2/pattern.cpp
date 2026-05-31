#include <iostream>
using namespace std;
int main() {
    int n, number;
    cin >> n;
    int r , i;
    number =1;
    r=1;
    while (r<=n)
    {
        i=1;
        while (i <=r){
        cout << number << ' ';
       number=number + 1;
       i = i+1;

    }
    cout << '\n';
    r=r+1;
}
    return 0;}
