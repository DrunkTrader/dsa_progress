#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
        cout << "Hi" << endl;
        }
    }
    return 0;
}

//This program has a time complexity of O(n^2) 
//because of the nested loop. The outer loop runs n times 
//and the inner loop runs n times for each iteration of the 
//outer loop. So the total number of iterations is n*n = n^2.