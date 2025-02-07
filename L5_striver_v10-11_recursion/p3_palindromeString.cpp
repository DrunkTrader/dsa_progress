//Write a recursive function to check whether a string is palindrome or not.
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string s){
    int n = s.size();
    if ( i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return palindrome(i+1,s); 
    }

int main(){
    string s;
    cin >> s;
    cout << palindrome(0,s);
    return 0;
}