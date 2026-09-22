//we first reverse the whole array then the halfs for right.... but for left rotation we first reverse the halves then 
//the whole array.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.begin()+n);
        reverse(nums.begin(),nums.begin()+n);
    }
};
