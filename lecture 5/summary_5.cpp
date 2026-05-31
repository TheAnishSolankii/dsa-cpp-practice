# C++ Complete Code Summaries - All Programs Analyzed

---

## FILE 1: sort_direct.cpp
**Category:** Sorting | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
#include <algorithm>  // Required for sort()
using namespace std;

int main() {
    int a[] = {5, 4, 8, 9, 7, 1};
    int n = sizeof(a) / sizeof(int);
    sort(a, a + n);
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
```

### What It Does
Uses C++ Standard Library's built-in sort function to sort an array

### Key Concepts

**Header Requirement:**
```cpp
#include <algorithm>  // Don't forget!
```

**sort() Function:**
```cpp
sort(start_pointer, end_pointer);
sort(a, a + n);  // Sort array a with n elements
```

**Pointer Arithmetic:**
- `a`: Points to first element (a[0])
- `a + n`: Points to position after last element
- Sorts range [a, a+n) (inclusive start, exclusive end)

### Execution Trace
```
Input array:  [5, 4, 8, 9, 7, 1]
After sort(): [1, 4, 5, 7, 8, 9]
Output:       1 4 5 7 8 9
```

### Algorithm Efficiency
| Property | Value |
|----------|-------|
| Time Complexity | O(n log n) |
| Space Complexity | O(log n) |
| Stability | No |
| In-place | Yes |
| Best for | General purpose, all sizes |

### When to Use
- **Always** for production code
- Need fastest sorting
- Don't want to implement manually
- Working with any array size

### Why Not Manual Sorting?
```
Manual Bubble: ~15 lines, O(n²) - 1000+ comparisons for 100 elements
Manual Selection: ~15 lines, O(n²) - 5050 comparisons for 100 elements
Manual Insertion: ~10 lines, O(n²) - variable comparisons
sort(): 1 line, O(n log n) - ~664 comparisons for 100 elements
```

### Important Notes
- No need to #include <vector> or <array>
- Works with native C-style arrays
- Also works with STL containers (vector, deque, etc.)
- Sorts in ascending order by default
- For descending: `sort(a, a+n, greater<int>());`

---

## FILE 2: void.cpp
**Category:** Functions | **Status:** ✓ Complete & Working

```cpp
#include<iostream>
using namespace std;

void printtable(int initValue, int finalValue, int step) {
    int f, c;
    f = initValue;
    
    while(f <= finalValue) {
        c = (5.0/9) * (f - 32);
        cout << f << ": \t" << c << endl;
        f = f + step;
    }
}

int main() {
    int init, fval, step;
    cin >> init >> fval >> step;
    printtable(init, fval, step);
    return 0;
}
```

### What It Does
Converts and prints a table of Fahrenheit to Celsius temperatures

### Function Breakdown

**Function Signature:**
```cpp
void printtable(int initValue, int finalValue, int step)
```

**Parameters:**
- `initValue`: Starting Fahrenheit temperature
- `finalValue`: Ending Fahrenheit temperature
- `step`: Increment between temperatures

**Return Type:** `void` (no return value)

### How It Works

**Step 1:** Read input
```cpp
cin >> init >> fval >> step;
// Example: 32 100 10
```

**Step 2:** Call function
```cpp
printtable(init, fval, step);
```

**Step 3:** Function executes
```cpp
f = 32;
// Loop: 32 <= 100
c = (5.0/9) * (32 - 32) = 0
Print: 32: 0

f = 42;
// Loop: 42 <= 100
c = (5.0/9) * (42 - 32) = 5.56
Print: 42: 5
// ... continues
```

### Sample Execution

**Input:**
```
32 100 10
```

**Output:**
```
32:     0
42:     5
52:     11
62:     16
72:     22
82:     27
92:     33
100:    37
```

### Why float Division?

**Integer Division (Wrong):**
```cpp
c = (5/9) * (f - 32);
// 5/9 = 0 (integer division)
// c = 0 * anything = 0
```

**Float Division (Correct):**
```cpp
c = (5.0/9) * (f - 32);
// 5.0/9 = 0.555... (float division)
// Preserves decimal
```

### Temperature Conversion Formula
```
Celsius = (5/9) × (Fahrenheit - 32)

Common conversions:
32°F = 0°C
68°F = 20°C
86°F = 30°C
104°F = 40°C
212°F = 100°C
```

### Key Learning Points
1. void functions don't return values
2. void functions still perform important tasks
3. Parameters pass data to functions
4. Function can access and use parameters
5. No assignment needed when calling void function

### Time Complexity: O(n)
where n = (finalValue - initValue) / step

### Space Complexity: O(1)
Only uses constant extra space

---

## FILE 3: tertiaryoperator.cpp
**Category:** Operators | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 8;
    
    // Use 1: Direct output
    (a >= 10) ? cout << "hello\n" : cout << "world\n";
    
    // Use 2: Assignment
    bool x = (a % 2 == 0 ? true : false);
    
    // Use 3: Conditional logic
    if(x) {
        cout << "even hai\n";
    } else {
        cout << "odd hai\n";
    }
    
    return 0;
}
```

### What It Does
Demonstrates ternary operator in multiple contexts

### Ternary Operator Syntax
```cpp
condition ? value_if_true : value_if_false
```

### Execution Analysis

**Statement 1:**
```cpp
(a >= 10) ? cout << "hello\n" : cout << "world\n";
// a = 8
// 8 >= 10? FALSE
// Execute: cout << "world\n"
// Output: world
```

**Statement 2:**
```cpp
bool x = (a % 2 == 0 ? true : false);
// a = 8
// 8 % 2 == 0? TRUE
// x = true
```

**Statement 3:**
```cpp
if(x) {
    cout << "even hai\n";  // Executes because x = true
}
```

### Complete Output
```
world
even hai
```

### Ternary Operator Use Cases

**Case 1: Comparison**
```cpp
int age = 20;
cout << (age >= 18) ? "Adult" : "Child";
// Output: Adult
```

**Case 2: Mathematical**
```cpp
int x = 15, y = 10;
int max = (x > y) ? x : y;
cout << max;  // Output: 15
```

**Case 3: String Selection**
```cpp
int score = 85;
string status = (score >= 80) ? "Pass" : "Fail";
cout << status;  // Output: Pass
```

### Ternary vs If-Else Comparison

**Ternary (Concise):**
```cpp
int result = (x > 5) ? 1 : 0;
```

**If-Else (Verbose):**
```cpp
int result;
if(x > 5) {
    result = 1;
} else {
    result = 0;
}
```

### When to Use Ternary
✓ Simple one condition
✓ Assignment needed
✓ Code fits on one line
✓ Readable and clear

### When NOT to Use Ternary
✗ Complex logic
✗ Multiple statements
✗ Nested conditions (confusing)
✗ Readability compromised

### Nested Ternary (Avoid!)
```cpp
// Hard to read
int grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B' : 
            (score >= 70) ? 'C' : 'F';
```

---

## FILE 4: switch_case.cpp
**Category:** Control Flow | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    switch(ch) {
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
```

### What It Does
Maps single character to direction name

### Switch-Case Structure
```cpp
switch(expression) {
    case constant1:
        statements;
        break;
    case constant2:
        statements;
        break;
    default:
        statements;
}
```

### How It Works

**Read Input:**
```cpp
char ch;
cin >> ch;  // User types: N, E, W, S, or other
```

**Match Case:**
```cpp
switch(ch) {
    case 'N':           // If ch == 'N'
        cout << " north\n";
        break;
    // ... other cases ...
}
```

### Sample Executions

**Example 1: Valid Input**
```
Input: N
Evaluation: ch == 'N'? YES
Execute: cout << " north\n"
Break: Exit switch
Output: north
```

**Example 2: Different Valid**
```
Input: S
Evaluation: ch == 'N'? NO
           ch == 'E'? NO
           ch == 'W'? NO
           ch == 'S'? YES
Execute: cout << " south\n"
Break: Exit switch
Output: south
```

**Example 3: Invalid**
```
Input: X
Evaluation: No case matches
Default: cout << " NOt a valid input\n"
Output: NOt a valid input
```

### Importance of break Statement

**WITH break (Correct):**
```cpp
switch(ch) {
    case 'A':
        cout << "First";
        break;           // STOPS HERE
    case 'B':
        cout << "Second";
        break;
}
Input: A
Output: First
```

**WITHOUT break (Fall-through):**
```cpp
switch(ch) {
    case 'A':
        cout << "First";
        // NO BREAK!
    case 'B':
        cout << "Second";
        break;
}
Input: A
Output: FirstSecond  // WRONG!
```

### Switch vs If-Else

**Switch (Best for discrete values):**
```cpp
switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
}
```

**If-Else (Best for ranges):**
```cpp
if(age < 13) cout << "Child";
else if(age < 18) cout << "Teen";
else cout << "Adult";
```

### Switch Constraints
- Variable must be: int, char, or enum
- Cannot use: float, string (standard C++)
- Case values must be constants, not variables
- All cases must be unique

### Common Switch Patterns

**Pattern 1: Menu Selection**
```cpp
cout << "1. Add\n2. Subtract\n3. Exit\n";
int choice;
cin >> choice;
switch(choice) {
    case 1: add(); break;
    case 2: subtract(); break;
    case 3: exit(0); break;
}
```

**Pattern 2: Character Classification**
```cpp
char c;
cin >> c;
switch(c) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        cout << "Vowel"; break;
    default:
        cout << "Consonant";
}
```

---

## FILE 5: primenumbervoi.cpp
**Category:** Functions | **Status:** ✗ Has Logic Errors

```cpp
#include <iostream>
using namespace std;

bool checkprime(int n) {
    int i = 2;
    while(i < n) {
        if(n % i == 0) {
            return false;
        }
        i = i + 1;
    }
    return true;
}

int main() {
    int n, i;
    cin >> n;
    
    if(checkprime(n)) {
        cout << "prime\n";
    } else {
        cout << "not prime\n";
        return 0;  // BUG: Early exit
    }
    
    i = i + 1;        // UNREACHABLE
    cout << "prime\n"; // UNREACHABLE
    
    return 0;
}
```

### What It Attempts
Check if number is prime using boolean function

### Function Analysis: checkprime()

**Algorithm:**
```cpp
bool checkprime(int n) {
    int i = 2;
    while(i < n) {
        if(n % i == 0) {
            return false;  // Divisor found
        }
        i = i + 1;
    }
    return true;  // No divisor found
}
```

**How It Works:**
1. Check divisors from 2 to n-1
2. If any divisor found: return false (not prime)
3. If no divisor found: return true (is prime)

### Examples

**checkprime(7):**
```
i=2: 7%2=1? NO
i=3: 7%3=1? NO
i=4: 7%4=3? NO
i=5: 7%5=2? NO
i=6: 7%6=1? NO
Loop ends, return true ✓
```

**checkprime(4):**
```
i=2: 4%2=0? YES
return false ✓
```

**checkprime(1):**
```
while(i < 1) never executes
return true ✗ (WRONG! 1 is not prime)
```

### Issues in This Program

**Issue 1: Incorrect Prime Definition**
```cpp
bool checkprime(int n) {
    // Returns true for 1, but 1 is NOT prime!
    // Should add: if(n < 2) return false;
}
```

**Issue 2: Unreachable Code**
```cpp
if(checkprime(n)) {
    cout << "prime\n";
} else {
    cout << "not prime\n";
    return 0;           // Exits here!
}

i = i + 1;             // Never reached
cout << "prime\n";     // Never reached
```

**Issue 3: Uninitialized Variable**
```cpp
int n, i;
// i is uninitialized
// Later: i = i + 1;  // Undefined behavior!
```

### Correct Version

```cpp
#include <iostream>
using namespace std;

bool checkprime(int n) {
    if(n < 2) return false;  // Fix: handle edge cases
    
    int i = 2;
    while(i < n) {
        if(n % i == 0) {
            return false;
        }
        i = i + 1;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    if(checkprime(n)) {
        cout << "prime\n";
    } else {
        cout << "not prime\n";
    }
    
    return 0;  // Only one return at end
}
```

### Time Complexity
- Current: O(n) checking all divisors
- Optimized: O(√n) checking only to √n

### Optimized Version
```cpp
bool checkprime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
```

---

## FILE 6: optimised_bubble_sort.cpp
**Category:** Sorting | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(int);
    
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - 1 - i; ++j) {  // KEY OPTIMIZATION
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
```

### What It Does
Sorts array using bubble sort with optimization

### The Optimization Explained

**Without Optimization:**
```cpp
for(int i = 0; i < n - 1; ++i) {
    for(int j = 0; j < n - 1; ++j) {  // Always n-1
        // Compare and swap
    }
}
```

**With Optimization:**
```cpp
for(int i = 0; i < n - 1; ++i) {
    for(int j = 0; j < n - 1 - i; ++j) {  // Decreases!
        // Compare and swap
    }
}
```

### Why This Works

**After Each Pass:**
- One more element is in final sorted position
- No need to check already-sorted elements
- Reduces comparisons exponentially

### Example: [5, 4, 3, 2, 1]

**Pass 1 (i=0):** Largest element moves to end
```
j: 0→3 (4 comparisons)
[5,4,3,2,1] → [4,5,3,2,1] → [4,3,5,2,1] → [4,3,2,5,1] → [4,3,2,1,5]
```

**Pass 2 (i=1):** Second-largest moves to position 3
```
j: 0→2 (3 comparisons)
[4,3,2,1,5] → [3,4,2,1,5] → [3,2,4,1,5] → [3,2,1,4,5]
```

**Pass 3 (i=2):** Third-largest moves to position 2
```
j: 0→1 (2 comparisons)
[3,2,1,4,5] → [2,3,1,4,5] → [2,1,3,4,5]
```

**Pass 4 (i=3):** Fourth-largest moves to position 1
```
j: 0→0 (1 comparison)
[2,1,3,4,5] → [1,2,3,4,5]
```

**Output:** `1 2 3 4 5`

### Comparison Count

**Without Optimization:**
- Pass 1: 4 comparisons
- Pass 2: 4 comparisons (unnecessary!)
- Pass 3: 4 comparisons (unnecessary!)
- Pass 4: 4 comparisons (unnecessary!)
- **Total: 16 comparisons**

**With Optimization:**
- Pass 1: 4 comparisons
- Pass 2: 3 comparisons
- Pass 3: 2 comparisons
- Pass 4: 1 comparison
- **Total: 10 comparisons (37.5% reduction!)**

**For n=100:**
- Without: 9900 comparisons
- With: 4950 comparisons
- **Savings: 50%!**

### Complexity Analysis
- **Time:** O(n²) (still quadratic)
- **Space:** O(1) (no extra space)
- **Stability:** Yes
- **In-place:** Yes

### Further Optimization: Early Exit
```cpp
for(int i = 0; i < n - 1; ++i) {
    bool swapped = false;
    
    for(int j = 0; j < n - 1 - i; ++j) {
        if(a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            swapped = true;
        }
    }
    
    if(!swapped) break;  // Exit if no swaps
}
```

**With Early Exit:**
- Best case: O(n) for already sorted array
- Detects when array becomes sorted early
- Very practical for real-world data

### When to Use Optimized Bubble Sort
✓ Learning algorithm implementation
✓ Very small arrays (< 20 elements)
✓ Nearly sorted data (with early exit)
✓ Need in-place sorting
✗ Production code (use sort() instead)

---

## FILE 7: insertion_sorting.cpp
**Category:** Sorting | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  // Variable-length array

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > x) {
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
```

### What It Does
Sorts array using insertion sort algorithm with user input

### Algorithm Explanation

**Key Idea:** Build sorted array one element at a time

**Process:**
1. Start with second element (first is "sorted")
2. Insert into correct position in sorted part
3. Shift larger elements right
4. Repeat for remaining elements

### Step-by-Step Example: [5, 2, 8, 1]

**Iteration 1 (i=1, x=2):**
```
Sorted: [5]  Unsorted: [2, 8, 1]

x = 2
j = 0
arr[0]=5 > 2? YES → shift right → [5, 5, 8, 1]
j = -1
Insert 2 → [2, 5, 8, 1]
```

**Iteration 2 (i=2, x=8):**
```
Sorted: [2, 5]  Unsorted: [8, 1]

x = 8
j = 1
arr[1]=5 > 8? NO → exit while
Insert 8 → [2, 5, 8, 1] (no change)
```

**Iteration 3 (i=3, x=1):**
```
Sorted: [2, 5, 8]  Unsorted: [1]

x = 1
j = 2
arr[2]=8 > 1? YES → shift → [2, 5, 8, 8]
j = 1
arr[1]=5 > 1? YES → shift → [2, 5, 5, 8]
j = 0
arr[0]=2 > 1? YES → shift → [2, 2, 5, 8]
j = -1
Insert 1 → [1, 2, 5, 8]
```

### Code Analysis

**Line: `for(int i = 1; i < n; i++)`**
- Start from index 1 (second element)
- First element is already "sorted"

**Line: `int x = arr[i]`**
- Element to be inserted

**Line: `int j = i - 1`**
- Start comparing from element before x

**Line: `while(j >= 0 && arr[j] > x)`**
- Shift larger elements right
- Stop when arr[j] ≤ x or reach start

**Line: `arr[j + 1] = arr[j]`**
- Shift element right (no swap, just overwrite)

**Line: `arr[j + 1] = x`**
- Insert x in correct position

### Sample Execution

**Input:**
```
Enter number of elements: 5
Enter elements: 3 1 4 1 5
```

**Sorting:**
```
Initial: [3, 1, 4, 1, 5]
After i=1: [1, 3, 4, 1, 5]
After i=2: [1, 3, 4, 1, 5]
After i=3: [1, 1, 3, 4, 5]
After i=4: [1, 1, 3, 4, 5]
```

**Output:**
```
Sorted array: 1 1 3 4 5
```

### Complexity Analysis

| Case | Time | Comparisons | Shifts |
|------|------|-------------|--------|
| Best | O(n) | n-1 | 0 |
| Average | O(n²) | n²/4 | n²/4 |
| Worst | O(n²) | n²/2 | n²/2 |

**Space:** O(1)

### Characteristics
| Property | Value |
|----------|-------|
| Stable | Yes |
| In-place | Yes |
| Adaptive | Yes (fast for nearly sorted) |
| Online | Yes (can sort while receiving data) |

### When to Use Insertion Sort
✓ Small arrays (< 50 elements)
✓ Nearly sorted data (very fast)
✓ Online sorting (data arrives gradually)
✓ Need stable sort
✓ Simple implementation
✗ Large arrays (O(n²) is slow)
✗ When sort() is available

### Comparison with Other Methods

**vs Bubble Sort:**
- Same O(n²) time complexity
- Fewer comparisons on average
- Similar practical performance

**vs Selection Sort:**
- Both O(n²) time
- Insertion: fewer comparisons, more shifts
- Selection: more comparisons, fewer shifts

**vs sort():**
- sort(): O(n log n), best choice
- Insertion: O(n²), learning tool

---

## FILE 8: functions.cpp
**Category:** Functions | **Status:** ✗ Has Syntax Errors

```cpp
#include <iostream>
using namespace std;

int main() {
 /*
 function decleration : fumction name (parameters)
 datatype function name n(parameters)
 //fumction definition bodyh*/   
 void hello () ;{                // ERROR 1: Semicolon before brace
    cout << hello world\n;       // ERROR 2: Missing quotes
 }
 
 int main () {                   // ERROR 3: Nested main()
    hello ();                    // Invoking or calling
 }
    return 0;
}
```

### Errors Identified

**ERROR 1: Semicolon Before Braces**
```cpp
void hello () ;{  // WRONG: semicolon before brace
    cout << "Hi";
}
```

**Issue:** Semicolon terminates statement
**Result:** Compiler sees declaration then empty function definition
**Fix:** Remove semicolon
```cpp
void hello () {   // CORRECT
    cout << "Hi";
}
```

**ERROR 2: String Not Quoted**
```cpp
cout << hello world\n;  // WRONG: no quotes
```

**Issue:** Compiler interprets as two variables, not string
**Result:** Compilation error (hello and world are undefined)
**Fix:** Add quotes
```cpp
cout << "hello world\n";  // CORRECT
```

**ERROR 3: Multiple main() Functions**
```cpp
int main() {
    int main() {    // WRONG: nested main
        cout << "Hi";
    }
}
```

**Issue:** Only one main() allowed per program
**Result:** Compilation error (multiple definition)
**Fix:** Define separate function
```cpp
void hello() {      // CORRECT: separate function
    cout << "Hello";
}

int main() {
    hello();
    return 0;
}
```

### Correct Version

```cpp
#include <iostream>
using namespace std;

// Function declaration (optional if defined before main)
void hello();

// Function definition
void hello() {
    cout << "hello world\n";
}

int main() {
    hello();  // Function call
    return 0;
}
```

### Output
```
hello world
```

### Function Structure Diagram
```
┌─────────────────────────────────────────┐
│ Function Definition                     │
├─────────────────────────────────────────┤
│ return_type function_name(parameters) { │
│     // Function body                    │
│     // Statements                       │
│     return value;  (if not void)        │
│ }                                       │
└─────────────────────────────────────────┘
```

### Key Rules
1. No semicolon before function body braces
2. String literals must be quoted
3. Only ONE main() function per program
4. Functions must be declared before use (or declare prototype)
5. Return type required (even void)

---

## FILE 9: bhj.cpp
**Category:** Basic | **Status:** ✓ Complete & Working

```cpp
#include <iostream>
using namespace std;

int main() {
{
    cout << "Hello World ";
}

return 0;
}
```

### What It Does
Simple program with nested scope block

### Output
```
Hello World 
```

### Nested Block Explanation

**Outer Block (main):**
```cpp
int main() {
    // ...
}
```

**Inner Block:**
```cpp
{
    cout << "Hello World ";
}
```

### Why Nested Blocks?

**Scope Management:**
```cpp
{
    int x = 5;      // x exists here
    {
        int y = 10;  // y exists only in inner block
        cout << x;   // Can use x
    }
    cout << y;       // ERROR: y doesn't exist!
}
```

**Memory Management:**
```cpp
{
    // Inner block
    int big_array[1000000];  // Takes memory
    // ... use array ...
}  // Memory freed here

// No longer need array
cout << "Array freed!";
```

**Variable Hiding:**
```cpp
int x = 5;        // Outer x

{
    int x = 10;   // Inner x (hides outer)
    cout << x;    // Output: 10
}

cout << x;        // Output: 5
```

### Scope Rules

**Global Scope:**
```cpp
int global_var = 5;  // Accessible everywhere

int main() {
    cout << global_var;  // Can use
}
```

**Function Scope:**
```cpp
int main() {
    int local_var = 10;  // Only here
    {
        cout << local_var;  // Can use in inner block
    }
    cout << local_var;  // Still in range
}
// ERROR: local_var doesn't exist here
```

**Block Scope:**
```cpp
{
    int block_var = 15;
    cout << block_var;
}
// ERROR: block_var out of scope
```

### Practical Use Cases

**Case 1: Limit Variable Lifetime**
```cpp
int main() {
    // ... main code ...
    
    {
        // Temporary scope
        int temp = 100;
        // ... use temp ...
    }  // temp freed
    
    // ... more main code ...
}
```

**Case 2: Avoid Variable Name Conflicts**
```cpp
{
    int count = 0;
    // First loop
    for(int i = 0; i < 5; i++) count++;
}

{
    int count = 0;  // Same name, different variable
    // Second loop
    for(int i = 0; i < 10; i++) count++;
}
```

---

## COMPLETE PROGRAM SUMMARY TABLE

| File | Type | Purpose | Status | Lines | Concept |
|------|------|---------|--------|-------|---------|
| sort_direct.cpp | Sorting | Built-in sort | ✓ | 13 | STL algorithm |
| void.cpp | Functions | Temperature conversion | ✓ | 20 | void functions |
| tertiaryoperator.cpp | Operators | Conditional operator | ✓ | 18 | ? : syntax |
| switch_case.cpp | Control | Direction mapping | ✓ | 24 | case/default |
| primenumbervoi.cpp | Functions | Prime checker | ✗ | 24 | Boolean return, bugs |
| optimised_bubble_sort.cpp | Sorting | Optimized sort | ✓ | 20 | Loop optimization |
| insertion_sorting.cpp | Sorting | User input sort | ✓ | 31 | Insertion algorithm |
| functions.cpp | Functions | Function demo | ✗ | 15 | Syntax errors |
| bhj.cpp | Basic | Hello world | ✓ | 12 | Nested scope |

---

## LEARNING PROGRESSION

### Level 1: Basics
1. ✓ bhj.cpp - Output and scope
2. ✓ sort_direct.cpp - Using libraries

### Level 2: Functions
3. ✓ void.cpp - Void functions
4. ✗ functions.cpp - Function syntax (learn errors!)

### Level 3: Operators
5. ✓ tertiaryoperator.cpp - Ternary operator
6. ✓ switch_case.cpp - Switch statements

### Level 4: Sorting
7. ✓ optimised_bubble_sort.cpp - Bubble sort optimization
8. ✓ insertion_sorting.cpp - Insertion sort
9. ✓ sort_direct.cpp - Built-in sort (best practice)

### Level 5: Advanced
10. ✗ primenumbervoi.cpp - Boolean functions (learn debugging!)

---

## PRACTICE PROBLEMS

### Problem 1: Grade Function
```cpp
char getGrade(int score) {
    if(score >= 90) return 'A';
    else if(score >= 80) return 'B';
    else if(score >= 70) return 'C';
    else return 'F';
}
```

### Problem 2: Sorting Decision
```cpp
// Which is best for each case?
// 1. Array of 5 elements → sort()
// 2. Nearly sorted array → insertion_sort
// 3. Learning → bubble_sort
// 4. Production code → sort()
// 5. Need stability → insertion_sort or merge_sort
```

### Problem 3: Switch Menu
```cpp
int choice;
cout << "1.Add 2.Subtract 3.Exit\n";
cin >> choice;

switch(choice) {
    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << a + b;
        break;
    case 2:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << a - b;
        break;
    case 3:
        return 0;
}
```

---

## QUICK REFERENCE CARD

### Function Syntax
```cpp
return_type name(params) { body return value; }
```

### Ternary Operator
```cpp
condition ? true_value : false_value
```

### Switch Statement
```cpp
switch(var) { case 1: ...; break; default: ...; }
```

### Sorting Options
1. **sort()** - O(n log n) - ALWAYS choose this
2. **Bubble** - O(n²) - Learning only
3. **Insertion** - O(n²) - Nearly sorted data
4. **Selection** - O(n²) - Minimal swaps

### Complexity Summary
```
O(1) < O(log n) < O(n) < O(n log n) < O(n²)
      Fast                            Slow
```