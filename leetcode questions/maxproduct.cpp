// You are given a positive integer n.

// Return the maximum product of any two digits in n.

// Note: You may use the same digit twice if it appears more than once in n.

//  

// Example 1:

// Input: n = 31

// Output: 3

// Explanation:

// The digits of n are [3, 1].
// The possible products of any two digits are: 3 * 1 = 3.
// The maximum product is 3.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
    public:
        int maxProduct(int n) {
            vector<int> digits;
            unordered_map<int, int> freq;
    
            // Extract digits and build frequency map
            while (n > 0) {
                int d = n % 10;
                digits.push_back(d);
                freq[d]++;
                n /= 10;
            }
    
            int maxProd = 0;
    
            for (int i = 0; i < digits.size(); ++i) {
                for (int j = i; j < digits.size(); ++j) {
                    if (i == j) {
                        // Only allow same digit multiplication if it appears twice or more
                        if (freq[digits[i]] >= 2)
                            maxProd = max(maxProd, digits[i] * digits[i]);
                    } else {
                        maxProd = max(maxProd, digits[i] * digits[j]);
                    }
                }
            }
    
            return maxProd;
        }
    };
    