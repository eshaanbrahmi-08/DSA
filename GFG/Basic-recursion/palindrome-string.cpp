class Solution {
  public:
  
    bool check(int i, string &s){
        int n=s.size();
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return check(1+i,s);
    }
  
    bool isPalindrome(string& s) {
        check(0,s);
        
    }
};


class Solution {
  public:
  
    void check(int i, string &s){
        
        int n=s.size();
        if(i>=n/2) return;
        swap(s[i],s[n-i-1]);
        check(i+1,s);
    }
  
    bool isPalindrome(string& s) {
        string copy=s;
        check(0,s);
        if(copy==s) return true;
        else return false;
    }
};
