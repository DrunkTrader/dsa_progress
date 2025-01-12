// Print name N times using recursion
#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if (i>n){                   // base case to stop the recursion
        return;
    }
    cout << "drunktrader" << endl;
    fun(i+1,n);                // recursive call
}
int main(){
    int n;
    cout << "no. of times to be printed ? :" << endl;
    cin >> n;
    fun(1,n);                // initial call
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n)
