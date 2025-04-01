/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-31 09:06:30

  Brute Approach:
  1. Traverse from elements of arr2 in arr1 to find a pair of elements.
  2. Create a intersectionArray array and store the intersection elements in this array.
  3. Remove the elements in the arr1 and arr2 so that no elements get paired if it has duplicate elements. 
  */

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfSortedArrays(vector<int> arr1, vector<int> arr2){
    int size1 = arr1.size(); int size2 = arr2.size();
    vector<int> intersectionArray;

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                intersectionArray.push_back(arr1[i]);
                arr1.erase(arr1.begin() + i);
                arr2.erase(arr2.begin() + j);
                continue;
            }
        }
    }
    return intersectionArray;
}

int main(){
//     ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    vector<int> arr1, arr2;
    int array1_size, array2_size;

    cout << "Enter the size of array 1 : " ; cin >> array1_size;
    cout << "Enter the elements of array 1 : ";
    for (int i = 0; i < array1_size; i++) {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    cout << "Enter the size of array 2 : " ; cin >> array2_size;
    cout << "Enter the elements of array 2 : ";
    for (int j = 0; j < array2_size; j++) {
        int element;
        cin >> element;
        arr2.push_back(element);
    }

    vector<int> result = intersectionOfSortedArrays(arr1, arr2);
    cout << " Intersection of these sorted arrays are : " ;
    for(auto i : result){
        cout << i << " ";
    }

    return 0;
}