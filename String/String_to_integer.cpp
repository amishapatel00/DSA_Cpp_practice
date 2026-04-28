/*Intuition
The problem is about converting a string into an integer while handling edge cases like:

Leading spaces
Optional sign (+/-)
Non-digit characters
Overflow conditions

So the idea is to simulate how humans read numbers:

Ignore spaces
Detect sign
Read digits until invalid character
Handle overflow

Approach
Skip leading whitespaces
Check sign
If '-' → negative
If '+' → positive
Traverse digits
Convert each character to number
Update result: ans = ans * 10 + digit
Handle overflow
If value exceeds INT_MAX, clamp result
Return final answer with sign

Complexity
Time complexity:
Time Complexity: O(n)
(We traverse the string once)

Space complexity:
Space Complexity: O(1)
(No extra space used)
*/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        
        // 1. Skip spaces
        while(i < n && s[i] == ' ') i++;
        if(i == n) return 0;

        // 2. Handle sign
        int sign = 1;
        if(s[i] == '-') {
            sign = -1;
            i++;
        } else if(s[i] == '+') {
            i++;
        }

        // 3. Convert number
        long ans = 0;
        while(i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // 4. Handle overflow
            if(ans > INT_MAX) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            i++;
        }

        return (int)(sign * ans);
    }
};