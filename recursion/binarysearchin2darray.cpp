#include <iostream>
using namespace std;

// Binary search in sorted 2D array (row-wise and column-wise sorted)
bool searchMatrix(int** matrix, int rows, int cols, int target) {
    int top = 0, bottom = rows - 1;
    
    // First, find which row the target might be in
    while (top <= bottom) {
        int mid = top + (bottom - top) / 2;
        
        // Check if target is in this row
        if (matrix[mid][0] <= target && target <= matrix[mid][cols - 1]) {
            // Binary search within this row
            int left = 0, right = cols - 1;
            while (left <= right) {
                int colMid = left + (right - left) / 2;
                
                if (matrix[mid][colMid] == target) {
                    return true;
                } else if (matrix[mid][colMid] < target) {
                    left = colMid + 1;
                } else {
                    right = colMid - 1;
                }
            }
            return false;
        } else if (matrix[mid][0] > target) {
            bottom = mid - 1;
        } else {
            top = mid + 1;
        }
    }
    
    return false;
}

// Alternative approach: Treat 2D as 1D (works when array is completely sorted)
bool searchMatrixFlat(int** matrix, int rows, int cols, int target) {
    int left = 0, right = rows * cols - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Convert 1D index to 2D coordinates
        int row = mid / cols;
        int col = mid % cols;
        int midValue = matrix[row][col];
        
        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}

int main() {
    int rows, cols, target;
    
    cout << "=== Binary Search in Sorted 2D Array ===" << endl;
    cout << "\nEnter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the element to search: ";
    cin >> target;
    
    // Check if target is valid
    if (target < 1 || target > rows * cols) {
        cout << "\nError: Target must be between 1 and " << (rows * cols) << endl;
        return 0;
    }
    
    // Dynamically create 2D array
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    // Auto-fill matrix starting from 1 and incrementing
    int value = 1;
    cout << "\nAuto-generating matrix starting from 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }
    
    // Display the matrix
    cout << "\nGenerated Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Perform searches
    cout << "\n--- Search Results ---" << endl;
    cout << "Target Element: " << target << endl;
    
    cout << "Method 1 (Row-based Binary Search): ";
    if (searchMatrix(matrix, rows, cols, target)) {
        cout << "FOUND! ✓" << endl;
    } else {
        cout << "NOT FOUND!" << endl;
    }
    
    cout << "Method 2 (Flat Binary Search): ";
    if (searchMatrixFlat(matrix, rows, cols, target)) {
        cout << "FOUND! ✓" << endl;
    } else {
        cout << "NOT FOUND!" << endl;
    }
    
    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}