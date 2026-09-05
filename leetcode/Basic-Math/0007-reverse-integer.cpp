// Problem: LeetCode 7 - Reverse Integer
// Link: https://leetcode.com/problems/reverse-integer/description/
// Approach: Digit extraction using modulo and division.
// Time Complexity: O(log10(x))
// Space Complexity: O(1)
// Key Edge Case: Check `revN > INT_MAX / 10` before multiplying to avoid 32-bit overflow.

#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        int revN = 0;
        while (x != 0) {
            int lastdigit = x % 10;
            if (revN > INT_MAX / 10 || revN < INT_MIN / 10) {
                return 0;
            }
            revN = (revN * 10) + lastdigit;
            x = x / 10;
        }
        return revN;
    }
};
