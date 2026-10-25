class Solution {
  public:
    string getBinaryRep(int n) {
        // Code here
        string ans = "";
        
        for(int i=31; i>=0; i--){
            ans += to_string((n>>i)&1U);
        }
        
        return ans;
    }
};