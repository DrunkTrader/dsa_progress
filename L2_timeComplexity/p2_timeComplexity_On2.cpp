#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int i = 0; i < n; i++){
            cout << "Hi1" << endl;
        }
    }

    for(int i = 0; i < n; i++){
        cout << "HI2" << endl;
    }
    return 0;
}

//This programs time complexity is O(n^2 + n) -> O(n^2)