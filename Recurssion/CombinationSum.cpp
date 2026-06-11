class Solution {
public:
set<vector<int>> s;
void getAllcombination(vector<int>& arr,int idx, int tar, vector<vector<int>> &ans, vector<int>combination){
 

    if(idx==arr.size() || tar<0) return ;
    if(tar==0){
        if(s.find(combination)==s.end()){
 ans.push_back({combination});
 s.insert(combination);
        }

       
        return;
    }
    combination.push_back(arr[idx]);
    //single
    getAllcombination(arr,idx+1,tar-arr[idx],ans,combination);
    //multiple
    getAllcombination(arr,idx,tar-arr[idx],ans,combination);
    //exclusion
    combination.pop_back();
        getAllcombination(arr,idx+1,tar,ans,combination);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int>combination;
        getAllcombination(arr,0,target,ans,combination);
        return ans;
    }
};