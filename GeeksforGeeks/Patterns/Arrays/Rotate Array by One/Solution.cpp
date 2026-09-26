class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int next = 0;
        int curr = 0;
        int len = arr.size();
        int last = arr[len-1];
        for(int i=len-1; i>0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }
};