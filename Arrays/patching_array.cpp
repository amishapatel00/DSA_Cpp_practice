/*Given a sorted integer array nums and an integer n, add/patch elements to the array such that any number in the range [1, n] inclusive can be formed by the sum of some elements in the array.

Return the minimum number of patches required.

 

Example 1:

Input: nums = [1,3], n = 6
Output: 1*/
/* Time complexity:O(n)
   Space complexity:O(1)*/
   class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long miss=1;int i=0;int patch=0;
        while(miss<=n){
            if(i<nums.size() && nums[i]<=miss){
                miss+=nums[i];
                i++;
            }
            else{
                miss+=miss;
                patch++;
            }
        }
        return patch;
    }
};