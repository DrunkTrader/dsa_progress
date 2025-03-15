/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-14 15:20:50
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    cout << "Insert rows & columns : " << endl;
    int r, c;       // r = rows, c = columns
    cin >> r >> c;  // input rows and columns
    int arr[r][c];  // 2D array of r rows and c columns

    // input 2D array
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    //print the array
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " ";    
        }
        cout << endl;
    }
    return 0;
}