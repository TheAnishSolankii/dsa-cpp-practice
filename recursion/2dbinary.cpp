#include <iostream>
using namespace std;
int main() 
    
   

void binarySearch2D(int a[][100], int n, int m, int key){
    int s = 0;
    int e = n*m - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        int row = mid / m;
        int col = mid % m;

        if (a[row][col] == key) {
            cout << "Key found at " << row << ", " << col << endl;
            return;
        }
        else if (a[row][col] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    cout << "Key not found\n";

 return 0;
}
