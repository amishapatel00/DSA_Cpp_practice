// Given an array of non-negative integers arr, you are initially positioned at start index of the array. When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach any index with value 0.

// Notice that you can not jump outside of the array at any time.

// Example 1:

// Input: arr = [4,2,3,0,3,1,2], start = 5
// Output: true
// Explanation:
// All possible ways to reach at index 3 with value 0 are:
// index 5 -> index 4 -> index 1 -> index 3
// index 5 -> index 6 -> index 4 -> index 1 -> index 3

class Solution
{
public:
          bool canReach(vector<int> &arr, int start)
          {
                    queue<int> q;
                    q.push(start);

                    while (!q.empty())
                    {
                              int curr = q.front();
                              q.pop();

                              // Found a zero!
                              if (arr[curr] == 0)
                                        return true;

                              // If arr[curr] is negative, we've already visited this spot
                              if (arr[curr] < 0)
                                        continue;

                              // Calculate next possible jumps
                              int right = curr + arr[curr];
                              int left = curr - arr[curr];

                              // Mark current index as visited by making it negative
                              arr[curr] = -arr[curr];

                              // Push valid jumps into the queue
                              if (right < arr.size())
                                        q.push(right);
                              if (left >= 0)
                                        q.push(left);
                    }

                    return false;
          }
};
