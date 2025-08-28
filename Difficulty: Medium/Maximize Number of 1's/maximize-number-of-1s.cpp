class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int j=0;
        int i=0;
        int zero=0;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zero++;
            }while(zero>k){
                if(arr[j]==0){
                    zero--;
                }
                j++;
            }
             ans = max(ans,i-j+1);
        }
        return ans;
    }
};
