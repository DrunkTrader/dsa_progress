#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> newArray;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else {
            newArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return newArray;
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);
    
    cout << "Intersection of arrays: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
