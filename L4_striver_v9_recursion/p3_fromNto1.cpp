//print in terms of N to 1
#include<bits/stdc++.h>
using namespace std;

/*
//MyCODE - @drunktradercode
void n_to_1fun(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    n_to_1fun(n-1);    
}
int main(){
    int n;
    cin >> n;
    n_to_1fun(n);
    return 0;
}
*/

// Code by Striver : @strivercode
void f(int i,int n){
    if(i<1)
        return;
    cout << i << endl;
    f(i-1,n);    
}
int main(){
    int n;
    cin >> n;
    f(n,n);
    return 0;
}

//Time Complexty : O(n)
//Space Complexty : O(n) Stack Space