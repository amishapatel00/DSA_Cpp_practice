Container With Most Water | Two Pointer Approach (O(n))


C++
Intuition
We are given heights of vertical lines, and we need to find two lines that together form a container holding the maximum water.

Water stored depends on:

Width = distance between two indices → (j - i)
Height = minimum of the two heights → min(height[i], height[j])

👉 So:

Area = width × min(height[i], height[j])

Instead of checking all pairs (O(n²) ❌), we use a smarter approach.

Approach
Start with two pointers:
i = 0 (left)
j = n - 1 (right)
Calculate area:
width = j - i
height = min(height[i], height[j])
Update maximum area.
Move the pointer pointing to the smaller height:
Because moving the larger one will never increase area.
Repeat until i < j.

Complexity
Time complexity:
O(n) ✅ (single pass)

Space complexity:
O(1) ✅ (no extra space)


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int currwater=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int width=j-i;
            int ht=min(height[i],height[j]);
                currwater=width*ht;
                maxwater=max(maxwater,currwater);
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
        }
        return maxwater;
    }
};