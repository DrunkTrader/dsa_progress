#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index of the found element
        }
    }
    return -1;  // Return -1 if not found
}

int main(){
    int arr[] = {5,6,7,8,9};
    int size = 5;
    int key;
    cout << "Enter the key to search: " << endl;
    cin >> key;

    if(linearSearch(arr,size,key)){                  //METHOD 1 - Using return statement
        cout << "Key is found" << endl;
    }
    else{
        cout << "Key is not found" << endl;
    }
    return 0;
}