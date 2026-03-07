/*
 * Problem: Move Zeroes
 * ---------------------
 * Given an integer array `nums`, move all 0's to the end of the array 
 * while maintaining the relative order of the non-zero elements.
 *
 * Approach:
 * - Use a two-pointer technique:
 *   1. `lastNonZero` tracks the index where the next non-zero element should go.
 *   2. Iterate through the array, placing all non-zero elements at the front.
 *   3. Fill the remaining positions in the array with 0's.
 * - This approach runs in O(n) time and uses O(1) extra space.
 *
 * Example:
 * Input:  [0, 1, 0, 3, 12]
 * Output: [1, 3, 12, 0, 0]
 * Tags: #Array #TwoPointers #LeetCode
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
            }
           r++;
        }
            
    }
};