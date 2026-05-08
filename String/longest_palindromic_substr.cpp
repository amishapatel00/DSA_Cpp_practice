
class Solution {

   bool is_palindrome(string &s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;r--;
    }
    return true;
   }
public:
    string longestPalindrome(string s) {
        int maxlength=1;
        int n=s.size();
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int length=j-i+1;
                if(length>maxlength && is_palindrome(s,i,j)){
                    maxlength=length;
                    start=i;
                }
            }
        }
        return s.substr(start,maxlength);
    }
};