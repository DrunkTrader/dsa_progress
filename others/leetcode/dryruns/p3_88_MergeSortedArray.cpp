class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {  //
            int midx = m - 1;       // Index of last element in nums1
            int nidx = n - 1;       // Index of last element in nums2
            int right = m + n - 1;  // Index of last element in merged array
    
            while (nidx >= 0) {     // While there are elements in nums2
                if (midx >= 0 && nums1[midx] > nums2[nidx]) {       // If element in nums1 is greater
                    nums1[right] = nums1[midx];             // Copy element from nums1
                    midx--;                 // Move to next element in nums1
                } else {                // If element in nums2 is greater
                    nums1[right] = nums2[nidx];        // Copy element from nums2
                    nidx--;            // Move to next element in nums2
                }
                right--;        // Move to next element in merged array in left direction
            }        
        }
    };