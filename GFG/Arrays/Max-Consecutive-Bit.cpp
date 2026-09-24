// this question asks about returning maximum consecutive 1's or 0's.  
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n=arr.size();
        int cnt=1;
        int maxlen=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxlen=max(maxlen,cnt);
        }
        return maxlen;
    }
};
