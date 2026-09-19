//Time Complexity: O(N) — Single pass through the array.
//Space Complexity: O(1) — No extra memory allocated.
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n=arr.size();

        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
