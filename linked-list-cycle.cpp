/*
    Given head of a linked list, determine if it has a cycle in it

    Slow/fast pointers, if they ever intersect then there's a cycle

    Time: O(n)
    Space: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Check if the linked list is empty
        if (head == NULL) {
            return false;
        }
        // Initialize two pointers, slow and fast, both starting from the head
        ListNode* slow = head;
        ListNode* fast = head;
        // Traverse the linked list until fast reaches the end or encounters a cycle
        while (fast->next != NULL && fast->next->next != NULL) {
            // Move slow pointer one step forward
            slow = slow->next;
            // Move fast pointer two steps forward
            fast = fast->next->next;
            // If slow and fast pointers meet, there's a cycle, return true
            if (slow == fast) {
                return true;
            }
        }
        // If the loop completes without finding a cycle, return false
        return false;
    }
};
