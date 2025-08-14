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
    ListNode* reverseLL(ListNode* head, ListNode* tail) {
        ListNode* prev = tail->next; // The next group after this segment
        ListNode* curr = head;

        while (prev != tail) { // Loop until we pass tail
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return tail; // tail is now the new head of this reversed segment
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next)
            return head;
        ListNode* temp = head;
        int cnt = 1;
        while (temp && cnt < k) {
            temp = temp->next;
            cnt++;
        }
        if (!temp) { // Less than k nodes remaining
            return head;
        } else {
            ListNode* nextList = reverseKGroup(temp->next, k);
            ListNode* reversedHead = reverseLL(head, temp);
            head->next = nextList;
            return reversedHead;
        }
    }
};