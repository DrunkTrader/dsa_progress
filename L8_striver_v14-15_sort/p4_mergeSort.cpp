//Merge Sort (Divide and Conquer)
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;   // temporary array to store sorted elements
    int left = low;      // low is the starting of left half
    int right = mid+1;  // mid+1 is the starting of right half

    while(left <= mid && right <= high){

        // if left element is smaller
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);  // push left element to temp
            left++;                     // move to next element
        }

        // if right element is smaller
        else{
            temp.push_back(arr[right]); // push right element to temp
            right++;                    // move to next element
        }
    }

    // Copy remaining elements from left half
    while(left <= mid){
        temp.push_back(arr[left]);  // push left element to temp
        left++;
    }

    //Copy remaining elements from right half
    while(right <= high){
        temp.push_back(arr[right]); // push right element to temp
        right++;
    }

    //transfter all the elements from temporary to arr array
    for(int i = low; i <= high; i++){       // from low to high
        arr[i] = temp[i - low];             // copy elements from temp to arr; i-low is the index of temp
    }
}

// Merge Sort Function
void MSort(vector<int> &arr,int low, int high) {
    if (low >= high) return;
    int mid = (low + high)/2;
    MSort(arr, low, mid);           // left half
    MSort(arr, mid+1, high);        // right half
    merge(arr, low, mid, high);     // merging sorted halves

}

int main(){
    vector<int> array = {5, 12, 6, 8, 1, 6, 2, 3, 18, 55, 69};
    int n = 10; // size of array

    // print unsorted array using index
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " "  ;
    }
    cout << endl;

    MSort(array, 0, n-1);           // Merge Sort Function
    // print sorted array using iterator
    cout << "After Sorting Array: " << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}