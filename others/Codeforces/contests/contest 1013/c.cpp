/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-25 21:01:25
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }
        vector<int> permutation(n);
        int left = 1, right = n - 1;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                permutation[i] = right--;
            } else {
                permutation[i] = left++;
            }
        }
        permutation[n / 2] = n;
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
   
    solve();
    return 0;
}