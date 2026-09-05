class Solution {
  public:
    bool isPalindrome(int n) {
        int og=n, revn=0;
        while(n!=0){
            int lastdigit= n%10;
            revn=(revn*10)+lastdigit;
            n=n/10;
        }
        
        if(revn==og){
            return true;
        }
        else{
            return false;
        }
    }
};
