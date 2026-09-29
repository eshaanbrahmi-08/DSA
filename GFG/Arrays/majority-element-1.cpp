class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int cnt=0,el;
        for(int i=0;i<arr.size();i++){
            if(cnt==0){
                cnt=1;
                el=arr[i];
            }
            else if(arr[i]==el){
                cnt++;
            }
            else cnt--;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==el) count++;
        }
        if(count>(arr.size()/2)){
            return el;
        }
        return -1;
    }
};
