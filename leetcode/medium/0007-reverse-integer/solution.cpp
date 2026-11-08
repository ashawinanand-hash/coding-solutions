class Solution {
public:
    int reverse(int x) {
      long long ans = 0;
      if(x<0){
         while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
     if(ans < INT_MIN){
        return 0;
     }
    
      return ans;
      }
      while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
    if(ans > INT_MAX)
    return 0;

      return ans;  
    }
};