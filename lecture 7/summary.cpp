// ============================================================================
// POINTER AND ARRAY PROGRAMS - REVISED AND IMPROVED VERSION
// ============================================================================
// This file contains all your programs with improvements, explanations, 
// and best practices for working with pointers and arrays in C++
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// ============================================================================
// SECTION 1: ADDRESS OF VARIABLES (adressofA.cpp - IMPROVED)
// ============================================================================
void section1_addressOfVariables() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 1: ADDRESS OF VARIABLES" << endl;
    cout << string(70, '=') << endl;
    
    int a = 1;
    float f = 1.11f;  // Added 'f' suffix for float literal
    bool b = true;
    
    cout << "\n--- Integer Variable ---" << endl;
    cout << "Variable a: " << a << endl;
    cout << "Address &a: " << &a << endl;
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;
    
    cout << "\n--- Float Variable ---" << endl;
    cout << "Variable f: " << f << endl;
    cout << "Address &f: " << &f << endl;
    cout << "Size of f: " << sizeof(f) << " bytes" << endl;
    
    cout << "\n--- Boolean Variable ---" << endl;
    cout << "Variable b: " << boolalpha << b << endl;  // boolalpha for true/false
    cout << "Address &b: " << &b << endl;
    cout << "Size of b: " << sizeof(b) << " bytes" << endl;
    
    cout << "\n--- Array ---" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // FIXED: was sizeof(a) instead of sizeof(arr[0])
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array name (arr): " << arr << endl;
    cout << "Address of first element &arr[0]: " << &arr[0] << endl;
    cout << "Both are same: " << (arr == &arr[0] ? "YES" : "NO") << endl;
    
    cout << "\n--- Size Information ---" << endl;
    cout << "sizeof(&a): " << sizeof(&a) << " bytes (pointer size)" << endl;
    cout << "sizeof(&f): " << sizeof(&f) << " bytes (pointer size)" << endl;
    cout << "sizeof(arr): " << sizeof(arr) << " bytes (entire array)" << endl;
}

// ============================================================================
// SECTION 2: BASIC POINTERS (2_pointers.cpp - IMPROVED)
// ============================================================================
void section2_basicPointers() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 2: BASIC POINTERS" << endl;
    cout << string(70, '=') << endl;
    
    int a = 1;
    int *f = &a;  // f is a pointer to integer, stores address of a
    
    cout << "\n--- Variable and Address ---" << endl;
    cout << "Variable a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    
    cout << "\n--- Pointer Variable ---" << endl;
    cout << "Pointer f points to: " << f << " (address of a)" << endl;
    cout << "Value at address (dereference *f): " << *f << endl;
    cout << "Address of pointer itself (&f): " << &f << endl;
    
    cout << "\nKey Concept: " << endl;
    cout << "&a == f: " << ((&a == f) ? "TRUE" : "FALSE") << endl;
}

// ============================================================================
// SECTION 3: DEREFERENCE (3_dereference.cpp - IMPROVED)
// ============================================================================
void section3_dereference() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 3: DEREFERENCE OPERATOR" << endl;
    cout << string(70, '=') << endl;
    
    int a = 1;
    int *f = &a;
    
    cout << "\n--- Understanding Dereference ---" << endl;
    cout << "Variable a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Pointer f = &a: " << f << endl;
    
    cout << "\n--- Dereference Operations ---" << endl;
    cout << "*(&a): " << *(&a) << " (dereference address of a = original value)" << endl;
    cout << "*f: " << *f << " (dereference pointer f = value at address f)" << endl;
    cout << "&f: " << &f << " (address of pointer f itself)" << endl;
    
    cout << "\nKey Concept:" << endl;
    cout << "* operator: dereference (get value at address)" << endl;
    cout << "& operator: address-of (get address of variable)" << endl;
    cout << "*(&x) == x (always true)" << endl;
}

// ============================================================================
// SECTION 4: CHARACTER ADDRESS (4_characteraddress.cpp - IMPROVED)
// ============================================================================
void section4_characterAddress() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 4: CHARACTER ADDRESS AND CASTING" << endl;
    cout << string(70, '=') << endl;
    
    char ch = 'A';
    char ch1 = 'B';
    char ch2 = 'C';
    
    cout << "\n--- Character Addresses ---" << endl;
    cout << "Character ch: " << ch << endl;
    cout << "Address &ch: " << (void*)&ch << " (cast to void* to show address)" << endl;
    
    cout << "\n--- Different Type Casting ---" << endl;
    cout << "Address as int*: " << (int*)&ch1 << endl;
    cout << "Address as float*: " << (float*)&ch2 << endl;
    cout << "Address as void*: " << (void*)&ch2 << " (generic pointer)" << endl;
    
    cout << "\n--- Important Note ---" << endl;
    cout << "When printing char* using cout, it prints the string, not address!" << endl;
    cout << "Always cast char* to (void*) to see the actual address." << endl;
}

// ============================================================================
// SECTION 5: POINTER INITIALIZATION (5_pointerinitialization.cpp - IMPROVED)
// ============================================================================
void section5_pointerInitialization() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 5: POINTER INITIALIZATION" << endl;
    cout << string(70, '=') << endl;
    
    cout << "\n--- WRONG: Uninitialized Pointer ---" << endl;
    int *a;  // DANGEROUS! Contains garbage address
    cout << "Uninitialized pointer a (AVOID THIS!)" << endl;
    cout << "Address in a: " << a << " (garbage value)" << endl;
    cout << "Dereferencing *a would cause undefined behavior!" << endl;
    
    cout << "\n--- CORRECT: Initialized with NULL ---" << endl;
    int *c = NULL;  // Or use nullptr in C++11
    cout << "Pointer c initialized to NULL: " << c << endl;
    cout << "Safe to check: if (c != NULL) before dereferencing" << endl;
    
    cout << "\n--- CORRECT: Initialized with Valid Address ---" << endl;
    int x = 5;
    int *b = &x;  // Points to valid address
    cout << "Pointer b = &x: " << b << endl;
    cout << "Value at b (*b): " << *b << endl;
    
    cout << "\n--- BEST PRACTICE (C++11) ---" << endl;
    int *d = nullptr;  // Modern C++ null pointer
    cout << "Use nullptr instead of NULL" << endl;
}

// ============================================================================
// SECTION 6: UPDATING VALUE VIA ADDRESS (6_updatingvalueviaadress.cpp - IMPROVED)
// ============================================================================
void update(int *x) {
    cout << "  Inside function - Before: *x = " << *x << endl;
    *x = *x + 1;  // Modify the value at the address
    cout << "  Inside function - After: *x = " << *x << endl;
}

void section6_updateViaAddress() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 6: UPDATING VALUE VIA ADDRESS" << endl;
    cout << string(70, '=') << endl;
    
    int a = 1;
    cout << "\nBefore update:" << endl;
    cout << "a = " << a << " at address " << &a << endl;
    
    cout << "\nCalling update(&a)..." << endl;
    update(&a);
    
    cout << "\nAfter update:" << endl;
    cout << "a = " << a << " at address " << &a << endl;
    
    cout << "\nKey Concept:" << endl;
    cout << "Passing &a (address) allows function to modify original value" << endl;
    cout << "This is called 'Pass by Reference using Pointers'" << endl;
}

// ============================================================================
// SECTION 7: ARRAY AND POINTER (7_arrayandpointer.cpp - IMPROVED)
// ============================================================================
void section7_arrayAndPointer() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 7: ARRAY AND POINTER" << endl;
    cout << string(70, '=') << endl;
    
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    
    cout << "\n--- Method 1: Using Pointer Arithmetic (*(a+i)) ---" << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";  // Pointer arithmetic
    }
    cout << endl;
    
    cout << "\n--- Method 2: Using Pointer Assignment ---" << endl;
    int *x = a;  // x points to first element
    cout << "Pointer x = a points to: " << x << endl;
    cout << "Array elements using x[i]: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";  // Equivalent to *(x+i)
    }
    cout << endl;
    
    cout << "\n--- Pointer Arithmetic ---" << endl;
    cout << "a (array name): " << a << endl;
    cout << "a+0: " << (a+0) << " -> value: " << *(a+0) << endl;
    cout << "a+1: " << (a+1) << " -> value: " << *(a+1) << endl;
    cout << "a+2: " << (a+2) << " -> value: " << *(a+2) << endl;
    
    cout << "\nKey Concept:" << endl;
    cout << "Array name is pointer to first element" << endl;
    cout << "a[i] == *(a+i) (both are equivalent)" << endl;
    cout << "x[i] == *(x+i) (pointer arithmetic)" << endl;
}

// ============================================================================
// SECTION 8: ARRAYS, POINTERS, AND FUNCTIONS (8_arrayspointerandfunction.cpp)
// ============================================================================
void printArray(int *arr, int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  // Pointer arithmetic
    }
    cout << endl;
    
    // Note: sizeof(arr) in function gives pointer size (4 or 8 bytes)
    // That's why we need to pass n (array size) separately
    cout << "sizeof(arr) in function: " << sizeof(arr) << " bytes (pointer size)" << endl;
}

void section8_arrayAndFunction() {
    cout << "\n" << string(70, '=') << endl;
    cout << "SECTION 8: ARRAYS, POINTERS, AND FUNCTIONS" << endl;
    cout << string(70, '=') << endl;
    
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);  // This works only in main
    
    cout << "\n--- In main function ---" << endl;
    cout << "sizeof(a): " << sizeof(a) << " bytes (entire array)" << endl;
    cout << "Array size n: " << n << " elements" << endl;
    
    cout << "\n--- Passing array to function ---" << endl;
    cout << "Calling printArray(a, n)..." << endl;
    printArray(a, n);
    
    cout << "\n--- Important Notes ---" << endl;
    cout << "1. Array decays to pointer when passed to function" << endl;
    cout << "2. sizeof(arr) in function = pointer size (not array size)" << endl;
    cout << "3. Always pass array size as separate parameter" << endl;
    cout << "4. Modifications in function affect original array (pass by reference)" << endl;
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main() {
    cout << "\n" << string(70, '*') << endl;
    cout << "POINTER AND ARRAY REVISION GUIDE" << endl;
    cout << string(70, '*') << endl;
    
    section1_addressOfVariables();
    section2_basicPointers();
    section3_dereference();
    section4_characterAddress();
    section5_pointerInitialization();
    section6_updateViaAddress();
    section7_arrayAndPointer();
    section8_arrayAndFunction();
    
    cout << "\n" << string(70, '*') << endl;
    cout << "END OF REVISION GUIDE" << endl;
    cout << string(70, '*') << endl << endl;
    
    return 0;
}

/* ============================================================================
QUICK REFERENCE GUIDE
============================================================================

OPERATORS:
- & (address-of): Get address of a variable
- * (dereference): Get value at an address

KEY CONCEPTS:
1. int a = 5;        // variable a
   int *p = &a;      // pointer p stores address of a
   *p;               // gives 5 (dereference)

2. Array name is a pointer to first element
   int arr[] = {1,2,3};
   arr == &arr[0]     // always true

3. Pointer arithmetic
   arr[i] == *(arr+i) // equivalent

4. Passing array to function
   - Array decays to pointer
   - sizeof(arr) in function = pointer size
   - Always pass size as parameter

5. Null pointers
   int *p = nullptr;  // C++11 style (RECOMMENDED)
   int *p = NULL;     // C style

6. Important
   - Always initialize pointers
   - Check for nullptr before dereferencing
   - Understand pass by pointer vs pass by reference
   - Memory addresses depend on compiler and OS

============================================================================ */