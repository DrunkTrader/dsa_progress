#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Sorts an array using the insertion sort algorithm.
 * 
 * This function takes an array and its size as input and sorts the array
 * in ascending order using the insertion sort algorithm. It iterates through
 * the array, and for each element, it places it in its correct position
 * relative to the already sorted part of the array.
 * 
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
 */

void insertion_sort(int arr[], int n) {             // Function to sort the array using insertion sort
    for (int i = 0; i <= n - 1; i++) {                // Traverse through the array from the second element
        int j = i;                                  // Store the current index
        while (j > 0 && arr[j - 1] > arr[j]) {      // Compare the current element with the previous element
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;                                // Move to the previous element
        }
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);
    return 0;
}
