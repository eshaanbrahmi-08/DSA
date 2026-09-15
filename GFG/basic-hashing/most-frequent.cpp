class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        map<int,int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        
        int value=0,key;
        for(auto it: mpp){
            if(it.second>=value){
                value=it.second;
                key=it.first;
            }
        }
        
        return key;
    }
    
};
