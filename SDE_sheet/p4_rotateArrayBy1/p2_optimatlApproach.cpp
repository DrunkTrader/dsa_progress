/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-12 03:25:23
*/

#include<bits/stdc++.h>
using namespace std;

void optimalRotateby1(vector<int> arr){
    int n = arr.size();

    int tempVar = arr[0];
    for(int i = 1; i <= n; i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = tempVar;
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    optimalRotateby1(arr1);
    return 0;
}