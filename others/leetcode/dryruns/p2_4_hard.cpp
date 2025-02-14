#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    int m = nums1.size();
    int n = nums2.size();
    int median;
    int total_size;
    if (m > n){
        for(int i = 0; i < n; i++){
            nums1.push_back(nums2[i]);
        }
        nums1.sort();
        
    }
    else() {
        for(int i = 0; i < m; i++){
            nums2.push_back(nums1[i]);
        }
    }
    
}
int main(){
    
    return 0;
}