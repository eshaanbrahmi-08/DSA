class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        int leader=INT_MIN;
        vector<int> v;  // sc =o(n) just for returning not sorting.

      //tc =o(n)
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=leader) {
                leader=arr[i];
                v.push_back(leader);
            }
        }
      //tc= o(nlogn)
        sort(v.begin(),v.end(),greater<int>());
        return v;
    }
};
