class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = arr[0];
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};
