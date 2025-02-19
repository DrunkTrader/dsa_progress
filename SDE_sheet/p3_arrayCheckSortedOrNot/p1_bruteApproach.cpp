#include<bits/stdc++.h>
using namespace std;

bool checksorted(int arr[], int n){
    if(n == 0 || n == 1) return true;   // if array is empty or has only one element
    for(int i = 0; i < n-1; i++){       // if array has more than one element
        if (arr[i] <= arr[i+1]){        // if current element is less than or equal to next element
            return true;                // then array is sorted
        }
        else{                               // if current element is greater than next element
            return false;                // then array is not sorted
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result = checksorted(arr, n);
    cout << (result ? "Array is sorted" : "Array is not sorted") << endl;
    return 0;
}