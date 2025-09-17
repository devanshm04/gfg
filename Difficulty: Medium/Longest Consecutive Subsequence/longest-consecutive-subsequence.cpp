class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.size()==0) return 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int longest = 1 ;
        int current = 1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                if(arr[i] - arr[i-1]==1){
                    current++;
                }else{
                    longest = max(current,longest);
                    current = 1;
                }
            }
        }
        return max(longest,current);
    }
};