#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){
    if(n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl;        //Base Case
        return;
    }
    sort(arr, arr+n);
    int secondSmall = arr[1];
    int secondLarge = arr[n-2];
    
    cout << "Second Smallest is : " << secondSmall << endl;
    cout << "Second Largest is : " << secondLarge << endl;
}

int main(){
    int arr[]={1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}

// Time Complexity: O(NlogN)
// Space Complexity: O(1)