//problem 2: to create a union of two arrays , assuming no duplicates in the arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {6,7,8,9,10,11};
    int size_brr = sizeof(brr)/sizeof(brr[0]);

    vector<int> unionArr;

    //push all element of arr into unionArr
    for(int i = 0; i < size_arr; i++){
        unionArr.push_back(arr[i]);
    }

    //push all element of brr into unionArr
    for(int i = 0; i < size_brr; i++){
        unionArr.push_back(brr[i]);
    }

    //printing the unionArr
    cout << "New Array :" << endl;
    for(int i = 0; i < unionArr.size(); i++){
        cout << unionArr[i] << " ";
    }
    return 0;
}