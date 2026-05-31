#include<iostream>
using namespace std;
void factorial (int n) {
    cin >> n;
    int fact = 1;
    for (int i=1;i<=n;i++) {
        fact *= i;
    }
    cout << fact << endl;

}
int main () {
    factorial(5);

  
    return 0;
}
