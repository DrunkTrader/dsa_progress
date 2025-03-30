#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s, string t) {
        int max_len = 0;
        // Iterate over all possible substrings of s
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j < s.size(); ++j) {
                string s_sub = s.substr(i, j - i + 1);
                // Iterate over all possible substrings of t
                for (int k = 0; k < t.size(); ++k) {
                    for (int l = k; l < t.size(); ++l) {
                        string t_sub = t.substr(k, l - k + 1);
                        string combined = s_sub + t_sub;
                        if (isPalindrome(combined)) {
                            if (combined.size() > max_len) {
                                max_len = combined.size();
                            }
                        }
                    }
                }
            }
        }
        // Also check substrings from t alone (equivalent to empty substring from s)
        for (int k = 0; k < t.size(); ++k) {
            for (int l = k; l < t.size(); ++l) {
                string t_sub = t.substr(k, l - k + 1);
                if (isPalindrome(t_sub)) {
                    if (t_sub.size() > max_len) {
                        max_len = t_sub.size();
                    }
                }
            }
        }
        // Also check substrings from s alone (equivalent to empty substring from t)
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j < s.size(); ++j) {
                string s_sub = s.substr(i, j - i + 1);
                if (isPalindrome(s_sub)) {
                    if (s_sub.size() > max_len) {
                        max_len = s_sub.size();
                    }
                }
            }
        }
        return max_len;
    }
    
private:
    bool isPalindrome(const string &s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string s1 = "a";
    string t1 = "a";
    int result1 = sol.longestPalindrome(s1, t1);
    cout << "Test Case 1 Output: " << result1 << endl; // Expected: 2
    
    // Test Case 2
    string s2 = "abc";
    string t2 = "def";
    int result2 = sol.longestPalindrome(s2, t2);
    cout << "Test Case 2 Output: " << result2 << endl; // Expected: 1
    
    // Test Case 3
    string s3 = "b";
    string t3 = "aaaa";
    int result3 = sol.longestPalindrome(s3, t3);
    cout << "Test Case 3 Output: " << result3 << endl; // Expected: 4
    
    // Test Case 4
    string s4 = "abcde";
    string t4 = "ecdba";
    int result4 = sol.longestPalindrome(s4, t4);
    cout << "Test Case 4 Output: " << result4 << endl; // Expected: 5
    
    return 0;
}