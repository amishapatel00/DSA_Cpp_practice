/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*/
/* tc:O(n)
   sc:O(1)
 */
class Solution {
    bool is_alphanumeric(char ch){
        if(ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
        }
        return false;
    }
public:
    bool isPalindrome(string s) {
        int st=0;int end=s.size()-1;
        while(st<end){
            if(!is_alphanumeric(s[st])){
                st++;
                continue;
            }
            if(!is_alphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
    }
};