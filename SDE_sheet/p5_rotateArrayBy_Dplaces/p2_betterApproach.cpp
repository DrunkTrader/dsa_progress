/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-27 02:38:49

step 1 : reverse the first D elements
step 2 : reverse the remaining elements from D to N-1
step 3 : reverse the whole array

Time complexity : O(d) + O(n-d) + O(n) = O(2n)
Space complexity : O(1)
  */

#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>& vec, int start, int end){
    while( start <= end){
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& vec, int d){
    int n = vec.size();

    //base case
    if (n == 0 || n == 1 ) return ;
    if (d == 0) return;

    Reverse(vec, 0, d - 1);
    Reverse(vec, d, n - 1);
    Reverse(vec, 0, n - 1);
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O

    vector<int> vecc = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = vecc.size();

    cout << "Original Array : ";
    for(int i = 0; i < n; i++){
        cout << vecc[i] << " ";
    }
    
    rotate(vecc, 4);            //rotate with d
    cout << endl;
    
    cout << "Rotated Array : ";
    for(int i = 0; i < n; i++){
        cout << vecc[i] << " ";
    }


    return 0;
}