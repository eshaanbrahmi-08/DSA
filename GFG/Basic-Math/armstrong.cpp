class Solution {
  public:
    bool armstrongNumber(int n) {
        int og=n,sum=0;
        while(n>0){
            int ld=n%10;
            sum=sum+ pow(ld,3);
            n=n/10;
          
        }
        if(og==sum){
            return true;
        }
        else return false;
    }
};
