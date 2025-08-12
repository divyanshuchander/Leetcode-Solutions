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
    ListNode* deleteKNode(ListNode* head, int k) {
        ListNode* temp = head;
        if (k == 1) {
            head = head->next;
            delete temp;
            return head;
        } else {
            int count = 1;
            ListNode* prev;
            while (temp && count < k) {
                prev = temp;
                temp = temp->next;
                count++;
            }
            if (temp->next == nullptr) {
                delete temp;
                prev->next = nullptr;
                return head;
            } else {
                prev->next = temp->next;
                delete temp;
                return head;
            }
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head)
            return head;
        ListNode *slow = head, *fast = head;
        int cnt = 1;
        while (fast && fast->next) {
            fast = fast->next->next;
            cnt += 2;
        }
        if (!fast)
            cnt--;

        // how many steps to move slow ahead
        int steps = cnt - n + 1;
        head = deleteKNode(head, steps);
        return head;
    }
};