//JAI BAJRANG BALI

//website : https://cses.fi/problemset/task/1068
//Problem Name : Weird Algorithm by CSES Problem Sets
#include<bits/stdc++.h>
using namespace std;

void takeN(long long n){
    if (n == 1) {return;}

    else if (n%2 == 0) {
       long long even_n = n/2;
       n = even_n;
    //    takeN(n);
       cout << n << " ";
    }

    else if (n%2 != 0) {
        long long odd_n = (n*3) + 1;
        n = odd_n;
        cout << n << " ";
    }
        takeN(n);

}

int main(){
    int input;
    cin >> input;
    cout << input << " ";
    if (input >=1 && input <=1000000) {
        takeN(input);
    }
    return 0;
}