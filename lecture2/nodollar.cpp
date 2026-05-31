#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch ;
    int cnt = 0;
    while ( ch != '$'){
        cnt++;
        cin >> ch;

    } 
    cout << "count till dollor :" << cnt << endl;
    
    return 0;
}
