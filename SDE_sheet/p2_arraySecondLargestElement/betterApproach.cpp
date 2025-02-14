#include<bits/stdc++.h>
using namespace std;

void betterGetElements(int arr[], int size){
    int smallest = INT_MAX,secondSmallest= INT_MAX, largest = INT_MIN, secondLargest = INT_MIN;
    
    //Base case : if the array have only 1 element
    if(size==0 || size==1){
        cout << -1 << " " << -1 << endl;
    }

    //traversing to get the largest and the smallest elements
    for(int i = 0; i < size; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    //2nd time traversing : to get the secondLargest & the secondSmallest element
    for(int i = 0; i < size; i++){
        if( arr[i] < secondSmallest && arr[i]!=smallest){
            secondSmallest = arr[i];
        }
        if( arr[i] > secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }

    cout << "Second Smallest is :" << secondSmallest<< endl;
    cout << "Second largest is :" << secondLargest<< endl;
}

int main(){
    int arr[]= {1,2,4,6,7,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    betterGetElements(arr,n);
    
    return 0;
}