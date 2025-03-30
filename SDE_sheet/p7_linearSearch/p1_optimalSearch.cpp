/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-29 22:03:38
*/

#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int> &arr, int target ){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] == target) return i;
    }

    return -1
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    
    return 0;
}