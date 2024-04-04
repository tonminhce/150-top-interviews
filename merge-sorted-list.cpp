/*
    Given heads of 2 sorted linked lists, merge into 1 sorted list
    Ex. list1 = [1,2,4], list2 = [1,3,4] -> [1,1,2,3,4,4]

    Create curr pointer, iterate thru, choose next to be lower one

    Time: O(m + n)
    Space: O(1)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Check if both lists are empty
        if (list1 == NULL && list2 == NULL) {
            return NULL;
        }
        // If list1 is empty, return list2
        if (list1 == NULL) {
            return list2;
        }
        // If list2 is empty, return list1
        if (list2 == NULL) {
            return list1;
        }
        
        // Create a dummy node to simplify handling edge cases
        ListNode* dummy = new ListNode();
        ListNode *curr = dummy;
        
        // Merge the lists while both are not empty
        while (list1 != NULL && list2 != NULL) {
            // Compare the values of the current nodes of list1 and list2
            if (list1->val <= list2->val) {
                // If the value of the current node in list1 is less than or equal to that of list2,
                // append the current node of list1 to the merged list
                curr->next = list1;
                list1 = list1->next;
            } else {
                // Otherwise, append the current node of list2 to the merged list
                curr->next = list2;
                list2 = list2->next;
            }
            // Move the pointer in the merged list forward
            curr = curr->next;
        }
        
        // Append the remaining nodes of list1 or list2 to the merged list
        if (list1 == NULL) {
            curr->next = list2;
        } else {
            curr->next = list1;
        }
        
        // Return the merged list, excluding the dummy node
        return dummy->next;
    }
};

