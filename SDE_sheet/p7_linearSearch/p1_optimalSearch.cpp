/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-29 22:03:38
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target ){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] == target) return i;
    }
    
    return -1; // return -1 if target not found
}

int main(){
    // ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    cout << "Enter the size of the array: ";
    int n; cin >> n;
    vector<int> arr(n); // Resize the vector to size n
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the target value: " ;
    int target ; cin>> target;

    //print the target position
    int position = linearSearch(arr, target);
    if (position == -1) {
        cout << "Target not found." << endl;
    } else {
        cout << "The target is at position : " << position << endl;
    }
    cout << "Program completed successfully." << endl;
    return 0;
}