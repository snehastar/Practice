class Solution {
  public:
    bool isBitSet(int n) {
        // code here
        if (n != 0 && (n & (n + 1)) == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
};