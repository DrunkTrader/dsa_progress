#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. Static 2D Array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Static 2D Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // Access and modify
    arr[2][1] = 99;
    cout << "Modified Element at arr[2][1]: " << arr[2][1] << "\n\n";

    // 2. Dynamic 2D Array
    int rows = 3, cols = 4;
    int** dynamicArr = new int*[rows];

    cout << "Dynamic 2D Array:\n";
    for (int i = 0; i < rows; i++) {
        dynamicArr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            dynamicArr[i][j] = i * cols + j;
            cout << dynamicArr[i][j] << " ";
        }
        cout << "\n";
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArr[i];
    }
    delete[] dynamicArr;

    cout << "Program executed successfully.\n";
    return 0;
}
