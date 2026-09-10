class Solution {
  public:
  
    void helper(int i, vector<int> &arr){  //created another subfunction which takes indexing as input to traverse through the vector...
    //and the already provided vector is sent as reference through the main reverseArray function.
        int n=arr.size();
        if(i>=n/2) return ;
        swap(arr[i],arr[n-i-1]);
        helper(i+1,arr);
    }
    
    
    void reverseArray(vector<int> &arr) {
        helper(0,arr);
    }
};
