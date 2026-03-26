/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"

Output: true*/
/* TC: O(n)
   SC: O(1)*/
   class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> m1(256,-1);
        vector<int> m2(256,-1);
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[t[i]]) return false;
            m1[s[i]]=i;
        m2[t[i]]=i;
        }
        return true;
    }
};