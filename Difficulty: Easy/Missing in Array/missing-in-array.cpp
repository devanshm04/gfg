class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long totalsum = n*(n+1)/2;
        long long arrsum=0;
        for(int i=0;i<arr.size();i++){
            arrsum=arrsum+arr[i];
        }
        return  (int)(totalsum-arrsum);
    }
};