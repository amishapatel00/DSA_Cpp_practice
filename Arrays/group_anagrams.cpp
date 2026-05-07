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