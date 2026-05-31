#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: "; // here we are taking input from the user about the values of array 
    cin >> n;

    int arr[n]; // initialization of the array 

    cout << "Enter elements:\n"; // this is just a normal step in which we input our number of value , which are to be sorted
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > x) { // swaping the values 
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = x; 

    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}