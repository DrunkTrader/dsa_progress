// print from n to 1 using backtrack
#include <iostream>
using namespace std;

void printBacktrack(int n) {
    if (n < 1) return; // Base case: if n is less than 1, stop recursion

    cout << n << endl;  // Print the current number before backtracking
    printBacktrack(n - 1); // Recursive call to print the next number
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printBacktrack(n);  // Call the function with input n
    return 0;
}