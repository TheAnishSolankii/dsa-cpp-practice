# C++ Code Summaries - Arrays & Sorting (File by File)

---

## 1. array.cpp
**Purpose:** Basic array declaration, initialization, and traversal

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[100] = {1, 2, 3, 4, 4, 5};  // Declare and initialize array
    int n = sizeof (a) / sizeof (int);  // Calculate number of elements
    
    for (int i= 0; i < n; ++i) {       // Traverse and print each element
        cout << a[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
```

**What it does:**
- Declares an integer array of size 100
- Initializes first 6 elements with values 1-5
- Calculates actual size (100 elements total)
- Prints all array elements separated by space

**Key Concepts:**
- Array indexing starts from 0
- `sizeof(array)` returns total bytes used
- `sizeof(int)` returns 4 bytes per integer
- Division gives total number of elements

**Sample Output:** 
```
1 2 3 4 4 5 0 0 0 0 0 0 0 0 0 0 ... (100 elements, remaining are 0)
```

**Notes:**
- Remaining 94 uninitialized elements default to 0
- Only prints first 100 elements based on calculated n
- The 4, 4, 5 shows duplicate values are allowed in arrays

---

## 2. tempCodeRunnerFile.cpp
**Purpose:** Template file for array size calculation (INCOMPLETE)

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[100] = {1, 2, 3, 4, 4, 5};
    int n = sizeof (a) / sizeof (int);
    // Code incomplete - missing logic
}
```

**What it does:**
- Shows array declaration with initialization
- Demonstrates size calculation formula
- File incomplete (no further logic)

**Purpose:** Likely template for other array operations

---

## 3. largest_number_array.cpp
**Purpose:** Find the largest number in a fixed array

```cpp
#include <iostream>
using namespace std;
int main() {
    // Array with predefined values
    int a[100] = {123, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof (a) / sizeof (int);  // n = 100
    
    int max = a[0];  // Initialize with first element
    
    for (int i = 1; i < n; i++) {  // Start from index 1
        if ( a[i] > max) {
            max = a[i];
        }
    }   
    
    cout << "largest number is:" << max << endl;
    return 0;
}
```

**What it does:**
- Declares array with 10 values (rest are 0)
- Finds maximum element in entire array
- Prints the largest number
- Important: Checks all n elements, including trailing zeros

**Algorithm:**
1. Initialize max with first element
2. Compare remaining elements with max
3. Update max if larger element found
4. Print final max value

**Sample Output:** 
```
largest number is:123
```

**Issue:**
- Array size is 100, but only first 10 are meaningful
- Will return 123 (largest non-zero) or 0 if all trailing elements are considered
- Better to pass actual count of meaningful elements

**Time Complexity:** O(n) = O(100)
**Space Complexity:** O(1)

---

## 4. input_largest_number.cpp
**Purpose:** Find largest number from user input

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[1000];  // Declare array of size 1000
    int n;
    cin >> n;     // Read actual number of elements
    
    // Read n elements from user
    for ( int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int mx = INT_MIN;  // Initialize to smallest possible int
    
    // Find maximum among input elements
    for (int i = 0; i < n; ++i) {
        if (a[i] > mx) {
            mx = a[i];
        }
    }
    
    cout << "largest :" << mx << endl;
    return 0;
}
```

**What it does:**
- Declares large array to accommodate user input
- Reads count of elements user wants to input
- Reads that many elements from user
- Finds and prints the maximum

**Why INT_MIN?**
- INT_MIN = -2,147,483,648
- Guaranteed that any normal input is larger
- Works even if user inputs negative numbers

**Algorithm:**
1. Read n (number of elements)
2. Read n elements into array
3. Initialize mx to INT_MIN
4. Compare each element with mx
5. Print mx

**Sample Run:**
```
Input:  5
        10
        -5
        100
        20
        50
Output: largest :100
```

**Time Complexity:** O(2n) = O(n)
**Space Complexity:** O(n) for array

**Advantages over previous program:**
- More flexible: works with any count
- Uses INT_MIN for robustness
- Doesn't process trailing zeros
- Better for real-world applications

---

## 5. reverse_largest_number_array.cpp
**Purpose:** Print array in reverse order

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof (a) / sizeof (int);  // n = 100
    
    // Traverse from last to first
    for (int i = n-1; i >= 0; i--) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
```

**What it does:**
- Declares array with values 1-10
- Traverses backward from index 99 to 0
- Prints each element (first meaningful 10, then 90 zeros)
- Shows reverse order printing technique

**Loop Analysis:**
- Start: i = n-1 = 99 (last element)
- Condition: i >= 0 (until beginning)
- Update: i-- (decrement each step)
- Prints: a[99], a[98], ... a[1], a[0]

**Sample Output:**
```
0 0 0 0 0 ... (90 zeros) 10 9 8 7 6 5 4 3 2 1
```

**Use Cases:**
- Reverse arrays
- Print in descending order
- Implement stack operations
- Undo functionality

**Time Complexity:** O(n)
**Space Complexity:** O(1)

**Note:** Also prints all 100 elements, mostly zeros. Better to limit to meaningful count.

---

## 6. linearsearcharray.cpp
**Purpose:** Search for an element and return its index

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4, 4, 5};  // Fixed array
    int n = sizeof (a) / sizeof (int);  // n = 6
    int key;
    cin >> key;  // Element to search
    
    int indx = -1;  // Initialize to -1 (not found indicator)
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == key) {
            indx = i;
            break;  // Exit loop when found
        }
    }
    
    // Report results
    if (indx == -1) {
        cout << "Not found" << endl;
    }
    else {
        cout << "element found at: " << indx << endl;
    }
    return 0;
}
```

**What it does:**
- Declares array with 6 elements
- Reads element to search from user
- Linearly searches through array
- Prints element's index or "Not found"

**Algorithm (Linear Search):**
1. Initialize index = -1 (means not found)
2. Loop through array elements
3. Compare each element with key
4. If match found:
   - Store index
   - Break (exit loop)
5. Check if still -1:
   - If yes: print "Not found"
   - If no: print found index

**Search Process:**
```
Array: [1, 2, 3, 4, 4, 5]
Search for: 4

Step 1: a[0]=1, key=4 → No match
Step 2: a[1]=2, key=4 → No match
Step 3: a[2]=3, key=4 → No match
Step 4: a[3]=4, key=4 → Match! indx=3, break
Output: element found at: 3
```

**Sample Runs:**

Run 1: Search for 4
```
Input: 4
Output: element found at: 3
```

Run 2: Search for 5
```
Input: 5
Output: element found at: 5
```

Run 3: Search for 10
```
Input: 10
Output: Not found
```

**Why return first occurrence?**
- Array has two 4s (indices 3 and 4)
- Linear search returns first match
- Break statement exits immediately

**Time Complexity:**
- Best case: O(1) - element at index 0
- Worst case: O(n) - element at last index or not found
- Average case: O(n/2) ≈ O(n)

**Space Complexity:** O(1) - no extra space

**When to use:**
- Small arrays (< 1000 elements)
- Unsorted data
- Simple implementation needed
- Stable linear time required

**Limitations:**
- Slow for large arrays
- O(n) time is inefficient compared to binary search O(log n)

---

## 7. bubble_sorting.cpp
**Purpose:** Sort array using Bubble Sort algorithm

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[] = {5, 4, 3, 2, 1};  // Unsorted array
    int n = sizeof (a) / sizeof (int);  // n = 5
    
    // Outer loop: number of passes
    for (int i = 0; i < n - 1; ++i) {
        // Inner loop: comparisons in each pass
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                // Swap if out of order
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
```

**What it does:**
- Sorts array in ascending order
- Uses nested loops for comparison and swapping
- Prints sorted result

**How Bubble Sort Works:**

**Detailed Trace: [5, 4, 3, 2, 1]**

**Pass 1 (i=0, j: 0 to 3):**
```
j=0: [5,4,3,2,1] → 5>4? Yes → Swap → [4,5,3,2,1]
j=1: [4,5,3,2,1] → 5>3? Yes → Swap → [4,3,5,2,1]
j=2: [4,3,5,2,1] → 5>2? Yes → Swap → [4,3,2,5,1]
j=3: [4,3,2,5,1] → 5>1? Yes → Swap → [4,3,2,1,5]
Result: [4,3,2,1,5] (5 is in final position)
```

**Pass 2 (i=1, j: 0 to 2):**
```
j=0: [4,3,2,1,5] → 4>3? Yes → Swap → [3,4,2,1,5]
j=1: [3,4,2,1,5] → 4>2? Yes → Swap → [3,2,4,1,5]
j=2: [3,2,4,1,5] → 4>1? Yes → Swap → [3,2,1,4,5]
Result: [3,2,1,4,5] (4 is in final position)
```

**Pass 3 (i=2, j: 0 to 1):**
```
j=0: [3,2,1,4,5] → 3>2? Yes → Swap → [2,3,1,4,5]
j=1: [2,3,1,4,5] → 3>1? Yes → Swap → [2,1,3,4,5]
Result: [2,1,3,4,5] (3 is in final position)
```

**Pass 4 (i=3, j: 0 to 0):**
```
j=0: [2,1,3,4,5] → 2>1? Yes → Swap → [1,2,3,4,5]
Result: [1,2,3,4,5]
```

**Final Output:** `1 2 3 4 5`

**Why n-1-i in inner loop?**
- After each pass, largest element settles at end
- No need to check already-sorted elements
- Pass 1: check indices 0 to n-2
- Pass 2: check indices 0 to n-3
- Reduces unnecessary comparisons

**Complexity Analysis:**

**Time Complexity:**
- Best case: O(n) - already sorted (with early exit optimization)
- Average case: O(n²)
- Worst case: O(n²) - reverse sorted

**Comparisons:** n(n-1)/2
- For n=5: 5*4/2 = 10 comparisons

**Space Complexity:** O(1) - no extra array

**Properties:**
- **Stable:** Yes (equal elements maintain order)
- **In-place:** Yes (only swaps)
- **Adaptive:** No (always O(n²) without modification)

**Sample Run:**
```
Input: [5, 4, 3, 2, 1]
Output: 1 2 3 4 5
```

**When to use:**
- Small arrays (< 100 elements)
- Teaching/learning purposes
- Nearly sorted data (with optimization)
- When stability is important

**Disadvantages:**
- Slow for large arrays
- O(n²) is inefficient
- Better alternatives available (Quick Sort, Merge Sort)

---

## 8. selection_sort.cpp
**Purpose:** Sort array using Selection Sort algorithm

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;  // Read array size
    
    int arr[n];  // VLA (Variable Length Array) - non-standard C++
    
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element
    }
    
    // Selection Sort
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume current is minimum
        
        // Find actual minimum in remaining array
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;  // Update if smaller found
            }
        }
        
        // Swap minimum with current position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    
    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
```

**What it does:**
- Reads array size from user
- Reads array elements
- Sorts using Selection Sort
- Prints sorted array

**How Selection Sort Works:**

**Concept:**
- Divides array into sorted and unsorted portions
- Repeatedly finds minimum in unsorted part
- Places it at beginning of unsorted part
- Expands sorted portion by one element

**Detailed Example: [5, 2, 8, 1, 9]**

**Iteration 1 (i=0):**
```
Sorted: [] | Unsorted: [5, 2, 8, 1, 9]
Find min in unsorted → 1 at index 3
Swap arr[0] and arr[3] → [1, 2, 8, 5, 9]
Sorted: [1] | Unsorted: [2, 8, 5, 9]
```

**Iteration 2 (i=1):**
```
Sorted: [1] | Unsorted: [2, 8, 5, 9]
Find min in [2, 8, 5, 9] → 2 at index 1
Already in position → [1, 2, 8, 5, 9]
Sorted: [1, 2] | Unsorted: [8, 5, 9]
```

**Iteration 3 (i=2):**
```
Sorted: [1, 2] | Unsorted: [8, 5, 9]
Find min in [8, 5, 9] → 5 at index 3
Swap arr[2] and arr[3] → [1, 2, 5, 8, 9]
Sorted: [1, 2, 5] | Unsorted: [8, 9]
```

**Iteration 4 (i=3):**
```
Sorted: [1, 2, 5] | Unsorted: [8, 9]
Find min in [8, 9] → 8 at index 3
Already in position → [1, 2, 5, 8, 9]
Sorted: [1, 2, 5, 8] | Unsorted: [9]
```

**Final Result:** [1, 2, 5, 8, 9]

**Algorithm Steps:**
1. For each position i from 0 to n-2:
   a. Set minIndex = i
   b. Scan remaining elements (j = i+1 to n-1)
   c. If arr[j] < arr[minIndex], update minIndex
   d. Swap arr[i] and arr[minIndex]

**Sample Run:**
```
Input:  Enter number of elements: 5
        Enter elements: 5 2 8 1 9
Output: Sorted array: 1 2 5 8 9
```

**Complexity Analysis:**

**Time Complexity:**
- Best case: O(n²) - still must find minimum each time
- Average case: O(n²)
- Worst case: O(n²)

**Comparisons:** n(n-1)/2
- For n=5: 5*4/2 = 10 comparisons (same as Bubble Sort)

**Swaps:** At most n-1
- Much fewer than Bubble Sort

**Space Complexity:** O(1) - no extra space

**Properties:**
- **Stable:** No (swaps can break stability)
- **In-place:** Yes (only swaps)
- **Adaptive:** No (same comparisons always)

**Comparison with Bubble Sort:**
```
Both have O(n²) time complexity
But Selection Sort:
- Fewer swaps (important if swap is expensive)
- Not stable
- No improvement even for nearly sorted data
```

**When to use:**
- Small arrays
- When swaps are expensive operations
- Memory writes need minimization
- Simplicity important

**Why fewer swaps?**
- Bubble Sort: swaps adjacent elements multiple times
- Selection Sort: moves element to final position once

---

## 9. test.cpp
**Purpose:** Count different character types in input string

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    int alpha = 0, digits = 0, special = 0, spaces = 0;
    
    ch = cin.get();  // Read first character
    
    while (ch != '$') {  // '$' is terminator character
        
        // Check if alphabetic (A-Z or a-z)
        if ((ch >= 'A' && ch <= 'Z') || ((ch >= 'a' && ch <= 'z'))) {
            alpha++;
        }
        // Check if digit (0-9)
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check if whitespace
        else if (ch == ' ' || ch == '\n' || ch == '\t') {
            spaces++;
        }
        // Everything else is special character
        else {
            special++;
        }
        
        ch = cin.get();  // Read next character
    }
    
    // Print counts
    cout << "Alpha: " << alpha << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special: " << special << endl;
    cout << "spaces: " << spaces << endl;
    
    return 0;
}
```

**What it does:**
- Reads characters until '$' is entered
- Classifies each character:
  - Alphabetic letters
  - Numeric digits
  - Whitespace (space, newline, tab)
  - Special characters
- Counts each category
- Prints final counts

**Key Points:**

**Why cin.get()?**
- `cin >> ch` skips whitespace
- `cin.get()` captures all characters including spaces
- Important for this program to count whitespace

**Character Classification:**

**Alphabetic:**
```
'A' to 'Z': ASCII 65-90
'a' to 'z': ASCII 97-122
Check: (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
```

**Digits:**
```
'0' to '9': ASCII 48-57
Check: (ch >= '0' && ch <= '9')
```

**Whitespace:**
```
' ': Space (ASCII 32)
'\n': Newline (ASCII 10)
'\t': Tab (ASCII 9)
Check: (ch == ' ' || ch == '\n' || ch == '\t')
```

**Special:**
- Everything not in above categories

**Sample Run:**
```
Input: Hello123!@#$
(User types: H e l l o 1 2 3 ! @ # $)

Processing:
H → alpha (65 ≥ 65 ≤ 90) → alpha = 1
e → alpha → alpha = 2
l → alpha → alpha = 3
l → alpha → alpha = 4
o → alpha → alpha = 5
1 → digits (49 ≥ 48 ≤ 57) → digits = 1
2 → digits → digits = 2
3 → digits → digits = 3
! → special → special = 1
@ → special → special = 2
# → special → special = 3
$ → EXIT (terminator)

Output:
Alpha: 5
Digits: 3
Special: 3
spaces: 0
```

**Another Example with Spaces:**
```
Input: Hello 123$
(H, e, l, l, o, space, 1, 2, 3, $)

Processing:
H,e,l,l,o → alpha = 5
space → spaces = 1
1,2,3 → digits = 3
$ → EXIT

Output:
Alpha: 5
Digits: 3
Special: 0
spaces: 1
```

**Time Complexity:** O(n) where n is number of characters
**Space Complexity:** O(1) - only counters

**Use Cases:**
- Password strength validation
- Text analysis
- Input validation
- Data cleaning
- Character frequency analysis

**Improvements:**
1. Could use character classes from `<cctype>` (isalpha, isdigit, isspace)
2. Could count both separately for readability
3. Could handle multiple input strings

---

## 10. direction.cpp
**Purpose:** Track movement and output shortest return path

```cpp
#include <iostream>
using namespace std;
int main() { 
    int x = 0, y = 0;  // Coordinates (starting at origin)
    char ch;
    ch = cin.get();    // Read first direction
    
    // Read and process directions until newline
    while(ch != '\n') {
        if(ch == 'N') y++;           // North: move up
        else if(ch == 'S') y--;      // South: move down
        else if(ch == 'W') x--;      // West: move left
        else x++;                     // East: move right
        ch = cin.get();              // Read next direction
    }
    
    // Output shortest return path
    if (x >= 0) {
        // If x is positive or zero, move east
        for(int i = 0; i < x; i++) {
            cout << 'E';
        }
        // If y is positive, move north
        if(y >= 0) {
            for(int i = 0; i < y; i++) {
                cout << 'N';
            }
        }
    }
    else {
        // If x is negative, need to go west
        // First handle y
        y = -y;
        for(int i = 0; i < y; i++) {
            cout << 'S';
        }
    }
    
    // Handle negative x
    if(x <= 0) {
        x = -x;
        for(int i = 0; i < x; i++) {
            cout << 'W';
        }
    }
    
    return 0;
}
```

**What it does:**
- Reads sequence of directions (N, S, E, W)
- Tracks position on 2D coordinate system
- Calculates shortest path back to origin
- Outputs the return direction sequence

**Coordinate System:**
```
        +y (North)
        |
        |
-x (W)--+--+x (East)
        |
        |
       -y (South)
```

**Algorithm:**

**Phase 1: Track Movements**
```cpp
while(ch != '\n') {
    if(ch == 'N') y++;      // North increases y
    else if(ch == 'S') y--; // South decreases y
    else if(ch == 'W') x--; // West decreases x
    else x++;               // East increases x
    ch = cin.get();
}
```

**Phase 2: Output Return Path**
- If final position is (x, y), output moves to reach (0, 0)
- Output format: Multiple E/W followed by multiple N/S

**Detailed Example 1: NNEEWW**
```
Input: NNEEWW

Movement Tracking:
N: (0, 0) → (0, 1)
N: (0, 1) → (0, 2)
E: (0, 2) → (1, 2)
E: (1, 2) → (2, 2)
W: (2, 2) → (1, 2)
W: (1, 2) → (0, 2)

Final position: (0, 2)
Return needed: South 2 times

Output: SS
```

**Detailed Example 2: EENW**
```
Input: EENW

Movement Tracking:
E: (0, 0) → (1, 0)
E: (1, 0) → (2, 0)
N: (2, 0) → (2, 1)
W: (2, 1) → (1, 1)

Final position: (1, 1)
Return needed: West 1, South 1

Output: WS (or SW depending on implementation)
```

**Logic Analysis:**

**Why the if-else structure?**
```cpp
if (x >= 0) {
    // Output East moves
    for(int i = 0; i < x; i++) cout << 'E';
    
    if(y >= 0) {
        // Output North moves
        for(int i = 0; i < y; i++) cout << 'N';
    }
} else {
    // x < 0, so first handle y
    y = -y;
    for(int i = 0; i < y; i++) cout << 'S';  // Flip N to S
}

// Handle remaining negative x
if(x <= 0) {
    x = -x;
    for(int i = 0; i < x; i++) cout << 'W';
}
```

**Sample Runs:**

**Run 1:**
```
Input: NNEEWW
Output: SS
Explanation: End at (0, 2), return with 2 South movements
```

**Run 2:**
```
Input: EENNWW
Processing: E,E,N,N,W,W → (1, 2)
Output: WSN
Explanation: 1 West + 2 South/North handling
```

**Run 3:**
```
Input: NNEESWWN
Processing: N,N,E,E,S,W,W,N
N: (0,1), N: (0,2), E: (1,2), E: (2,2)
S: (2,1), W: (1,1), W: (0,1), N: (0,2)
Final: (0, 2)
Output: SS
```

**Time Complexity:** O(n + m) where:
- n = number of direction characters
- m = total distance to output

**Space Complexity:** O(1) - only coordinates

**Key Insight:**
- Direction movements form a path
- Net displacement determines return
- Output shortest return sequence

**Use Cases:**
- Robot navigation
- GPS applications
- Game movement tracking
- Path planning
- Warehouse automation

**Edge Cases:**
1. No movement: Input is just newline → Output nothing
2. Return to start: N and S cancel out → Different x results
3. Large movements: Accumulates distance correctly

---

## Summary Table: File Organization

| File | Type | Purpose | Status |
|------|------|---------|--------|
| array.cpp | Basic | Array traversal | ✓ Complete |
| tempCodeRunnerFile.cpp | Template | Size calculation | ⊘ Incomplete |
| largest_number_array.cpp | Algorithm | Find max (static) | ✓ Complete |
| input_largest_number.cpp | Algorithm | Find max (dynamic) | ✓ Complete |
| reverse_largest_number_array.cpp | Algorithm | Reverse traversal | ✓ Complete |
| linearsearcharray.cpp | Search | Linear search | ✓ Complete |
| bubble_sorting.cpp | Sorting | Bubble sort | ✓ Complete |
| selection_sort.cpp | Sorting | Selection sort | ✓ Complete |
| test.cpp | String | Character counting | ✓ Complete |
| direction.cpp | Problem | Path navigation | ✓ Complete |

---

## Algorithm Complexity Comparison

| Algorithm | Time | Space | Stable | Swaps |
|-----------|------|-------|--------|-------|
| Linear Search | O(n) | O(1) | - | - |
| Bubble Sort | O(n²) | O(1) | Yes | Many |
| Selection Sort | O(n²) | O(1) | No | Few |
| Binary Search | O(log n) | O(1) | - | - |