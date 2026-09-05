class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector <int> vec;
        for(int i=1;i<=sqrt(n);i++){ // i can use i*i<=n... meaning 6*6<=36 and 7*7<=36
            if(n%i==0){
                vec.emplace_back(i);
                if(i!=(n/i)){
                    vec.emplace_back(n/i);
                }
            }
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};

//The overall time complexity is $O(\sqrt{n} + d \log d)$, where $n$ is the input number and 
//$d$ is the total number of divisors of $n$.
