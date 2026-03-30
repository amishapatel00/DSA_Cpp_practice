// You are given two strings s1 and s2, both of length 4, consisting of lowercase English letters.

// You can apply the following operation on any of the two strings any number of times:

// Choose any two indices i and j such that j - i = 2, then swap the two characters at those indices in the string.
// Return true if you can make the strings s1 and s2 equal, and false otherwise.


// Example 1:

// Input: s1 = "abcd", s2 = "cdab"
// Output: true
// Explanation: We can do the following operations on s1:
// - Choose the indices i = 0, j = 2. The resulting string is s1 = "cbad".
// - Choose the indices i = 1, j = 3. The resulting string is s1 = "cdab" = s2.
/* Time complexity: O(1)
   Space complexity:O(1)*/

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
       int even[26]={0},odd[26]={0};
       for(int i=0;i<4;i++){
        if(i%2==0){
            even[s1[i]-'a']++;
            even[s2[i]-'a']--;
        }
            else{
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;

            }}
            for(int i=0;i<26;i++){
                if(even[i]!=0 || odd[i]!=0){
                    return false;
                }

            }
        
       return true;

            
        
    }
};