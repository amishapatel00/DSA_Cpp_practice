/*
Problem: Find the Second Largest Element in an Array

Approach:

1. Traverse the array only once.
2. Maintain two variables:

   * largest → stores the maximum element
   * secondLargest → stores the second maximum element
3. If the current element is greater than largest:

   * update secondLargest = largest
   * update largest = current element
4. If the current element is smaller than largest but greater than secondLargest:

   * update secondLargest
5. This condition ensures duplicates of the largest element are ignored.

Edge Cases:

* If all elements are equal, there is no second largest element, so return -1.
* Works for arrays containing negative numbers as well.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>second){
                second=arr[i];
            }
        }
        if(second == INT_MIN) return -1;

        return second;
    }
};