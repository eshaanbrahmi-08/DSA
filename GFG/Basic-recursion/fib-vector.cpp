class Solution {
  public:
  
  
    void help(int n,vector<int> &v){
        if(n==1){             //base case v={0}
            v.push_back(0);
            return;
        }
        if(n==2){      // base case 
            help(1,v);   // calls help(1,v) and gets v={0}
            v.push_back(1);   //appends above v and gives v={0,1}
            return;
        }
        
        help(n-1,v);   // for n>=3 
        int s=v.size();   // gets size for indexing 
        v.push_back(v[s-1]+v[s-2]);    //sums the previous two index numbers and appends in the vector
        
    }
    vector<int> fibonacciNumbers(int n) {
        vector <int>v;
        if(n<=0) return v;
        help(n,v);
        return v;
        
    }
};
