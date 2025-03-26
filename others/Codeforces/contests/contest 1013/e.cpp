/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-25 21:29:01
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Function to calculate GCD using Euclidean algorithm
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Function to count interesting ratios
ll InterestingRatios(int n) {
    ll count = 0;
    
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            // Calculate LCM and GCD
            ll lcm = (1LL * a * b) / gcd(a, b);
            ll gcd_val = gcd(a, b);
            
            // Calculate F(a,b)
            ll f_ab = lcm / gcd_val;
            
            // Check if F(a,b) is prime
            if (f_ab > 1) {
                bool is_prime = true;
                for (ll i = 2; i * i <= f_ab; i++) {
                    if (f_ab % i == 0) {
                        is_prime = false;
                        break;
                    }
                }
                
                if (is_prime) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << InterestingRatios(n) << endl;
    }  
    
    return 0;
}