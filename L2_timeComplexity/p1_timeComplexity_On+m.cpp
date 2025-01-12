//This program demonstrate the time & space complexity in 
#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,n,m;
    cin >> n>>m;
    for(int i = 0; i < n; i++){
        cout << "Hi" << endl;
    }
    for(int i = 0; i < m; i++){
        cout << "Hi2" << endl;
    }
    return 0;
}

//This programs time complexity is O(n) + O(m) = O(n+m)