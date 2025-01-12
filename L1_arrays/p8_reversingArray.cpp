#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end) {
        //step1 : swap the extreme ends value
        swap(arr[start], arr[end]);
        //step 2: update the start index by 1
        start++;
        //step 3: update the end index by -1
        end--;
    }

    //step 4: print the reversed Array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    return 0;
}