//TC= O(N)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int l=arr[0];
        int sl=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>l){
                sl=l;
                l=arr[i];
            }
            
            else if(arr[i]>sl && arr[i]<l){
                sl=arr[i];
            }
        }
        
        return sl;
    }
};
