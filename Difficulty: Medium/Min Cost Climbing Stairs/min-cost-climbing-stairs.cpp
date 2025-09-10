//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        int prev0 = cost[0];
        int prev1 = cost[1];
        
        for(int i=2;i<n;i++){
           int curr = min(prev0,prev1) + cost[i];
           prev0 = prev1;
           prev1 = curr;
        }
        return min(prev0,prev1);
    }
};