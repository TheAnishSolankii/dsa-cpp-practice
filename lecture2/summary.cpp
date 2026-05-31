#include <iostream>
#include <iomanip>
using namespace std;

/*
================================================================================
                    COMPLETE C++ LECTURE PROGRAMS
              Combined Summary Code with All Topics Covered
================================================================================

TABLE OF CONTENTS:
1. While Loop Programs
2. Prime Number Programs
3. Character Operations
4. Pattern Printing
5. Bit Manipulation
6. Number Operations

Each program is separated and can be compiled individually by copying.
================================================================================
*/

// ============================================================================
// SECTION 1: WHILE LOOP PROGRAMS
// ============================================================================

/*
PROGRAM 1.1: Simple While Loop (Print 1 to n)
File: whileloopinput.cpp
*/
void whileLoopBasic() {
    cout << "\n=== WHILE LOOP BASIC ===" << endl;
    // Uncomment to use:
    /*
    int i, n;
    cin >> n;
    i = 1;
    while(i <= n) {
        cout << i << ' ';
        i = i + 1;
    }
    */
}

/*
PROGRAM 1.2: Fixed While Loop with Block
File: Whileblockloop.cpp
*/
void whileLoopFixed() {
    cout << "\n=== WHILE LOOP (FIXED 1-5) ===" << endl;
    int i;
    i = 1;
    while(i <= 5) {
        cout << i << ' ';
        i = i + 1;
    }
    cout << endl;
}

// ============================================================================
// SECTION 2: PRIME NUMBER PROGRAMS
// ============================================================================

/*
PROGRAM 2.1: Check if Single Number is Prime (FIXED VERSION)
File: tempCodeRunnerFile.cpp (corrected version of prime_number.cpp)
Bug Fix: Changed "i < 2;" to "i = 2;"
*/
void checkPrimeNumber() {
    cout << "\n=== CHECK PRIME NUMBER ===" << endl;
    // Uncomment to use:
    /*
    int n, i;
    cin >> n;
    i = 2;  // FIX: was "i < 2;" (missing assignment)
    
    while(i < n) {
        if(n % i == 0) {
            cout << "Not Prime\n";
            return;
        }
        i = i + 1;
    }
    cout << "Prime\n";
    */
}

/*
PROGRAM 2.2: Print All Prime Numbers from 2 to n
File: printonlyprime.cpp
*/
void printAllPrimes() {
    cout << "\n=== ALL PRIME NUMBERS UP TO N ===" << endl;
    // Uncomment to use:
    /*
    int n, i, j;
    cin >> n;
    
    for(i = 2; i <= n; ++i) {
        for(j = 2; j < i; ++j) {
            if(i % j == 0) {
                break;
            }
        }
        if(i == j) {  // No divisor found, so it's prime
            cout << i << endl;
        }
    }
    */
}

// ============================================================================
// SECTION 3: CHARACTER OPERATIONS
// ============================================================================

/*
PROGRAM 3.1: Classify Character as Upper/Lower/Invalid
File: upperlower.cpp
*/
void classifyCharacter() {
    cout << "\n=== CHARACTER CLASSIFICATION ===" << endl;
    // Uncomment to use:
    /*
    char ch;
    cin >> ch;
    
    if(ch >= 'A' and ch <= 'Z') {
        cout << "upper case\n";
    }
    else if(ch >= 'a' and ch <= 'z') {
        cout << "lower case\n";
    }
    else {
        cout << "Invalid\n";
    }
    */
}

/*
PROGRAM 3.2: Count Characters Until Dollar Sign (Using cin >>)
File: nodollar.cpp
Note: Ignores whitespace characters
*/
void countTillDollarV1() {
    cout << "\n=== COUNT TILL DOLLAR (IGNORES SPACES) ===" << endl;
    // Uncomment to use:
    /*
    char ch;
    cin >> ch;
    int cnt = 0;
    
    while(ch != '$') {
        cnt++;
        cin >> ch;
    }
    cout << "count till dollar: " << cnt << endl;
    */
}

/*
PROGRAM 3.3: Count Characters Until Dollar Sign (Using cin.get())
File: spacescope.cpp
Note: Includes whitespace characters in count
*/
void countTillDollarV2() {
    cout << "\n=== COUNT TILL DOLLAR (INCLUDES SPACES) ===" << endl;
    // Uncomment to use:
    /*
    char ch;
    ch = cin.get();  // Reads including spaces
    int cnt = 0;
    
    while(ch != '$') {
        cnt++;
        ch = cin.get();
    }
    cout << "count till dollar: " << cnt << endl;
    */
}

// ============================================================================
// SECTION 4: PATTERN PRINTING
// ============================================================================

/*
PROGRAM 4.1: Mirrored Character Pattern (Diamond)
File: mirroring.cpp
Example (n=3):
A B C B A
B C B
C
B C B
A B C B A
*/
void mirroredPattern() {
    cout << "\n=== MIRRORED CHARACTER PATTERN (n=3) ===" << endl;
    int n = 3;
    
    // First part: expanding then contracting
    for(int r = 1; r <= n; ++r) {
        char c = 'A';
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c++;
        }
        c = c - 1;
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
    
    // Second part: contracting then expanding
    for(int r = n - 1; r >= 1; r--) {
        char c = 'A';
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c++;
        }
        c = c - 1;
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
}

/*
PROGRAM 4.2: Simple Character Pattern
File: patternABCd.cpp
Example (n=3):
A B C B A
B C B
C
*/
void simpleCharPattern() {
    cout << "\n=== SIMPLE CHARACTER PATTERN (n=3) ===" << endl;
    int n = 3;
    
    for(int r = 1; r <= n; ++r) {
        char c = 'A';
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c++;
        }
        c = c - 1;
        for(int i = 1; i <= n - r + 1; i++) {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
}

/*
PROGRAM 4.3: Numeric Pattern
File: pattern.cpp
Example (n=4):
1
2 3
4 5 6
7 8 9 10
*/
void numericPattern() {
    cout << "\n=== NUMERIC PATTERN (n=4) ===" << endl;
    int n = 4;
    int number = 1;
    
    for(int r = 1; r <= n; ++r) {
        for(int i = 1; i <= r; i++) {
            cout << number << ' ';
            number = number + 1;
        }
        cout << '\n';
    }
}

// ============================================================================
// SECTION 5: BIT MANIPULATION
// ============================================================================

/*
PROGRAM 5.1: Count Set Bits (1s in Binary)
File: setbits.cpp
Example: 5 (binary: 101) has 2 set bits
*/
void countSetBits() {
    cout << "\n=== COUNT SET BITS (n=5) ===" << endl;
    int n = 5;
    int cnt = 0;
    
    for(int temp = n; temp > 0; temp >>= 1) {
        if((temp & 1) == 1) {
            cnt++;
        }
    }
    cout << "set bits: " << cnt << endl;
}

/*
PROGRAM 5.2: Convert Decimal to Binary
File: notobinary.cpp
Displays 31-bit binary representation
*/
void decimalToBinary() {
    cout << "\n=== DECIMAL TO BINARY (n=5) ===" << endl;
    int n = 5;
    
    for(int i = 30; i >= 0; i--) {
        if((n & (1 << i)) > 0) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << endl;
}

// ============================================================================
// SECTION 6: NUMBER OPERATIONS
// ============================================================================

/*
PROGRAM 6.1: Reverse a Number
File: no_reverse.cpp
Example: 12345 → 54321
*/
void reverseNumber() {
    cout << "\n=== REVERSE NUMBER (12345) ===" << endl;
    int a = 12345;
    int ans = 0;
    
    for(int temp = a; temp > 0; temp /= 10) {
        int lastDigit = temp % 10;
        ans = ans * 10 + lastDigit;
    }
    cout << "Reversed: " << ans << endl;
}

/*
PROGRAM 6.2: Find Unique Number Using XOR
File: uniquenumber.cpp
All numbers appear twice except one. Find that one.
Properties: a^a=0, a^0=a
*/
void findUniqueNumber() {
    cout << "\n=== FIND UNIQUE NUMBER (XOR Method) ===" << endl;
    // Example: 1, 2, 3, 2, 1 → unique is 3
    int arr[] = {1, 2, 3, 2, 1};
    int ans = 0;
    
    for(int i = 0; i < 5; i++) {
        ans = ans ^ arr[i];
    }
    cout << "Unique number: " << ans << endl;
}

/*
PROGRAM 6.3: Find Square Root with Decimal Precision
File: perfectsquare.cpp
Uses iterative narrowing with decreasing increments
Example: sqrt(2) ≈ 1.41
*/
void findSquareRoot() {
    cout << "\n=== PERFECT SQUARE ROOT (n=2) ===" << endl;
    int n = 2;
    float inc = 1;
    float i = 0;
    int cp = 1;
    
    while(cp <= 3) {
        while(i * i <= n) {
            i = i + inc;
        }
        i = i - inc;
        inc = inc / 10;
        cp = cp + 1;
    }
    
    cout << fixed << setprecision(2) << i << endl;
}

// ============================================================================
// MAIN FUNCTION - Demonstrates All Programs
// ============================================================================

int main() {
    cout << "\n" << string(70, '=') << endl;
    cout << "      C++ LECTURE SUMMARY - ALL PROGRAMS DEMONSTRATION" << endl;
    cout << string(70, '=') << endl;
    
    // Section 1: While Loops
    whileLoopFixed();
    
    // Section 4: Pattern Printing
    mirroredPattern();
    simpleCharPattern();
    numericPattern();
    
    // Section 5: Bit Manipulation
    countSetBits();
    decimalToBinary();
    
    // Section 6: Number Operations
    reverseNumber();
    findUniqueNumber();
    findSquareRoot();
    
    cout << "\n" << string(70, '=') << endl;
    cout << "Note: Other programs require user input. Uncomment them to use." << endl;
    cout << string(70, '=') << endl;
    
    return 0;
}

/*
================================================================================
COMPILATION & EXECUTION NOTES:

1. Compile: g++ -o combined_program combined_code.cpp
2. Run: ./combined_program

KEY CONCEPTS COVERED:
✓ While Loop Structure (initialization, condition, updation)
✓ Prime Number Checking
✓ Character Classification & Input
✓ Pattern Printing with Nested Loops
✓ Bit Manipulation (AND, XOR, Shift operations)
✓ Number Manipulation (Reverse, Square Root)
✓ XOR Properties for Unique Element Finding

BUGS FIXED:
- prime_number.cpp: "i < 2;" → "i = 2;"

COMMON IMPROVEMENTS:
- Added comments explaining logic
- Organized by topic for clarity
- Included example outputs
- Added explanations of bit operations
================================================================================
*/