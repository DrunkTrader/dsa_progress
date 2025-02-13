#include<bits/stdc++.h>
using namespace std;

void tt(int d,int sumTime, int minTime, int maxTime){
    if ((1 <=d <= 30 && 0 <= sumTime <= 240) && ( 0 <= minTime <= maxTime <=8)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main(){
    int d, sumTime, minTime, maxTime;
    cin >> d >> sumTime;
    cin >> minTime >> maxTime;
    tt(d, sumTime, minTime, maxTime);
    return 0;
}