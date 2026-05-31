#include <iostream>
using namespace std;
int main() {

    /*
    1. initialisation
    2. condition check
    3. updation
    */
    int i, n;
    cin >> n; // take input n from user 
    i = 1; // initialisation
    while(i<=n) { //condition check
        cout << i << ' ';
        i = i +1; //updation
        }
    
    return 0;
}