//push the max to the last by doing adjacent swapping.
//didswap=0 means already sorted and bubble sort didnt happen
//and didswap=1 means bubble sort took place

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int didswap=0;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    didswap=1;
                }
            }
            if(didswap==0){
                break;
            }
        }
        
    }
};
