/*Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

 

Example 1:

Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.*/
/* time complexity:: O(n)
   space complexity:: O(n)*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int currSum=0;
        unordered_map<int,int>m;
       int result=0;
        m[0]=-1;

        for(int i=0;i<nums.size();i++){
            currSum+=(nums[i]==1)?1:-1;
            if(m.find(currSum)!=m.end()){
                result=max(result,i-m[currSum]);
            }
            else{
                m[currSum]=i;
            }
        }
        return result;

    }
};