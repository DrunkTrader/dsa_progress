//This program demonstrates that array is passed by reference in C++.
//Meaning the actual array is modified in the function and the changes are reflected in the main function as well.

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void inc(int arr[], int size){  
    cout << "Incremented arrayList: " << endl;
    for(int i=0; i < size; i++){
    arr[i]= arr[i]+10;
    }
    
    printArray(arr,size);
}

int main(){
    int arr[] = {5,6};
    int size = 2;

    inc(arr,size); //increment function

    cout << "The current array is: " << endl;
    printArray(arr,size); //print the array
    }