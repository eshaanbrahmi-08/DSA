//BRUTE FORCE APPROACH TC- O(N log N)
class Solution {
  public:
  
    vector<int> qs(vector<int> &arr,int low,int high){
        if(low<high){
            int pindex=part(arr,low,high);
            qs(arr,low,pindex-1);
            qs(arr,pindex+1,high);
        }
        return arr;
    }
    
    int part(vector<int> &arr,int low,int high){
        int pivot=arr[low];
        int i=low,j=high;
        
        while(i<j){
            while (arr[i]<=pivot && i<high) i++;
            while (arr[j]>pivot && j>low) j--;
            if (i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    
    int largest(vector<int> &arr) {
        int low=0;
        int high=arr.size()-1;
        vector<int> large=qs(arr,low,high);
        return large[high];
        
    }
};

//OPTIMAL APPROACH TC- O(N)
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>=max){
                max=arr[i];
            }
        }
        return max;
        
    }
};
