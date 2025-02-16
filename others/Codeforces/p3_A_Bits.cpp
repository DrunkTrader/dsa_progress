#include<bits/stdc++.h>
using namespace std;

int functionOP(int n ){
    int count = 0;
    
    while(n--){
        string x;
        cin >> x;
        if (x == "++X" || x == "X++"){
            count++;
        }
        else if ( x == "X--" || x=="--X"){
            count--;
        }
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << functionOP(n) << endl;
    return 0;
}