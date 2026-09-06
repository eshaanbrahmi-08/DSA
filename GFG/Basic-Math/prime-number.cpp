class Solution {
  public:
    bool isPrime(int n) {
        int cnt=0;
        if(n==1) return false;
        else{
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    cnt++;
                    if((n/i)!=i){
                        cnt++;
                    }
                }
                
            }
            if(cnt==0) return true;
            else return false;
        }
    }
};
