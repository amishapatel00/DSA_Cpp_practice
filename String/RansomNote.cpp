/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(char ch:magazine){
            m[ch]++;
        }
        for(char ch:ransomNote){
            if(m[ch]>0){
                m[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};