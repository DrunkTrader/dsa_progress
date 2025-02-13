#include <bits/stdc++.h>
using namespace std;

bool quitCode(int x, int y) {
    int diff = y - x;
    if (diff == 1) {
        return true;
    }
    // if diff is negative and (diff - 1) is divisible by 9
    if (diff < 0 && (diff - 1) % 9 == 0) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (quitCode(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}