class Solution {
  public:
  int palincount(int left,int right,string &s){
      int count=0;
      while(left>=0&&right<s.size()){
          if(s[left]==s[right]){
              count++;
              left--;
              right++;
          }
          else break;
      }
      return count;
  }
  
    int countPS(string &s) {
        
       int n=s.size();
       int oddcount = 0;
       int evencount = 0;
       
    //   odd
      for(int i=0;i<n;i++){
          oddcount+=palincount(i-1,i+1,s);
      }
      
    //   even
    for(int i=1;i<n;i++){
        evencount+=palincount(i-1,i,s);
    }
    
    return oddcount+evencount;
        
    }
};
