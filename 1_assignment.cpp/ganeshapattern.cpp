#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = (N + 1) / 2;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {

            if (i == mid)
                cout << "*";

            else if (i == 1 && j >= mid)
                cout << "*";

            else if (i == N && j <= mid)
                cout << "*";

            else if (i < mid && (j == 1 || j == mid))
                cout << "*";

            else if (i > mid && (j == mid || j == N))
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}