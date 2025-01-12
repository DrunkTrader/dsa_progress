//problem : to find the intersection of two arrays
//gives the common element between two arrays
#include<bits/stdc++.h>
using namespace std;

void intersectionElements(){
    
}
int main(){
    int arr[] = {1,2,3,4,5};
    int brr[] = {4,5,6,7,8};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int size_brr = sizeof(brr)/sizeof(brr[0]);

    //linear search for each element of arr in brr
    //outer loop for arr
    for(int i = 0; i < size_arr; i++){
        //inner loop for brr
        for(int j = 0; j < size_brr; j++){
            if(arr[i] == brr[j]){
                cout << arr[i] << " ";
            }
        }
    }

    
    return 0;
}
