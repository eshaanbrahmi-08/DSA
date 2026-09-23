// duplicate elements not allowed
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        int n=arr1.size();
        int m=arr2.size();
        vector<int> ans;
        int i=0,j=0;
        
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }
            else{
                if(ans.empty() || ans.back()!=arr1[i]) ans.push_back(arr1[i]); // if(ans.empty() || ans.back()!=arr1[i]) is used to make 
              //sure duplicate elements are present and if the input vector is empty or not
                i++;
                j++;
            }
        }
        return ans;
        
    }
};
