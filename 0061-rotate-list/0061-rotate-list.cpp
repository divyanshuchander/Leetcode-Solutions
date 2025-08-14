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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next)
            return head;
        ListNode* fast = head;
        int totalCnt = 1;

        while (fast && fast->next) {
            fast = fast->next->next;
            totalCnt += 2;
        }
        if (!fast)
            totalCnt--;

        k = k % totalCnt;
        if (k == 0)
            return head;
        fast = head;
        ListNode* slow = head;

        for (int i = 0; i < k; i++) {
            fast = fast->next;
        }
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* newHead = slow->next;
        slow->next = nullptr;
        ListNode* temp = newHead;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = head;
        return newHead;
    }
};