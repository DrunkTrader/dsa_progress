//QUICK SORT ALGORITM
//Time Complexity: O(nlogn) in average case and O(n^2) in worst case
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){         //Partition function to find the partition index
  int pivot = arr[low];                                     //Choosing the first element as pivot 
  int left = low;                                           //left pointer
  int right = high;                                         //right pointer

  while(left < right){                                      //while left pointer is less than right pointer
    //loop to find the element which is greater than pivot from left side
    while (arr[left] <= pivot && left <= high -1) {         //if element at left pointer is less than or equal to pivot and left pointer is less than high
        left++;                                             //increment left pointer
    }
    //loop to find the element which is less than pivot from right side
    while (arr[right] > pivot && right >= low) {            //if element at right pointer is greater than pivot and right pointer is greater than low
        right--;                                            //decrement right pointer
    }
    
    //if left pointer is less than right pointer then swap the elements at left and right pointer
    if (left < right) 
        swap(arr[left], arr[right]); 
  }
    //swap the pivot element with the element at right pointer 
    swap(arr[low], arr[right]);
    return right;
}

//Quick Sort function to sort the array
void qs(vector<int> &arr, int low, int high){               //parameters: array, low index, high index
    if (low < high){                                        //if low index is less than high index then only sort the array then only sort the array
        int partitionIndex = partition(arr, low, high);     //find the partition index
        qs(arr, low, partitionIndex - 1);                   //sort the left subarray
        qs(arr, partitionIndex + 1, high);                  //sort the right subarray
    }
}

//Function to call the quick sort function
vector<int> quickSort(vector<int> arr) {                    //vector function with parameter: array
    qs(arr, 0, arr.size()-1);
    return arr;                                             //return the sorted array
}

int main(){
    vector<int> vectorArray = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = vectorArray.size();                             //size of array
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {                           //print the array before sorting 
        cout << vectorArray[i] << " ";
    }
    cout << endl;

    vector<int> sortedArray = quickSort(vectorArray);       //call the quick sort function
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    return 0;
}