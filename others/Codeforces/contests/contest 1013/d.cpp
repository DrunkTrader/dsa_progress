/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-25 20:33:05
*/

#include<bits/stdc++.h>
using namespace std;

void solve_d() {
    int n, m, k;
    cin >> n >> m >> k;
    if (k <= m) return 1;
    int maxBench = (k + n - 1) / n;
    cout << min(maxBench, m) << endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve_d();
    }   
    return 0;
}