// find the max number in the Array
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

void maxnum(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i < size; i++){
        if(arr[i] > maxi) {
            maxi = arr[i];                  //found a number greater than maxi, so updated maxi
        }
    }
    cout << "maximum number is: " << maxi << endl;
}

int main(){
    int a[] = {10,50,40,2,0,6,980,69};
    int size = sizeof(a)/sizeof(a[0]);        //size of wholw array divided by size of a integer (32/4 = 8)
    maxnum(a,size);
    return 0;
}
