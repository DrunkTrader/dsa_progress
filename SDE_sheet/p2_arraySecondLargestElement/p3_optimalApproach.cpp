#include<bits/stdc++.h>
using namespace std;

//For Second Smallest number
int secondSmallest(int arr[], int n){
    int smallest_number = INT_MAX;
    int second_smallest = INT_MAX;
    
    for(int i = 0; i < n; i++){
        if (arr[i] < smallest_number){
            second_smallest = smallest_number;
            smallest_number = arr[i];
        }
        else if(arr[i]< second_smallest && arr[i] != smallest_number){
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int secondLargest(vector<int> &arr){}{
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest_number = INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0; i < n; i++){
        if (n == 0 || n == 1){                    //base case
            cout << -1 << " "<< -1 << endl;
            return -1;

        } else if (arr[i] > largest_number){
            second_largest = largest_number;
            largest_number = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest_number){
            second_largest = arr[i];
        }
        else if (largest_number == second_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main(){
    int arr1[] = {12, 35, 1, 10, 34, 1};

    cout << "second smallest : " << secondSmallest(arr1) << endl;
    cout << "second largest : " << secondLargest(arr1) << endl;
    return 0;
}

