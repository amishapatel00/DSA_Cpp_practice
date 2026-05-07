/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        vector<vector<string>> ans;
        for(auto val:strs){
        string temp=val;
        sort(val.begin(),val.end());
        umap[val].push_back(temp);
        }
        for(auto val:umap){
            ans.push_back(val.second);
        }
        return ans;
    }
};