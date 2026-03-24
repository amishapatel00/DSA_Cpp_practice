/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: ["bat"],["nat","tan"],*/
/*TC:O(n*k log k)
  SC:O(n*k)*/
  class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(auto val:strs){
            string temp=val;
            sort(val.begin(),val.end());
            m[val].push_back(temp);
            

        }
        for(auto val:m){
            ans.push_back(val.second);
        }
        return ans;
    }
};
  