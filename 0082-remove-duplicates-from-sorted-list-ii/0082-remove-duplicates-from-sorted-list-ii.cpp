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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(-1);      // Dummy head for result list
        ListNode* tail = &dummy; // Tail of result list

        ListNode* curr = head;
        while (curr) {
            bool isDuplicate = false;

            // Skip all duplicates of curr
            while (curr->next && curr->val == curr->next->val) {
                isDuplicate = true;
                curr = curr->next;
            }

            if (!isDuplicate) {
                // Attach unique node to result
                tail->next = curr;
                tail = tail->next;
            }

            curr = curr->next; // Move to next candidate
        }

        tail->next = nullptr; // End result list
        return dummy.next;
    }
};
