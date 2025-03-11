/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-10 17:32:38
*/

#include<bits/stdc++.h>
using namespace std;

void rotateby1(vector<int>& arr){
    int n = arr.size();
    vector<int> tempArr(n);
    
    for(int i = 1; i < n; i++){
        tempArr[i - 1] = arr[i];
    }
    tempArr[n - 1] = arr[0];
    
    cout << "Rotated Array" << endl;
    for(int i = 0; i < n; i++){
        cout << tempArr[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    rotateby1(arr1);
    return 0;
}