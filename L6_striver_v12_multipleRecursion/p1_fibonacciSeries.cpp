//WAP to give fibonacci number for the nth memeber of the series.

#include<bits/stdc++.h>
using namespace std;

int fibonacciOf(int n){
    if (n <= 1) return n;
    int lastFib = fibonacciOf(n-1);
    int secLastFib = fibonacciOf(n-2);

    return lastFib + secLastFib;
}
int main(){
    int n;
    cin >> n;
    cout << fibonacciOf(n);
    return 0;
}