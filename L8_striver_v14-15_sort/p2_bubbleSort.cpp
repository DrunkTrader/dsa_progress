//BUBBLE SORT

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {          // n-1 because last element will be automatically sorted
        int didSwap = 0;                        // to check if any swap is done or not
        for (int j = 0; j <= i - 1; j++) {      // j = 0 because we have to compare with next element
            if (arr[j] > arr[j + 1]) {          // if current element is greater than next element
                int temp = arr[j + 1];          // swapping
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;                    // swap is done
            }
        }
        if (didSwap == 0) {                     // if no swap is done then break
            break;
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {               // printing the sorted array
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)                 // printing the array
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}
