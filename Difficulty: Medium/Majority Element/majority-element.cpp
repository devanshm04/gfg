class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int count =0;
        int n=arr.size();
        int el=0;
        
        for(int i=0;i<n;i++){
            if(count==0){
                el = arr[i];
                count++;
            }else if(el==arr[i]){
                count++;
            }else{
                count--;
            }
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(el==arr[i]){
                cnt++;
            }
        }
       if(cnt>(n/2)){
           return el;
       }
       return -1;
    }
};