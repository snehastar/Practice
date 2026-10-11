class Solution {
  public:
    int setBit(int n) {
        // code here
        int one = 1;
        int max = 10000000000;
        if((n&1) == 0){
            int ans = n|1;
            return ans;
        }
        for(int i=1;i<max;i++){
            
            if((n&(one<<i)) == 0){
                one = one<<i;
                break;
            }
        }
        int ans = n|one;
        return ans;
    }
};