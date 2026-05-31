#include <iostream>
using namespace std;

void reversePrint(int arr[], int n, int i) {
    // Base case
    if (i == n)
        return;

    // Go forward first
    reversePrint(arr, n, i + 1);

    // Print while coming back
    cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;

    int arr[1005];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reversePrint(arr, n, 0);

    return 0;
}