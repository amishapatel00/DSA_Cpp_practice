// Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:


// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
 

// Constraints:

// The number of nodes in the list is sz.
// 1 <= sz <= 30
// 0 <= Node.val <= 100
// 1 <= n <= sz
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 //brute force approach
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        long long count=0;
        
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
         // Edge case: delete head
        if(count == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp=head;
        int res=count-n;
        while(res>1){
            temp=temp->next;
            res--;
        }
        ListNode * deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        return head;


        
    }
};