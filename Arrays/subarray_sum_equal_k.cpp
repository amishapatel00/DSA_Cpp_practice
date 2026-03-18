/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2*/
/* TC:O(n^2)
   SC:O(1)*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};
/*Optimized code:Time Complexity: O(n)
                 Space Complexity:O(n)
  */
 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        vector<int>prefix_sum(nums.size(),0);
        prefix_sum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }
        for(int j=0;j<nums.size();j++){
            if(prefix_sum[j]==k){
                count++;
            }
            int val=prefix_sum[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            if(m.find(prefix_sum[j])==m.end()){
               m[prefix_sum[j]]=0;
            }
             m[prefix_sum[j]]++;
        }
        return count;
    }
};