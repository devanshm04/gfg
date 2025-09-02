class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        long long sum = 0;
        long long org = (long long)n*(n+1)/2;
        
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        return org-sum;
    }
};