class Solution {
public:
    bool isPowerOfFour(int n) {
        int low = 0;
        int high = n;
        int mid;
        if(n<=0){
            return false;
        }
        while(low<=high){
        mid = (low+high)/2;
        
        if(pow(4,mid) == n){
            return true;
        }
        else if(pow(4,mid) > n){
           high = mid-1;

        }
        else{
          low = mid+1;
        }
        }
        return false;
    }
};