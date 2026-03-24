/*Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.*/
/* Time complexity:O(n)
   Space complexity:O(n)*/
   class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>m;
        int i=0,left=0,maxlength=0;
        for(int i=0;i<s.size();i++){
            while(m.find(s[i])!=m.end()){
              m.erase(s[left]);
              left++;
            }
            m.insert(s[i]);
            maxlength=max(maxlength,i-left+1);
        }
        return maxlength;  
    }
};