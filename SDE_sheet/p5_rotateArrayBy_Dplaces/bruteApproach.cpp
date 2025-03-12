/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-12 17:04:55
*/

#include<bits/stdc++.h>
using namespace std;

void leftRotateByD(vector<int>& arr, int d){

    int n = arr.size();

    /*step 1 : compute the effective rotation
    step 2 : create a temporary array and store the first D elements in the temporary array
    step 3 : left push the elements by d places in the main array
    step 4 : push the elements in the temporary array in the main array*/

    d = d % n;      //compute the effective rotation
    if(n == 0 || n == 1) return;  // if n is zero or one then return the array as it is
    if(d == 0) return;  // if d is zero then return the array as it is

    vector<int> tempArr(d);
    for(int i = 0; i < d; i++){
        tempArr[i] = arr[i];
    }
    //left push the elements in the main array
    for(int i = 0; i <= n-d; i++){
        arr[i] = arr[i + d];
    }
    // pushing the temp elements in the main array
    for(int i = 0; i < d; i++){
        arr[ n-d + i] = tempArr[i];
    }
    //print the array
    cout << "Array after left rotation by " << d << " places : " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> arr1 = {1,2,3,4,5,6,7};

    cout << "Original Array :" << endl;
    for(size_t i = 0; i < arr1.size(); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    leftRotateByD(arr1, 3);
    return 0;
}