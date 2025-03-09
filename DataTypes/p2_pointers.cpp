#include <iostream>
using namespace std;

void increment(int* p){
    (*p)++; // Increment the value at the address stored in p
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 1. Basics of Pointers
    int x = 10; // Declare an integer variable
    int* ptr;   // Declare a pointer to an integer
    ptr = &x;   // Assign the address of x to ptr

    cout << "1. Basics of Pointers:" << endl;
    cout << "Value of x: " << x << endl;           // Output: 10
    cout << "Address of x: " << &x << endl;        // Output: Address of x
    cout << "Value of ptr (address of x): " << ptr << endl; // Output: Same as &x
    cout << "Value at ptr (dereferencing): " << *ptr << endl; // Output: 10
    cout << endl;

    // 2. Pointer Arithmetic
    int arr[3] = {10, 20, 30}; // Declare an array
    int* arrPtr = arr;         // Point to the first element of the array

    cout << "2. Pointer Arithmetic:" << endl;
    cout << "First element: " << *arrPtr << endl;       // Output: 10
    arrPtr++; // Move to the next element
    cout << "Second element: " << *arrPtr << endl;      // Output: 20
    arrPtr++; // Move to the next element
    cout << "Third element: " << *arrPtr << endl;       // Output: 30
    cout << endl;

    // 3. Pointers and Arrays
    cout << "3. Pointers and Arrays:" << endl;
    int* arrPtr2 = arr; // Point to the first element of the array
    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << *(arrPtr2 + i) << endl; // Output: 10, 20, 30
    }
    cout << endl;

    // 4. Pointers to Pointers
    int y = 50;
    int* ptr1 = &y;      // Pointer to y
    int** ptr2 = &ptr1;  // Pointer to pointer (ptr1)

    cout << "4. Pointers to Pointers:" << endl;
    cout << "Value of y: " << y << endl;                // Output: 50
    cout << "Value of ptr1 (address of y): " << ptr1 << endl; // Output: Address of y
    cout << "Value of ptr2 (address of ptr1): " << ptr2 << endl; // Output: Address of ptr1
    cout << "Value at ptr2 (dereferencing): " << *ptr2 << endl; // Output: Address of y
    cout << "Value at ptr1 (double dereferencing): " << **ptr2 << endl; // Output: 50
    cout << endl;

    // 5. Dynamic Memory Allocation
    int* dynamicPtr = new int; // Allocate memory for an integer
    *dynamicPtr = 100;         // Assign value to the allocated memory

    cout << "5. Dynamic Memory Allocation:" << endl;
    cout << "Value at dynamicPtr: " << *dynamicPtr << endl; // Output: 100
    delete dynamicPtr; // Free the allocated memory
    cout << "Memory freed using delete." << endl;
    cout << endl;

    // 6. Pointers and Functions

    int z = 5;
    cout << "6. Pointers and Functions:" << endl;
    cout << "Before increment: " << z << endl; // Output: 5
    increment(&z); // Pass address of z to the function
    cout << "After increment: " << z << endl;  // Output: 6
    cout << endl;

    // 7. const with Pointers
    const int* constPtr;       // Pointer to constant data (value cannot be changed)
    int* const constPtr2 = &z; // Constant pointer (address cannot be changed)
    const int* const constPtr3 = &z; // Constant pointer to constant data

    cout << "7. const with Pointers:" << endl;
    cout << "Value at constPtr2: " << *constPtr2 << endl; // Output: 6
    // *constPtr2 = 10; // Error: Cannot change value
    // constPtr2 = &x;  // Error: Cannot change address
    cout << endl;

    // 8. Null Pointers
    int* nullPtr = nullptr; // Initialize pointer to null
    cout << "8. Null Pointers:" << endl;
    if (nullPtr == nullptr) {
        cout << "nullPtr is a null pointer." << endl; // Output: nullPtr is a null pointer.
    }
    cout << endl;

    return 0;
}