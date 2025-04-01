/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-30 16:20:58

About the problem: Given 2 sorted arrays , find the union of the two arrays.
  */

#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfSortedArrays(vector<int> a,vector<int> b){
    set<int> s;
    // for inserting the elements of the a array into the set
    for(auto i : a){
        s.insert(i);
    }
    // for inserting the elements of the b array into the set
    for(auto i : b){
        s.insert(i);
    }

    //convert the set into a vector
    vector<int> ans;
    for(auto i : s){
        ans.push_back(i);
    }
    
    // print the vector
    for(auto i : ans){
        cout << i << " ";
    }
    return ans;
}

int main(){
    // ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> a,b;
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    cout << "Enter the size of the second array: ";
    cin >> m;

    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    cout << "The union of the two arrays is: ";
    unionOfSortedArrays(a,b);
    
    return 0;
}