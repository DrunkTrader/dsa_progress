#include <iostream>
#include <algorithm> // for sort, reverse, etc.
#include <vector>    // for dynamic arrays
using namespace std;

int main() {
    // 1. Array Initialization
    int arr1[5] = {1, 2, 3, 4, 5}; // Static array
    vector<int> arr2 = {10, 20, 30, 40, 50}; // Dynamic array (vector)

    cout << "1. Array Initialization:" << endl;
    cout << "Static Array (arr1): ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    cout << "Dynamic Array (arr2): ";
    for (int x : arr2) {
        cout << x << " "; // Output: 10 20 30 40 50
    }
    cout << endl << endl;

    // 2. Accessing Elements
    cout << "2. Accessing Elements:" << endl;
    cout << "First element of arr1: " << arr1[0] << endl; // Output: 1
    cout << "Last element of arr2: " << arr2.back() << endl; // Output: 50
    cout << endl;

    // 3. Modifying Elements
    cout << "3. Modifying Elements:" << endl;
    arr1[2] = 100; // Modify third element of arr1
    arr2[3] = 400; // Modify fourth element of arr2
    cout << "Modified arr1: ";
    for (int x : arr1) {
        cout << x << " "; // Output: 1 2 100 4 5
    }
    cout << endl;

    cout << "Modified arr2: ";
    for (int x : arr2) {
        cout << x << " "; // Output: 10 20 30 400 50
    }
    cout << endl << endl;

    // 4. Array Size
    cout << "4. Array Size:" << endl;
    cout << "Size of arr1: " << sizeof(arr1) / sizeof(arr1[0]) << endl; // Output: 5
    cout << "Size of arr2: " << arr2.size() << endl; // Output: 5
    cout << endl;

    // 5. Sorting
    cout << "5. Sorting:" << endl;
    sort(arr1, arr1 + 5); // Sort static array
    sort(arr2.begin(), arr2.end()); // Sort dynamic array
    cout << "Sorted arr1: ";
    for (int x : arr1) {
        cout << x << " "; // Output: 1 2 4 5 100
    }
    cout << endl;

    cout << "Sorted arr2: ";
    for (int x : arr2) {
        cout << x << " "; // Output: 10 20 30 50 400
    }
    cout << endl << endl;

    // 6. Reversing
    cout << "6. Reversing:" << endl;
    reverse(arr1, arr1 + 5); // Reverse static array
    reverse(arr2.begin(), arr2.end()); // Reverse dynamic array
    cout << "Reversed arr1: ";
    for (int x : arr1) {
        cout << x << " "; // Output: 100 5 4 2 1
    }
    cout << endl;

    cout << "Reversed arr2: ";
    for (int x : arr2) {
        cout << x << " "; // Output: 400 50 30 20 10
    }
    cout << endl << endl;

    // 7. Searching
    cout << "7. Searching:" << endl;
    int key1 = 4;
    bool found1 = binary_search(arr1, arr1 + 5, key1); // Binary search in static array
    bool found2 = binary_search(arr2.begin(), arr2.end(), 30); // Binary search in dynamic array
    cout << "Is " << key1 << " in arr1? " << (found1 ? "Yes" : "No") << endl; // Output: Yes
    cout << "Is 30 in arr2? " << (found2 ? "Yes" : "No") << endl; // Output: Yes
    cout << endl;

    // 8. Finding Minimum and Maximum
    cout << "8. Finding Minimum and Maximum:" << endl;
    int min1 = *min_element(arr1, arr1 + 5); // Min in static array
    int max1 = *max_element(arr1, arr1 + 5); // Max in static array
    int min2 = *min_element(arr2.begin(), arr2.end()); // Min in dynamic array
    int max2 = *max_element(arr2.begin(), arr2.end()); // Max in dynamic array
    cout << "Min in arr1: " << min1 << endl; // Output: 1
    cout << "Max in arr1: " << max1 << endl; // Output: 100
    cout << "Min in arr2: " << min2 << endl; // Output: 10
    cout << "Max in arr2: " << max2 << endl; // Output: 400
    cout << endl;

    // 9. Sum of Elements
    cout << "9. Sum of Elements:" << endl;
    int sum1 = 0;
    for (int x : arr1) {
        sum1 += x; // Sum of static array
    }
    int sum2 = 0;
    for (int x : arr2) {
        sum2 += x; // Sum of dynamic array
    }
    cout << "Sum of arr1: " << sum1 << endl; // Output: 112
    cout << "Sum of arr2: " << sum2 << endl; // Output: 510
    cout << endl;

    // 10. Dynamic Array Operations (Vector)
    cout << "10. Dynamic Array Operations (Vector):" << endl;
    arr2.push_back(60); // Add element to the end
    arr2.pop_back();    // Remove element from the end
    arr2.insert(arr2.begin() + 2, 25); // Insert 25 at index 2
    arr2.erase(arr2.begin() + 3); // Remove element at index 3
    cout << "Modified arr2: ";
    for (int x : arr2) {
        cout << x << " "; // Output: 400 50 25 20 10
    }
    cout << endl << endl;

    // 11. 2D Arrays
    cout << "11. 2D Arrays:" << endl;
    int arr3[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2D static array
    vector<vector<int>> arr4 = {{10, 20}, {30, 40}, {50, 60}}; // 2D dynamic array
    cout << "2D Static Array (arr3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " "; // Output: 1 2 3 4 5 6
        }
        cout << endl;
    }
    cout << "2D Dynamic Array (arr4):" << endl;
    for (auto row : arr4) {
        for (int x : row) {
            cout << x << " "; // Output: 10 20 30 40 50 60
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}