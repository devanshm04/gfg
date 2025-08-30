class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        //  00 01 02
        //  10 11 12
        //  20 21 22 
         int n = mat.size();
         int i=0;
         int j=0;
         vector<int>p(n,0);
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 p[j]+=mat[i][j];
             }
         }for(int i =0;i<n;i++){
             int count = 0;
             for(int j=0;j<n;j++){
                 if(mat[i][j]==0) count++;
             } 
             if(count==n-1&&p[i]==n) return i;
         }
         return -1;
    }
};