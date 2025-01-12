//The program will take 5 integers as input and store them in an array. It will then print the current array and double the value of the array.
//The program will print the current array and double the value of the array.

#include <iostream>
using namespace std;

int ar() {
  int arr[5];
  for (int i=0; i < 5; i++) {
    cin >> arr[i];
  }

  // print the current array
cout << "The current array is: " << endl;
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << ' ';
  }

  // for double the value of the array
cout << "\nDouble the value of the array: " << endl;
  for (int i = 0; i < 5; i++) {
    int str = arr[i] * 2;
    cout << str << ' ';
  }
}

int main() {
  ar();
  return 0;
}