// This program writes a recursive function that reverses the elements of an array.
//Way - 1 : Using a recursive function with two pointers l and r pointing to the first and last element of the array respectively.
#include<bits/stdc++.h>
using namespace std;

void f(int arr[], int l, int r){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    f(arr, l+1, r-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    f(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}