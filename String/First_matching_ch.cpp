// you are given a string s of length n consisting of lowercase English letters.

// Return the smallest index i such that s[i] == s[n - i - 1].

// If no such index exists, return -1.

 

// Example 1:

// Input: s = "abcacbd"

// Output: 1

// Explanation:

// At index i = 1, s[1] and s[5] are both 'b'.

// No smaller index satisfies the condition, so the answer is 1.
/* TC = O(n)
   SC = O(1)*/
class Solution {
public:
    int firstMatchingIndex(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]==s[s.size()-i-1]){
                return i;
            }
        }
        return -1;
    }
};