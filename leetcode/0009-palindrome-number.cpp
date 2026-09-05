// Problem: LeetCode 9 - Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/
// Approach: Reverse the integer using modulo/division and compare with original value.
// Time Complexity: O(log10(x))
// Space Complexity: O(1)
// Key Edge Cases: 
//   1. Negative numbers cannot be palindromes (e.g., -121 != 121-).
//   2. Numbers ending in 0 (except 0 itself) cannot be palindromes (e.g., 10 != 01).
//   3. Check `revN > INT_MAX / 10` before multiplying to prevent 32-bit overflow.
class Solution {
public:
    bool isPalindrome(int x) {

        int og=x;
        if (x<0){
            return false;
        }
        else if(x>0 && x%10==0){
            return false;
        }
        else {
            int revN=0;
            while(x!=0){
                int lastdigit= x%10;
                if(revN>INT_MAX/10){
                    return false;
                }
                revN=(revN*10)+lastdigit;
                x=x/10;
            }
            if(revN==og){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
