// using long long helps in stopping integer overflow
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long  n=arr.size()+1;
        
        long long sum=n*(n+1)/2;
        long long sum2=0;
        for(int i=0;i<n-1;i++){
            sum2+=arr[i];
        }
        
        return (int) sum-sum2;
        
        
    }
};

// this solution helps in stopping integer overflow.
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size()+1;
        
        int xor1=0,xor2=0;
        for(int i=0;i<n-1;i++){
            xor2=xor2^arr[i];
            xor1=xor1^(i+1);
        }
        xor1=xor1^n;
        return xor1^xor2;
        
    }
};
