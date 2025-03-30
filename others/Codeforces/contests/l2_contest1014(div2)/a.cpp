/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-29 20:02:57
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

//function to get all divisors of n
vector<ll> getDivisors(ll n){
    vector<ll> divisors;
    // loop from 1 to sqrt(n)
    for(ll i = 1; i*i <=n; i++){
        if(n % i == 0){ // i is a divisor
            divisors.push_back(i);
            if(i != n/i){  
                divisors.push_back(n/i); // to avoid duplicates
            }
        }
    }
    return divisors;
}


int solve(int n, vector<ll> &beauty_levels) {
    int max_pleasure = 0;

    // try all possible pairs of beauty levels
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            ll ai = beauty_levels[i];
            ll aj = beauty_levels[j];

            ll diff = abs(ai - aj);
            if(diff ==0) {
                max_pleasure = max(max_pleasure, (int)(ai + 1));
                continue;
            }

            //find all divisors of the difference
            vector<ll> divisors = getDivisors(diff);
            
            for(ll d: divisors){
                if(ai % d == aj % d){
                    // if both beauty levels are divisible by d
                    max_pleasure = max(max_pleasure, (int)d);
                }
            }
        }
    }
    return max_pleasure;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> beauty_levels(n);
        for (int i = 0; i < n; i++) {
            cin >> beauty_levels[i];
        }
        
        cout << solve(n, beauty_levels) << endl;
    }
    
    return 0;
}