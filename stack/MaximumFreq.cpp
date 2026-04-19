/*Design a stack-like data structure to push elements to the stack and pop the most frequent element from the stack.

Implement the FreqStack class:

FreqStack() constructs an empty frequency stack.
void push(int val) pushes an integer val onto the top of the stack.
int pop() removes and returns the most frequent element in the stack.
If there is a tie for the most frequent element, the element closest to the stack's top is removed and returned.
 

Example 1:

Input
["FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop", "pop"]
[[], [5], [7], [5], [7], [4], [5], [], [], [], []]
Output
[null, null, null, null, null, null, null, 5, 7, 5, 4]*/
class FreqStack {
public:
map<int ,int> freq;
map<int ,stack<int>>st;
int maxFreq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        st[freq[val]].push(val);
        maxFreq=max(maxFreq,freq[val]);

        
    }
    
    int pop() {
        if(st[maxFreq].empty()){
            maxFreq--;
        }
        int x=st[maxFreq].top();
        freq[x]--;
        st[maxFreq].pop();
        return x;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */