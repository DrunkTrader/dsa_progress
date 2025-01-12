//problem: to find the unique elements in the array where every element is repeated twice except one element

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;

    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }

    return ans;
    
}
int main(){
    //taking input size of the array
    int n;
    cin >> n;

    //declaring a vector of size n
    vector<int> arr(n);
    cout << "enter the elements :" << endl;

    //taking input elements of the array
    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    //finding the unique element
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is " << uniqueElement << endl;
    return 0;
}