class Solution {
  public:
    void printTillN(int n) {
        if(n==0) return; 
        printTillN(n-1);  //backtracking the function calls ..
        cout << n << " "; // and printing cout.. makes it not execute untill it starts to backtrack 
        
    }
};
