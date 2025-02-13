#include<bits/stdc++.h>
using namespace std;

void adjacentsum(int x, int y, int n){
    if (1 <=x && x <= 1000 && 1 <= y && y <= 1000 && 1 <= n && n <= 500){
        if (y == x + 1) {
            cout << "Yes" << endl;
        }
        else if (y == x) {
            cout << "No" << endl;
        }
        else if (y > x + 1){
            cout << "No" << endl;
        }
        else if (y < x) {
            if (x % 10 == 9) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }

        }
    }
    else
    cout << "No" << endl;
}

int main(){
    int x, y, t;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        adjacentsum(x, y, t);
    }
    return 0;
}