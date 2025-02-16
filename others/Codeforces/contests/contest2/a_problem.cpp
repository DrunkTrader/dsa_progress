#include<bits/stdc++.h>
using namespace std;

int minMoves(int n, const string& s) {
    // If s contains only '0's, no moves are needed
    bool allZeros = true;
    for (char ch : s) {
        if (ch != '0') {
            allZeros = false;
            break;
        }
    }
    if (allZeros) {
        return 0;
    }

    // If s contains only '1's, one move is needed to transfer all to t
    bool allOnes = true;
    for (char ch : s) {
        if (ch != '1') {
            allOnes = false;
            break;
        }
    }
    if (allOnes) {
        return 1;
    }

    // Count the number of transitions between '0' and '1'
    int moves = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            moves++;
        }
    }

    // If the first character is '1', one more move is needed
    if (moves > 1 && s[0] == '1') {
        moves++;
    }

    return moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minMoves(n, s) << endl;
    }
    return 0;
}