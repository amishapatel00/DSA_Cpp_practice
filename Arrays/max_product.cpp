/*Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note that the product of an array with a single element is the value of that element.

Example 1:

Input: nums = [2,3,-2,4]
Output: 6*/
 /*Time complexity: O(n^2)
   Space complexity: O(1)*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=nums[0];

        for(int i=0;i<nums.size();i++){
            int ans=1;
            for(int j=i;j<nums.size();j++){
                ans*=(nums[j]); 
             largest=max(largest,ans);
            }
        }
        return largest;

    }
};
/*optimized
  Time complexity: O(n)
  Space complexity: O(1)*/
  class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=nums[0];
        int minpro=nums[0];
        int anspro=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxpro,minpro);
            }
            maxpro=max(nums[i],maxpro*nums[i]);
            minpro=min(nums[i],minpro*nums[i]);
            anspro=max(anspro,maxpro);
        }
        return anspro;
    }
};