//my way
class Solution {
  public:
    int recursivePower(int n, int p) {
        if(p==0) return 1;
        if(p==1) return n;
        int s=recursivePower(n,p-1);
        return n*s;
        
        
    }
};

//optimal codeInstead of doing $n \times n \times n \dots$ nine times for $2^9$, 
//it calculates:$2^9 = 2 \times (2^4)^2$$2^4 = (2^2)^2$$2^2 = (2^1)^2$By storing half = recursivePower(n, p / 2) in a variable and reusing it (half * half), 
//you perform only $\log_2(p)$ multiplications rather than $p$ multiplications.
class Solution {
public:
    int recursivePower(int n, int p) {
        // Base case: any number raised to 0 is 1
        if (p == 0) return 1;

        // Recursively compute power for half the exponent
        int half = recursivePower(n, p / 2);

        // If p is even: n^p = (n^(p/2))^2
        if (p % 2 == 0) {
            return half * half;
        }
        // If p is odd: n^p = n * (n^(p/2))^2
        else {
            return n * half * half;
        }
    }
};
