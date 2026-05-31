#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch ;
    int cnt = 0;
    ch = cin.get();
    while ( ch != '$'){
        cnt++;
        ch = cin.get();

    } 
    cout << "count till dollor :" << cnt << endl;
    
    return 0;
}