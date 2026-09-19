class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int i=0;
        int n = arr.size();
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        arr.resize(i+1);
        return arr;
    }
};
