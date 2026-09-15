class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<=n-2;i++){ // outer loop
            int min=i;
            for(int j=i;j<=n-1;j++){  //inner loop
                if(arr[j]<arr[min]){   //gives min element to the min index
                    min=j;   
                }
            }
            swap(arr[min],arr[i]);
        }
      
    }
};
