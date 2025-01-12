#include<iostream>
using namespace std;

//funtion declare + define
int findmax(int a, int b, int c) {
    if (a > b && a > c){
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else{   
        return c;
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    //function calling
    cout << findmax(a, b, c) << endl;
    // int maxx = findmax(a, b, c);
    // cout << maxx << endl;
    return 0;
}

