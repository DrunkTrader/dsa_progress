/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-28 20:31:07

  Optimal Approach: Using pointers
        Step 1 : Find the first zero's occurence in the array.
        Step 2 : Now, we have to swap the non zero elements with the first zero's occurence and increment j.
        Step 3 : Repeat the process until we reach the end of the array.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> optimal_zeroMove(vector<int> &vec){
  int n = vec.size();
  if (n == 0 || n == 1 ) return vec;
  int j = -1;
  for(int i = 0; i < n; i++){
      if(vec[i] == 0) {
        j = i;    //first zero's occurence
        break;
      }
  }
  // for non zero element in the array
  if(j == -1) return vec;

  // now , we have to swap the non zero elements with the first zero's occurence and increment j
  for(int i = j + 1; i < n; i++){
      if(vec[i] != 0) {
        swap(vec[i],vec[j]);
        j++;
      }
  }
  return vec;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> vec = {0, 1, 0, 3, 12, 0 , 0, 0, 4, 5};

    cout << "Original Array : ";
    for(auto i : vec) cout << i << " ";

    optimal_zeroMove(vec);
    cout << "\nArray after moving zeroes to end : ";
    for(auto i : vec) cout << i << " ";
    return 0;
}