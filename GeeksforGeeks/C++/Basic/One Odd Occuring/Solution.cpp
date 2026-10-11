class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int ans = arr[0];
        int l = arr.size();
        for(int i=1; i<l; i++){
            ans ^= arr[i];
        }
        return ans;
    }
};