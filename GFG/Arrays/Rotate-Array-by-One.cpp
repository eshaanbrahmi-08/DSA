//my solution is fine if i want to rotate by one element to the right only. (SWAPPING)
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size();
        int i=n-2;
        for(int j=n-1;j>=1;j--){
            swap(arr[j],arr[i]);
            i--;
        }
    }
};
//correct solution to rotate by ONE ELEMENT only to the right.
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size();
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        
        arr[0]=temp;
        
    }
};

//correct solution to rotate by ONE ELEMENT only to the left.
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size();
        int temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        
        arr[n-1]=temp;
        
    }
};
