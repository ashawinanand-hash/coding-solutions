class Solution {
public:
    int reverse(int x) {
      double ans = 0;
      if(x<0){
         while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
      return ans;
      }
      while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
      return ans;  
    }
};