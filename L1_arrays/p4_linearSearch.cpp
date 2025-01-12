//This program is to demonstarate linear search in an array
#include <iostream>
using namespace std;


//METHOD 1: Using return statement
bool linearSearch(int arr[], int size, int key){
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

//METHOD 2: Using flag variable
bool linearSearchUsingFlag(int arr[], int size, int key){
    bool flag = 0;                                              //0 - false, 1 - true

    //linear search
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            flag = 1;                                    //key is found
            break; 
        }
    }
    return flag;
}

int main(){
    int arr[] = {5,6,7,8,9};
    int size = 5;
    int key;
    cout << "Enter the key to search: " << endl;
    cin >> key;

    // if(linearSearch(arr,size,key)){                  //METHOD 1 - Using return statement
    if(linearSearchUsingFlag(arr,size,key)){            //METHOD 2 - Using flag variable
        cout << "Key is found" << endl;
    }
    else{
        cout << "Key is not found" << endl;
    }
}


//METHOD 2: Using flag variable to check if key is found or not
