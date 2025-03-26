/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-25 20:08:03
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string target = "01032025";
    map<int, int> required;
    int t; cin >> t;
    //preprocessing
    for (char c : target ){
        int d = c - '0';
        required[d]++;
    }
    while(t--){
        int n; cin >> n;
        vector<int> input(n);
        for (int i = 0; i < n; i++){
            cin >> input[i];
        }
        map<int, int> freq;
        int result = 0;
        bool found = false;
        for (int i = 0; i < n; ++i){
            int d = input[i];
            if (required.find(d) != required.end()){
                freq[d]++;   
            }
            bool ok = true;
            for (auto pair : required){
                if (freq[pair.first] < pair.second){
                    ok = false;
                    break;
                }
            }
            if (ok){
                result = i + 1;
                found = true;
                break;
            }
        }
        cout << (found ? result : 0) << endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    solve();
    return 0;
}