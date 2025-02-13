#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int oneLength = word1.size();
    int twoLength = word2.size();
    string tempArr;
    int i = 0, j = 0;
    while (i < oneLength && j < twoLength) {
        tempArr.push_back(word1[i++]);
        tempArr.push_back(word2[j++]);
    }
    while (i < oneLength) {
        tempArr.push_back(word1[i++]);
    }
    while (j < twoLength) {
        tempArr.push_back(word2[j++]);
    }
    return tempArr;
}

int main() {
    string word1 = "abc";
    string word2 = "pqr";
    cout << mergeAlternately(word1, word2) << endl;
    return 0;
}