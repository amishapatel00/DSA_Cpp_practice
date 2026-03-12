/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]*/
/* Time complexity:O(n + m)
   Space complexity:O(n + k)*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         // Put nums1 elements into unordered_set for O(1) lookup
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> result;

        // Check elements of nums2
        for(int x : nums2){
            if(s.count(x)){       // x is in nums1
                result.insert(x); // add to result
            }
        }

        // Convert to vector and return
        return vector<int>(result.begin(), result.end());
    }
};