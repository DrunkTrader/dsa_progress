//This program demonstrate the counting of 0's and 1's in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,1,0,1,1,0,0,1,0};
    int size = 10;

    int count0 = 0, count1 = 0, others = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            others++;
        }
    }

    cout << "Number of 0's in the array: " << count0 << endl;
    cout << "Number of 1's in the array: " << count1 << endl;
    cout << "Number of other elements in the array: " << others << endl;
    return 0;
}