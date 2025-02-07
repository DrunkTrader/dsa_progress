// Print linearly from 1 to N using recursion
#include<bits/stdc++.h>
using namespace std;

void lfun(int i, int n){
    if (i > n)
        return;
    cout << i << endl;
    lfun(i+1, n);
}
int main(){
    int n;
    cin >> n;
    lfun(1, n);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) (stack space)