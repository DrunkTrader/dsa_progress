#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Determines if a watermelon can be divided into two even parts.
 * 
 * This function checks if a given weight of a watermelon can be split into 
 * two parts, each having an even weight. The weight must be between 1 and 100 
 * inclusive. If the weight is even and not equal to 2, it prints "YES" and 
 * returns 0. Otherwise, it prints "NO".
 * 
 * @param w The weight of the watermelon.
 * @return int Returns 0 if the watermelon can be divided into two even parts, 
 * otherwise returns nothing.
 */
int watermelon(int w){
    if (1 <= w && w <= 100) {
        if (w%2 ==0 && w !=2) {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int main(){
    int w;
    cin >> w;
    watermelon(w);    
    return 0;
}