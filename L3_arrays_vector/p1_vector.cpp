#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    vector<int> brr;

    arr.push_back(10); //inserts 10 at the end of the vector
    arr.push_back(20);
    //printing the vector
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
    cout << arr.size() << endl; //returns the size of the vector
    cout << arr.capacity() << endl; //returns the capacity of the vector

    //remove
    arr.pop_back(); //removes the last element from the vector

    //printing the vector
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }

    //check if vector is empty
    cout << brr.empty() << endl;
    return 0;
}