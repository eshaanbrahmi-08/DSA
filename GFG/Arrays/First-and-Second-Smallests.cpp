//TC =O(N)
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n=arr.size();
        vector<int> s;
        int smallest=arr[0];
        int ss=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(arr[i]<smallest){
                ss=smallest;
                smallest=arr[i];
            }
            else if(arr[i]!=smallest && arr[i]<ss){
                ss=arr[i];
            }
        }
        if(ss==INT_MAX) return s={-1}; 
        s.push_back(smallest);
        s.push_back(ss);
        return s;
    }
};
