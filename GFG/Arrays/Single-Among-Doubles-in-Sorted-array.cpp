//this is the optimal solution using XOR with TC=o(N), better was using maps hash but it will have TC=o(NlogM).
class Solution {
  public:
    int single(vector<int>& arr) {
        int n=arr.size();
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1=xor1^arr[i];
        }
        return xor1;
        
    }
};
