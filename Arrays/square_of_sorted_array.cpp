/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]*/
/* Time Complexity: O(n)
- Best case: O(n)
- Average case: O(n)  
- Worst case: O(n)

Space Complexity: O(n)
- Input: O(n)
- Output: O(n)
- Auxiliary: O(1)*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0;
        int right=nums.size()-1;
        int pos=ans.size()-1;
        while(left<=right){
            if(abs(nums[right])>abs(nums[left])){
                ans[pos]=(nums[right]*nums[right]);
               right--;
            }
            else{
                ans[pos]=(nums[left]*nums[left]);
               left++;
            }
            pos--;
        }
        return ans;
    }
};