#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class Solution
{
private:
          // Hash set for O(1) lookups to check if a stone exists at a specific position
          unordered_set<int> stonePositions;

          // Memoization table: stores "stonePosition_lastStep" -> true/false
          unordered_map<string, bool> memo;

          int lastStone;

          bool solve(int currStone, int lastStep)
          {
                    // Base case: successfully reached the destination stone
                    if (currStone == lastStone)
                    {
                              return true;
                    }

                    // Create a unique key for the current state
                    string key = to_string(currStone) + "_" + to_string(lastStep);

                    // If this state was already calculated, return the cached result
                    if (memo.find(key) != memo.end())
                    {
                              return memo[key];
                    }

                    // Try all three possible next step sizes: k-1, k, k+1
                    for (int nextStep = lastStep - 1; nextStep <= lastStep + 1; nextStep++)
                    {
                              // Steps must be greater than 0 to move forward
                              if (nextStep > 0)
                              {
                                        int nextStone = currStone + nextStep;

                                        // Only jump if there is actually a stone at the next position
                                        if (stonePositions.count(nextStone))
                                        {
                                                  if (solve(nextStone, nextStep))
                                                  {
                                                            return memo[key] = true;
                                                  }
                                        }
                              }
                    }

                    // Cache and return false if no paths from this state reach the end
                    return memo[key] = false;
          }

public:
          bool canCross(vector<int> &stones)
          {
                    // Handle the edge case where the second stone is unreachable
                    if (stones[1] != 1)
                    {
                              return false;
                    }

                    lastStone = stones.back();

                    // Populate the set for fast position lookups
                    for (int stone : stones)
                    {
                              stonePositions.insert(stone);
                    }

                    // Start recursion from the second stone (position 1) with an initial step of 1
                    return solve(1, 1);
          }
};
