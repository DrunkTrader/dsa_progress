/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-30 16:51:01
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> optimalUnion(vector<int> a, vector<int> b){
    vector<int> unionArray;
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;

    // Using two pointers to traverse both arrays
    while(i < n1 && j < n2){    // while both arrays have elements
        if(a[i] <= b[j]){       // if a[i] is smaller or equal to b[j]
            if(unionArray.size() == 0 || unionArray.back() != a[i]){        // check if the last element in unionArray is not equal to a[i]
                unionArray.push_back(a[i]);
            }
            i++;         // move to the next element in a
        }
        else {          // if b[j] is smaller than a[i]
            if (unionArray.size() == 0 || unionArray.back() != b[j]){     // check if the last element in unionArray is not equal to b[j]
                unionArray.push_back(b[j]);             // add b[j] to unionArray
            }
            j++;
        }
    }

    while(j < n2){      // if there are remaining elements in b
        if (unionArray.size() == 0 || unionArray.back() != b[j]){   // check if the last element in unionArray is not equal to b[j]
            unionArray.push_back(b[j]);
        }
        j++;
    }

    while(i < n1){      // if there are remaining elements in a
        if(unionArray.size() == 0 || unionArray.back() != a[i]){        // check if the last element in unionArray is not equal to a[i]
            unionArray.push_back(a[i]);
        }
        i++;
    }

    // Removed printing logic to make the function reusable

    return unionArray;
}

int main(){
    // ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    
    vector<int> a,b;
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    cout << "Enter the size of the second array: ";
    cin >> m;

    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }

    vector<int> result = optimalUnion(a, b);
    cout << "The union of Sorted Array : ";
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}