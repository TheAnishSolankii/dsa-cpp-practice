#include <iostream>
using namespace std;
bool checkprime (int n ){
    int i=2 ;
    while (i<n){if (n%i==0){
        return false;
        
    } i = i+1 ;
}
return true;
}
int main() {
    int n,i ;
    cin >> n;
    if (checkprime(n)) {
        cout << "prime\n";
    } else {
        cout << "not prime\n";
        return 0;
    }
 i = i+1 ;

cout <<"prime\n";
    
    return 0;
}