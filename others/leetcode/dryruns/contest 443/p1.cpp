#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n);
        int minCost = cost[0];
        answer[0] = minCost;
        
        for (int i = 1; i < n; ++i) {
            minCost = min(minCost, cost[i]);
            answer[i] = minCost;
        }
        
        return answer;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> cost1 = {5, 3, 4, 1, 3, 2};
    vector<int> result1 = sol.minCosts(cost1);
    cout << "Test Case 1 Output: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Test Case 2
    vector<int> cost2 = {1, 2, 4, 6, 7};
    vector<int> result2 = sol.minCosts(cost2);
    cout << "Test Case 2 Output: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}