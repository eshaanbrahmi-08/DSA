// my solution.. TC= O(N logN) S.C=O(N)
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        int n=arr.size();
        
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp){
            if(x==it.first) return it.second;
        }
        return 0;
        
        
    }
};
// OPTIMAL SOLUTION  TC=O(N) ,SC=O(1).
class Solution {                                                             
  public:
    int findFrequency(vector<int> arr, int x) {
        int count=0;
        for(auto it : arr){
            if(it==x) count++;
        }
        return count;
    }
};


//use in buiit stl function count(start,stop,target)
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        return count(arr.begin(), arr.end(), x);
    }
};
