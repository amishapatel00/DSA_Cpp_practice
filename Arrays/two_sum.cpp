// Problem: Two Sum
// Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.
// Each input has exactly one solution, and the same element cannot be used twice.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           // Brute Force Approach
        // Check every pair of elements in the array
       
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
          // If the sum of two numbers equals the target
            if(nums[i]+nums[j]==target){
                return{i,j};
            }
        }
       }
       // If no pair is found (though problem guarantees one solution)
       return {};
    }
};