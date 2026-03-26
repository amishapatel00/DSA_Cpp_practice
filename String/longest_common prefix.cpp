/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"*/


/* Time Complexity: n strings × m comparisons = O(n × m)
   Space Complexity = O(1)*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if(strs.empty()) return " ";
       string prefix=strs[0];
       for(int i=1;i<strs.size();i++){
        int index=0;
        while(index<prefix.size() && index< strs[i].size()){
            if(prefix[index]==strs[i][index]){
                index++;
            }
                else{
                    break;
                }
            }
            prefix=prefix.substr(0,index);
            if(prefix=="") return "";
        }
       return prefix;

    }
};