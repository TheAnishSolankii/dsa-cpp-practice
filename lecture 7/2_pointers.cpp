#include <iostream>
using namespace std;
int main() {
    int a = 1;
    int *f = &a; 
    cout << "&a : " << &a << endl;
    cout << "f :" << f << endl; // adress of a it is showing from the int *f 
    
    return 0;
}