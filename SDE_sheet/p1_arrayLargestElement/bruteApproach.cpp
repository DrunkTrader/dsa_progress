#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n-1]; 
}

int main(){
    vector<int> arr = {2,5,1,3,0};
    cout << sortArr(arr) << endl;
    return 0;
}