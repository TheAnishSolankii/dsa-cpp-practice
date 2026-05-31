#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    switch (ch) {
        case 'N':
        cout << " north\n";
        break;
        case 'E':
        cout << " east\n";
        break;
        case 'W':
        cout << " west\n";
        break;
        case 'S':
        cout << " south\n";
        break;
        default:
        cout << " NOt a valid input\n";
    }
    return 0;
}
