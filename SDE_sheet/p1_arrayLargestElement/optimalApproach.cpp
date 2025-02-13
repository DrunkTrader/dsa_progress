#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr){
    int n = arr.size();
    int max = arr[0];

    //loop to traverse through the array and check for any larger element
    for(int i = 0; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    vector<int> arr1 = {2,3,0,5,1,4};
    cout << largestElement(arr1) << endl;
    return 0;
}