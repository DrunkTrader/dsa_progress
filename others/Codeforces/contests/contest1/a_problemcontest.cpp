#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void logic(){
    int x,y;
    cin >> x >> y;

    if (y > x + 1) {
        cout << "NO\n";
        return;
    }
    else if (y == x + 1) {
        cout << "YES\n";
        return;
    }
    else if 
    for(int n = 1; n <= 1000000; n++){
        if(sum(n) == x && sum(n + 1) == y){
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        logic();
    }
    return 0;
}