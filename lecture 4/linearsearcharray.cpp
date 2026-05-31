#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4, 4, 5};
    int n = sizeof (a) / sizeof (int);
    int key;
    cin >> key;
    int indx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == key) {

            indx = i;
            break;
        }
    }

    if (indx == -1)
    {
        cout << "Not found" << endl;
    }
    else {
        cout << "element found at: " << indx << endl;
    }
    return 0;
}