class Solution {
  public:
 
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int,int> mpp;
        vector <vector<int>> vec;  //creating a 2d array like 2d vector
    
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp){
            vec.push_back({it.first,it.second});
        }
        
        return vec;
        
        
        
        
    }
};
