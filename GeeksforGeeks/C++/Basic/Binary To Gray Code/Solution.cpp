class Solution {
  public:
    int binaryToGray(int n) {
        // code here
        n = n ^ (n>>1);
        return n;
    }
};