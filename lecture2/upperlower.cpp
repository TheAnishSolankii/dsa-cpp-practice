#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch>='A' and ch <='Z')
    { cout << "upper case\n";

    }
    else if (ch>='a' and ch<='z')
     { cout << "lower case\n";
    }
    else { 
        cout<< " Invalid";
    }

 return 0;
}
    