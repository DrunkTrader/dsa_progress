#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end()); 
    int teams = 0, members = 0;
    for (int i = n - 1; i >= 0; i--) {
        members++;
        if (members * a[i] >= x) {
            teams++;
            members = 0;
        }
    }
    cout << teams << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
