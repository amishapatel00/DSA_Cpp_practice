/* Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/

// Time Complexity : O(n)
// Space Complexity :O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fre=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(fre==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                fre++;
            }
            else{
                fre--;
            }
        }
        return ans;
    }
};