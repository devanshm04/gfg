class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int left = 0;
        int right = n-1;
        int area = 0;
        
        while(left<right){
            int h = min(arr[left],arr[right]);
            int b = right-left;
            area=max(area,h*b);
            
            if(arr[left]<arr[right]){
                left++;
            }else{
                right--;
            }
        }
        return area;
    }
};