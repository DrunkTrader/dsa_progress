/*
  author: drunktrader aka Neeraj Kumar
  created: 2025-03-28 18:32:46

  Brute Approach:   step 1 - let's take 'n' be total no. of elements in the vector, 'x' be the no. of non zero elements; 'n-x' be the zero elements.create a temp vector/ array (of size x) and store the x elements.
                    Step 2 - insert the elements in the original array.
                    Step 3 - insert the rest of the element from x to n-1 with '0'.
  */

#include<bits/stdc++.h>
using namespace std;

using vec = vector<int>;
vec moveZeros(vec &v1) {
    int n = v1.size();      //define size

    vector<int> temp;
    // insert in temp array
    for(int i = 0; i < n; i++){
        if( v1[i] != 0) temp.push_back(v1[i]);
    } 

    int tempsize = temp.size();
    // temp to original array
    for(int i = 0; i < tempsize; i++){
        v1[i] = temp[i];        
    }

    // fill remaining position with 0
    for(int i = tempsize; i < n; i++){
        v1[i] = 0;
    }

    return v1;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);   // fast I/O
    vec vectorr = {1, 0, 3, 5, 0, 5, 2, 6};

    int t = vectorr.size();
    
    //array before OR initial array
    cout << "Original Array : ";
    for(int i = 0; i < t; i++){
        cout << vectorr[i] << " ";
    }
    cout << endl;

    moveZeros(vectorr);

    //print the array after moving zeros
    cout << "After Moving zeros :";
    for(int i = 0; i < t; i++){
        cout << vectorr[i] << " ";
    }

    return 0;
}