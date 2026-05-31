#include <iostream>
using namespace std;
bool issorted(int *a, int n) {
    if (n == 1 or n == 0)
    {
        return true;
    }
    if (a[0] <= a[1] and issorted (a + 1, n - 1) == true) {
        return true;
    }
    return false;
     
}

    
    return 0;



