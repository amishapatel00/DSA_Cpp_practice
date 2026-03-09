/*Problem-Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]*/
/* Time Complexity : O(n)
    Space Complexity: O(n)*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++){
            //calculating the index
            temp[(i+k)%nums.size()]=nums[i];

        }
        nums=temp;
    }
};

/*optimal solutions*/
/*Time Complexity : O(n)
    Space Complexity: O(1)*/
        class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            k=k%nums.size();
            reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        }
    };